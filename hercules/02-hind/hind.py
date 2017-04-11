#!/usr/bin/env python

from __future__ import print_function

import os
import requests
import sys

session = requests.Session()

class FakeRes:
    status_code = 0

def main(argv):
    """
    These are some comments about my program.
    """
    if (not val(argv)):
        exit(1)

    if (sys.stdin.isatty()):
        uid = raw_input("UID: ")
        os.system("stty -echo")
        sec = raw_input("Secret: ")
        print("")
        os.system("stty echo")
    else:
        uid = raw_input()
        sec = raw_input()

    token = api_auth(uid, sec)
    if (token == None):
        print("Unable to obtain API token!")
        exit(1)

    with open(argv[1]) as file:
        for user in file:
            user = user.replace("\n", "")
            loc = find(user, token)
            print("%8s: %s" % (user, loc))

def val(argv):
    if (len(argv) == 1):
        print("No input file specified!")
    elif (len(argv) > 2):
        print("Too many arguments!")
    elif (not os.path.exists(argv[1])):
        print("Does not exist: %s" % (argv[1]))
    elif (os.path.isdir(argv[1])):
        print("Not a file: %s" % (argv[1]))
    elif (not os.access(argv[1], os.R_OK)):
        print("Cannot read file: %s" % (argv[1]))
    else:
        return (True)
    return (False)

def api_auth(uid, secret):
    print("Getting API access token...")
    payload = "&".join([
        "grant_type=client_credentials",
        "client_id=" + uid,
        "client_secret=" + secret
    ])
    res = FakeRes()
    while (res.status_code != 200 and res.status_code != 401):
        res = session.post("https://api.intra.42.fr/oauth/token?" + payload)
    if (res.status_code == 401):
        return (None)
    return (res.json()["access_token"])

def find(user, token):
    if (not valid_user(user, token)):
        return ("\x1b[91mNo such user!\x1b[0m")

    res = FakeRes()
    while (res.status_code != 200):
        res = session.get("https://api.intra.42.fr/v2/users/%s/locations" % (user), headers={ "Authorization": "Bearer " + token })
    last_session = res.json()[0]
    if (last_session["end_at"] != None):
        return ("\x1b[93mNot logged in.\x1b[0m")
    else:
        return ("\x1b[92m" + last_session["host"] + "\x1b[0m")

def valid_user(user, token):
    res = FakeRes()
    while (res.status_code != 200 and res.status_code != 404):
        res = session.get("https://api.intra.42.fr/v2/users/%s" % (user), headers={ "Authorization": "Bearer " + token })

    if (res.status_code == 404):
        return (False)
    else:
        return (True)

try:
    main(sys.argv)
except KeyboardInterrupt:
    exit(1)

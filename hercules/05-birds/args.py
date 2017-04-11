def args(bools, opts, argv):
	a = {}

	i = 0
	l = len(argv)
	while i < l and len(argv[i]) > 0 and argv[i][0] == '-':
		arg = argv[i]

		#                    vv bool
		#                    ||v opt   v param
		# TODO: Handle e.g. -cxf 'place.file'
		if (arg == '--'):
			break
		elif (arg[1] == '-'):
			key = arg[2:]
		else:
			key = arg[1]

		if key in bools:
			bools[key](a)
		elif key in opts:
			if (i + 1 < l):
				opts[key](a, argv[i + 1])
				i += 1
			else:
				print('Missing required parameter :' + key)
				return (None)
		else:
			print('Invalid argument: ' + key)
			return (None)
		i += 1

	return (a)



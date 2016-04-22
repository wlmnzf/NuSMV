lines = [line.rstrip('\n') for line in open('output_corrected.txt')]

dictList = []
new = True

for line in lines:
	if len(line) > 0:
		if new:
			dictList.append({})
			new = False

		splits = line.split(':')
		dictList[-1][splits[0] + ''] = splits[1].strip()
	else:
		new = True

for d in dictList:
	print(d)

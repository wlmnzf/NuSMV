from PyBoolNet import FileExchange as FEX
from PyBoolNet import TrapSpaces as TS
from PyBoolNet import StateTransitionGraphs as STGs
from PyBoolNet import TemporalQueries as TQ
import networkx

primes = FEX.bnet2primes("raf_network.bnet")
stg = STGs.primes2stg(primes, "asynchronous")

#print stg.nodes()[2]

tspaces = TS.trap_spaces(primes, "all")
a = ", ".join(STGs.subspace2str(primes, x) for x in tspaces)
mintspaces = TS.trap_spaces(primes, "min")
b = ", ".join(STGs.subspace2str(primes, x) for x in mintspaces)

c = b.replace('-', '0')
c.split(',')
Variablen = tuple(map(int, c.split(',')))
for x in Variablen:
	print x
"""
lines = [line.rstrip('\n') for line in b]

dictList = []
new = True

for line in lines:
	if len(line) > 0:
		if new:
			dictList.append({})
			new = False

		splits = line.split(',')
		dictList[-1][splits[0] + ''] = splits[0].strip()
	else:
		new = True

for d in dictList:
	print(d)
"""
#print mintspaces[0]
#print mintspaces[1]
"""
for y in mintspaces:
	y = ", ".join(STGs.subspace2str(primes, x) for x in mintspaces)
	print y


for x in stg.nodes():
	if networkx.has_path(stg, x, "000"):
		print x
		print TQ.EF_oneof_subspaces(primes, x)
"""



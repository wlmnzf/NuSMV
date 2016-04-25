from PyBoolNet import FileExchange as FEX
from PyBoolNet import StateTransitionGraphs as STGs
from PyBoolNet import AttractorDetection as AD
from PyBoolNet import TrapSpaces as TS

import networkx as nx


primes = FEX.bnet2primes("raf_network.bnet")
update = "asynchronous"
tspaces = TS.trap_spaces(primes, "min")

stg = STGs.primes2stg(primes, update)


STGs.add_style_sccs(stg)
attractors = AD.compute_attractors_tarjan(primes, stg)
for A in attractors:
	print [STGs.state2str(x) for x in A]


"""
print tspaces
print ", ".join(STGs.subspace2str(primes, x) for x in tspaces)
"""

from PyBoolNet import FileExchange as FEX
from PyBoolNet import StateTransitionGraphs as STGs
from PyBoolNet import TrapSpaces as TS

"""
def run():
	primes = FEX.bnet2primes("raf_network.bnet")
	tspaces = TS.trap_spaces(primes, "min")

	print ", ".join(STGs.subspace2str(primes, x) for x in tspaces)


if __name__=="__main__":
	run()
"""

primes = FEX.bnet2primes("raf_network.bnet")
tspaces = TS.trap_spaces(primes, "min")

print tspaces
print ", ".join(STGs.subspace2str(primes, x) for x in tspaces)

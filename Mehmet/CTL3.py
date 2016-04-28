from PyBoolNet import FileExchange as FEX
#from PyBoolNet import InteractionGraphs as IGs
from PyBoolNet import StateTransitionGraphs as STGs
from PyBoolNet import ModelChecking as MC
from PyBoolNet import TrapSpaces as TS
from PyBoolNet import AttractorDetection as AD
#from PyBoolNet import QuineMcCluskey as QMC
from PyBoolNet import TemporalQueries as TQ

#import networkx


primes = FEX.bnet2primes("raf_network.bnet")
update = "asynchronous"
tspaces = TS.trap_spaces(primes, "all")
b = ", ".join(STGs.subspace2str(primes, x) for x in tspaces)
mintspaces = TS.trap_spaces(primes, "min")
a = ", ".join(STGs.subspace2str(primes, x) for x in mintspaces)

stg = STGs.primes2stg(primes, "asynchronous")
STGs.add_style_subspaces(primes, stg, tspaces)
stg.graph["label"] = "Beispiel 1: Alle Trap Spaces"
STGs.stg2image(stg, "Beispiel 1.pdf")

for x in mintspaces:
	sub = (x, {"fillcolor":"salmon"})
	STGs.add_style_subspaces(primes, stg, [sub])
stg.graph["label"] = "Beispiel 2: Minimale Trap Spaces"
STGs.stg2image(stg, "Beispiel 2.pdf")

print mintspaces
print a
print TQ.EF_oneof_subspaces(primes,mintspaces)
print tspaces
print b

#answer, counterex = AD.completeness_naive(primes, "asynchronous", tspaces)

spec = "CTLSPEC " + TQ.EF_oneof_subspaces(primes,mintspaces)
print spec
spec2 = "CTLSPEC " + TQ.EF_oneof_subspaces(primes,tspaces)
print spec2

"""
init = "INIT TRUE"
answer, counterex = MC.check_primes(primes, update, init, spec, DisableCounterExamples=False)
print answer
"""

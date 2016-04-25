from PyBoolNet import FileExchange as FEX
from PyBoolNet import InteractionGraphs as IGs
from PyBoolNet import StateTransitionGraphs as STGs
from PyBoolNet import ModelChecking as MC
from PyBoolNet import TrapSpaces as TS
from PyBoolNet import AttractorDetection as AD
from PyBoolNet import QuineMcCluskey as QMC
from PyBoolNet import TemporalQueries as TQ

import networkx


primes = FEX.bnet2primes("raf_network.bnet")
update = "asynchronous"
tspaces = TS.trap_spaces(primes, "min")
a = ", ".join(STGs.subspace2str(primes, x) for x in tspaces)

print tspaces
print a
print TQ.EF_oneof_subspaces(primes,tspaces)

spec = "CTLSPEC " + TQ.EF_oneof_subspaces(primes,tspaces)
print spec

init = "INIT TRUE"
answer = MC.check_primes(primes, update, init, spec, False)
print answer


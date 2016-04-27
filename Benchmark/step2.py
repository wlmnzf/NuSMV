

import os

from PyBoolNet import FileExchange as FEX
from PyBoolNet import ModelChecking as MC
from PyBoolNet import StateTransitionGraphs as STGs
from PyBoolNet import TrapSpaces as TS
from PyBoolNet import TemporalQueries as TQ


def run():

    for fname in os.listdir("."):
        if fname[-5:]!=".bnet": continue
            
        primes = FEX.bnet2primes(fname)

        states = []
        for mints in TS.trap_spaces(primes, "min"):
            state = STGs.random_state(primes, mints)
            state = STGs.state2str(state)
            states.append(state)

        specs = []
        for x in states:
            specs.append("CTLSPEC EF(%s)"%TQ.subspace2proposition(primes,x))
            break
        spec = "\n\n".join(specs)

        fname = fname.replace(".bnet",".smv")
        MC.primes2smv(primes, "asynchronous", "INIT TRUE", spec, fname)
     

if __name__=="__main__":
    run()

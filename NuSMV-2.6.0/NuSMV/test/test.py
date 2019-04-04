import pynusmv
from pynusmv.fsm import BddTrans


pynusmv.init.init_nusmv()
pynusmv.glob.load_from_file("test.smv")
pynusmv.glob.compute_model()
fsm = pynusmv.glob.prop_database().master.bddFsm

prop = pynusmv.glob.prop_database()[0]

spec = prop.expr
print(spec)
# print(fsm.count_states(fsm.init))
# for state in fsm.pick_all_states(fsm.init):
#     print(state.get_str_values())

# for state in fsm.pick_all_states(fsm.post(fsm.init)):
#     print(state.get_str_values())

# trans = BddTrans.from_string(fsm.bddEnc.symbTable,"next(time) = 0")
# for state in fsm.pick_all_states(trans.post(fsm.init)):
#     print(state.get_str_values())

bdd = pynusmv.mc.eval_ctl_spec(fsm, spec)# & fsm.reachable_states

satstates = fsm.pick_all_states(bdd)
# print(satstates)

for state in satstates:
   print(state.get_str_values())


# trans = BddTrans.from_string(fsm.bddEnc.symbTable)
# for state in fsm.pick_all_states(trans.post(fsm.init)):
#    print(state.get_str_values())


enc = fsm.bddEnc
print(enc.stateVars)
# print(enc.inputsVars)
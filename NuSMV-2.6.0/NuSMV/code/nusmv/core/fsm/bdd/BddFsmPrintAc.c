
#include "nusmv/core/fsm/bdd/BddFsm_private.h"

void BddFsm_print_interesting_states_info(const BddFsm_ptr self, 
					bdd_ptr interesting_states,
                                        const boolean print_states,
                                        const boolean print_defines,
                                        const boolean print_formula,
                                        OStream_ptr file)
{
  bdd_ptr reachable;
  bdd_ptr mask;
  double reached_cardinality;
  double search_space_cardinality;

  BDD_FSM_CHECK_INSTANCE(self);

  mask = BddEnc_get_state_frozen_vars_mask_bdd(self->enc);

  reachable = interesting_states;

  bdd_and_accumulate(self->dd, &reachable, mask);
  
  reached_cardinality = BddEnc_count_states_of_bdd(self->enc, reachable);
  search_space_cardinality = BddEnc_count_states_of_bdd(self->enc, mask);
  bdd_free(self->dd, mask);


  /* one of these flags can be enabled, not both */
  nusmv_assert(!print_states || !print_formula);
  if (print_states) {
    BddEnc_print_set_of_states(self->enc, reachable, false, print_defines,
                               (VPFBEFNNV) NULL, file, NULL);
  }
  
  // TODO hier stattdessen dump_factored_form verwenden?
  
  else if (print_formula) {
//     BoolEnc_ptr benc = BoolEncClient_get_bool_enc(BOOL_ENC_CLIENT(self->enc));
// 
//     const array_t* layer_names =
//       BaseEnc_get_committed_layer_names(BASE_ENC(self->enc));
// 
//     SymbTable_ptr st = BaseEnc_get_symb_table(BASE_ENC(self->enc));
//     NodeList_ptr all_vars = SymbTable_get_layers_sf_vars(st, layer_names);
//     NodeList_ptr scalar_vars = NodeList_create();
//     ListIter_ptr iter;
// 
//     /* encoding variables are not allowed in the wff printer */
//     NODE_LIST_FOREACH(all_vars, iter) {
//       node_ptr v = NodeList_get_elem_at(all_vars, iter);
//       if (BoolEnc_is_var_bit(benc, v)) continue;
//       NodeList_append(scalar_vars, v);
//     }
//     NodeList_destroy(all_vars);
// 
//     BddEnc_print_bdd_wff(self->enc, reachable, scalar_vars,
//                          false, false, 0, file);
// 
//     NodeList_destroy(scalar_vars);
     /* If we have diameter info, print it. Otherwise, we can only print
     the number of reachable states (ie. We do not have onion rings
     informations. For example, reachable states have been computed
     with Guided Reachability  */
    OStream_printf(file, "system diameter: %d\n", BddFsm_get_diameter(self));
  
    OStream_printf(file, "reachable states: %g (2^%g) out of %g (2^%g)\n",
          reached_cardinality, log(reached_cardinality)/log(2.0),
          search_space_cardinality, log(search_space_cardinality)/log(2.0));
  }

  bdd_free(self->dd, reachable);
}

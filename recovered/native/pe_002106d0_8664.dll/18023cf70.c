/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023cf70 */

undefined8 * FUN_18023cf70(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  
  *param_1 = std::locale::_Locimp::vftable;
  FUN_18023d240(local_res10,0);
  lVar2 = param_1[3];
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    if ((*(longlong *)(param_1[2] + lVar2 * 8) != 0) &&
       (lVar1 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(), lVar1 != 0)) {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar1,1);
    }
  }
  thunk_FUN_180290e40(param_1[2]);
  FUN_18023d290(local_res10);
  if (param_1[5] != 0) {
    thunk_FUN_180290e40();
  }
  param_1[5] = 0;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x38);
  }
  return param_1;
}


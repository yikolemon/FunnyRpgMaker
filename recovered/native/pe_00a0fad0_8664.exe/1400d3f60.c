/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3f60 */

undefined8 * FUN_1400d3f60(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  
  *param_1 = std::locale::_Locimp::vftable;
  FUN_1400d39b0(local_res10,0);
  lVar2 = param_1[3];
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    if ((*(longlong *)(param_1[2] + lVar2 * 8) != 0) &&
       (lVar1 = (*(code *)PTR__guard_dispatch_icall_140178c20)(), lVar1 != 0)) {
      (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar1,1);
    }
  }
  thunk_FUN_1401212e0(param_1[2]);
  FUN_1400d3a00(local_res10);
  if (param_1[5] != 0) {
    thunk_FUN_1401212e0();
  }
  param_1[5] = 0;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x38);
  }
  return param_1;
}


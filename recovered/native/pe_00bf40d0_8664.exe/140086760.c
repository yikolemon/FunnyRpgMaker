/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086760 */

undefined8 * FUN_140086760(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res10 [6];
  
  *param_1 = std::locale::_Locimp::vftable;
  FUN_140086460(local_res10,0);
  lVar2 = param_1[3];
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    if ((*(longlong *)(param_1[2] + lVar2 * 8) != 0) &&
       (lVar1 = (*(code *)PTR__guard_dispatch_icall_1401200f0)(), lVar1 != 0)) {
      (*(code *)PTR__guard_dispatch_icall_1401200f0)(lVar1,1);
    }
  }
  thunk_FUN_1400a1290((LPVOID)param_1[2]);
  FUN_1400864b0(local_res10);
  if ((LPVOID)param_1[5] != (LPVOID)0x0) {
    thunk_FUN_1400a1290((LPVOID)param_1[5]);
  }
  param_1[5] = 0;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    FUN_1400863f0();
  }
  return param_1;
}


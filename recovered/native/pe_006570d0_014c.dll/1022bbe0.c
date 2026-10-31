/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022bbe0 */

undefined4 * __thiscall FUN_1022bbe0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = std::locale::_Locimp::vftable;
  FUN_1022bea0(0);
  iVar4 = param_1[3];
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    piVar1 = *(int **)(param_1[2] + iVar4 * 4);
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_1035d810)();
      puVar3 = (undefined4 *)(*pcVar2)();
      if (puVar3 != (undefined4 *)0x0) {
        pcVar2 = *(code **)*puVar3;
        (*(code *)PTR_guard_check_icall_1035d810)(1);
        (*pcVar2)();
      }
    }
  }
  thunk_FUN_10274120(param_1[2]);
  FUN_1022bee0();
  if (param_1[6] != 0) {
    thunk_FUN_10274120(param_1[6]);
  }
  param_1[6] = 0;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(param_1,0x20);
  }
  return param_1;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022fee0 */

undefined1 * __thiscall FUN_1022fee0(undefined1 *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) goto LAB_1022ff33;
  if (*(int *)piVar1[8] == 0) {
LAB_1022ff16:
    pcVar4 = *(code **)(*piVar1 + 0xc);
    (*(code *)PTR_guard_check_icall_1035d810)(param_2);
    uVar5 = (*pcVar4)();
  }
  else {
    iVar2 = *(int *)piVar1[0xc];
    if (iVar2 < 1) goto LAB_1022ff16;
    *(int *)piVar1[0xc] = iVar2 + -1;
    pbVar3 = *(byte **)piVar1[8];
    *(byte **)piVar1[8] = pbVar3 + 1;
    *pbVar3 = param_2;
    uVar5 = (uint)param_2;
  }
  if (uVar5 != 0xffffffff) {
    return param_1;
  }
LAB_1022ff33:
  *param_1 = 1;
  return param_1;
}


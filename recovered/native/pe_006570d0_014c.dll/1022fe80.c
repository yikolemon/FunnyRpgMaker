/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022fe80 */

int * __fastcall FUN_1022fe80(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  uint uVar5;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) goto LAB_1022fecf;
  if (*(int *)piVar1[7] == 0) {
LAB_1022fead:
    pcVar4 = *(code **)(*piVar1 + 0x1c);
    (*(code *)PTR_guard_check_icall_1035d810)();
    uVar5 = (*pcVar4)();
  }
  else {
    iVar2 = *(int *)piVar1[0xb];
    if (iVar2 < 1) goto LAB_1022fead;
    *(int *)piVar1[0xb] = iVar2 + -1;
    pbVar3 = *(byte **)piVar1[7];
    *(byte **)piVar1[7] = pbVar3 + 1;
    uVar5 = (uint)*pbVar3;
  }
  if (uVar5 != 0xffffffff) {
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_1022fecf:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}


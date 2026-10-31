/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023b120 */

undefined1 * __thiscall FUN_1023b120(undefined1 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  code *pcVar4;
  short sVar5;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) goto LAB_1023b177;
  if (*(int *)piVar1[8] == 0) {
LAB_1023b154:
    pcVar4 = *(code **)(*piVar1 + 0xc);
    (*(code *)PTR_guard_check_icall_1035d810)(param_2);
    sVar5 = (*pcVar4)();
  }
  else {
    iVar2 = *(int *)piVar1[0xc];
    if (iVar2 < 1) goto LAB_1023b154;
    *(int *)piVar1[0xc] = iVar2 + -1;
    psVar3 = *(short **)piVar1[8];
    *(short **)piVar1[8] = psVar3 + 1;
    sVar5 = (short)param_2;
    *psVar3 = sVar5;
  }
  if (sVar5 != -1) {
    return param_1;
  }
LAB_1023b177:
  *param_1 = 1;
  return param_1;
}


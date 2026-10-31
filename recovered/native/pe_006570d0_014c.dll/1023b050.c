/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023b050 */

int * __fastcall FUN_1023b050(int *param_1)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  code *pcVar4;
  short sVar5;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) goto LAB_1023b0a7;
  if (*(int *)piVar1[7] == 0) {
LAB_1023b07d:
    pcVar4 = *(code **)(*piVar1 + 0x1c);
    (*(code *)PTR_guard_check_icall_1035d810)();
    sVar5 = (*pcVar4)();
  }
  else {
    iVar2 = *(int *)piVar1[0xb];
    if (iVar2 < 1) goto LAB_1023b07d;
    *(int *)piVar1[0xb] = iVar2 + -1;
    psVar3 = *(short **)piVar1[7];
    *(short **)piVar1[7] = psVar3 + 1;
    sVar5 = *psVar3;
  }
  if (sVar5 != -1) {
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_1023b0a7:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}


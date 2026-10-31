/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003033c */

void FUN_18003033c(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  
  uVar2 = param_1[1];
  uVar3 = 1;
  if ((int)(uint)uVar2 < 1) {
    uVar3 = (uint)uVar2;
  }
  piVar5 = (int *)(*param_1 + (uVar2 & 0xffffffff) * 4);
  do {
    piVar5 = piVar5 + -1;
    uVar1 = (uint)uVar2;
    uVar4 = uVar3;
    if ((int)uVar1 < 2) break;
    uVar2 = (ulonglong)(uVar1 - 1);
    uVar4 = uVar1;
  } while (*piVar5 == 0);
  uVar6 = (ulonglong)uVar4;
  uVar2 = param_1[2];
  if (uVar2 < uVar6) {
    (*(code *)param_1[3])(param_1,uVar6);
    uVar2 = param_1[2];
  }
  if (uVar6 < uVar2) {
    uVar2 = uVar6;
  }
  param_1[1] = uVar2;
  return;
}


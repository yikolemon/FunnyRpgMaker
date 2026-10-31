/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002fc7e */

void __fastcall FUN_1002fc7e(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1[1];
  uVar3 = 1;
  if ((int)uVar1 < 1) {
    uVar3 = uVar1;
  }
  do {
    uVar2 = uVar1;
    uVar4 = uVar3;
    if ((int)uVar2 < 2) break;
    uVar1 = uVar2 - 1;
    uVar4 = uVar2;
  } while (*(int *)(*param_1 + -4 + uVar2 * 4) == 0);
  uVar1 = param_1[2];
  if (uVar1 < uVar4) {
    (*(code *)param_1[3])(param_1,uVar4);
    uVar1 = param_1[2];
  }
  if (uVar4 < uVar1) {
    uVar1 = uVar4;
  }
  param_1[1] = uVar1;
  return;
}


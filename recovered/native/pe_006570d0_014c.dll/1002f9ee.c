/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002f9ee */

void __thiscall FUN_1002f9ee(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar2 = param_3;
    param_3 = param_4;
    param_4 = param_5;
    *(int *)(*param_1 + uVar3 * 4) = param_2;
    uVar3 = uVar3 + 1;
    param_5 = 0;
    param_2 = iVar2;
  } while ((param_4 != 0 || iVar2 != 0) || param_3 != 0);
  uVar1 = param_1[2];
  if (uVar1 < uVar3) {
    (*(code *)param_1[3])(param_1,uVar3);
    uVar1 = param_1[2];
  }
  if (uVar3 < uVar1) {
    uVar1 = uVar3;
  }
  param_1[1] = uVar1;
  param_1[0x25] = 0;
  return;
}


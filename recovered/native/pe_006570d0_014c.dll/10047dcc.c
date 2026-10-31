/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10047dcc */

void FUN_10047dcc(undefined4 *param_1,undefined4 *param_2,int param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  if (0 < param_3) {
    param_3 = param_3 + 1;
    do {
      uVar1 = *param_4;
      iVar3 = param_2[2];
      uVar2 = iVar3 + 1;
      if ((uint)param_2[3] < uVar2) {
        (**(code **)*param_2)(uVar2);
        iVar3 = param_2[2];
        uVar2 = iVar3 + 1;
      }
      param_2[2] = uVar2;
      *(undefined2 *)(param_2[1] + iVar3 * 2) = uVar1;
      param_3 = param_3 + -1;
    } while (1 < param_3);
  }
  *param_1 = param_2;
  return;
}


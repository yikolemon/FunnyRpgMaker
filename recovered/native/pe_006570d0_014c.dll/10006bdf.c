/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10006bdf */

void FUN_10006bdf(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uVar1 = *param_2;
    iVar3 = param_4[2];
    uVar2 = iVar3 + 1;
    if ((uint)param_4[3] < uVar2) {
      (**(code **)*param_4)(uVar2);
      iVar3 = param_4[2];
      uVar2 = iVar3 + 1;
    }
    param_4[2] = uVar2;
    *(undefined1 *)(param_4[1] + iVar3) = uVar1;
  }
  *param_1 = param_4;
  return;
}


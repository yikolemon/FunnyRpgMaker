/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004598d */

undefined4 * FUN_1004598d(undefined4 *param_1,undefined4 *param_2,undefined2 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2[2];
  uVar1 = iVar2 + 1;
  if ((uint)param_2[3] < uVar1) {
    (**(code **)*param_2)(uVar1);
    iVar2 = param_2[2];
    uVar1 = iVar2 + 1;
  }
  param_2[2] = uVar1;
  *(undefined2 *)(param_2[1] + iVar2 * 2) = param_3;
  *param_1 = param_2;
  return param_1;
}


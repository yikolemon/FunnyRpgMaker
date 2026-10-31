/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266ffd */

undefined4 * __thiscall FUN_10266ffd(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = param_2[6];
  *param_2 = 0;
  param_2[6] = 0;
  return param_1;
}


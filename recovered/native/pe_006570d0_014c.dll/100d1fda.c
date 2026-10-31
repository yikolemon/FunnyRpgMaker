/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d1fda */

void FUN_100d1fda(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = 0xb000000830000000;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *param_3;
  return;
}


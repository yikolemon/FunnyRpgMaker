/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d5ac5 */

void FUN_100d5ac5(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_1 = 0x30000000;
  return;
}


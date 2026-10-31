/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009a321 */

void FUN_1009a321(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_2[4];
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  param_1[3] = param_2;
  param_1[4] = uVar1;
  *param_1 = 0xc0000000;
  param_1[5] = (uint)*param_3;
  param_1[1] = 0x20000008;
  param_1[6] = (uint)*param_4;
  param_1[2] = 0x2000000c;
  return;
}


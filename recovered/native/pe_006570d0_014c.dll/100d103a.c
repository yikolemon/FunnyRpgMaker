/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d103a */

undefined4 * __fastcall FUN_100d103a(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  param_1[7] = 0;
  param_1[6] = 0;
  return param_1;
}


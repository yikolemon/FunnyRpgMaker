/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f7976 */

void __fastcall FUN_100f7976(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x10] = *(undefined4 *)(((uint)param_1 & 0xffff0000) + 8);
  *(undefined4 **)(((uint)param_1 & 0xffff0000) + 8) = param_1;
  return;
}


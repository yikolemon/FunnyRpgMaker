/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009a04a */

void __thiscall
FUN_1009a04a(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[4];
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  param_1[4] = param_2;
  param_1[5] = uVar1;
  *param_1 = 0xc0000000;
  param_1[1] = 8;
  uVar1 = param_3[4];
  if (7 < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  param_1[6] = param_3;
  param_1[7] = uVar1;
  param_1[1] = 0xc0000008;
  param_1[2] = 0x10;
  param_1[8] = *param_4;
  param_1[2] = 0x20000010;
  param_1[3] = 0x14;
  param_1[9] = *param_5;
  param_1[3] = 0x20000014;
  return;
}


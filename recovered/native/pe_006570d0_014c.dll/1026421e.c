/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026421e */

undefined8
FUN_1026421e(byte param_1,int param_2,undefined4 param_3,uint param_4,undefined4 *param_5)

{
  param_5[1] = (param_2 + 0x3ffU & 0x7ff | (uint)param_1 << 0xb) << 0x14 ^ param_4 & 0xfffff;
  *param_5 = param_3;
  return 0;
}


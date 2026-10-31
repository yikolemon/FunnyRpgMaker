/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10264260 */

undefined4 FUN_10264260(byte param_1,int param_2,uint param_3,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  
  uVar1 = (uint)param_1 << 0x1f | *param_5 & 0x7fffffff;
  uVar1 = ((param_2 + 0x7f) * 0x800000 ^ uVar1) & 0x7f800000 ^ uVar1;
  *param_5 = (uVar1 ^ param_3) & 0x7fffff ^ uVar1;
  return 0;
}


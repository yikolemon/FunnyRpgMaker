/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116b2f */

void FUN_180116b2f(undefined1 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(uint *)(DAT_180419160 + 0x2030) = *(uint *)(DAT_180419160 + 0x2030) | 8;
  *(undefined1 *)(lVar1 + 0x2075) = param_1;
  *(uint *)(lVar1 + 0x203c) = param_2 + (uint)(param_2 == 0);
  return;
}


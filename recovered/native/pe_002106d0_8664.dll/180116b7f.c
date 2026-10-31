/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116b7f */

void FUN_180116b7f(undefined4 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(uint *)(DAT_180419160 + 0x2030) = *(uint *)(DAT_180419160 + 0x2030) | 0x1000;
  *(uint *)(lVar1 + 0x2040) = param_2 + (uint)(param_2 == 0);
  *(undefined4 *)(lVar1 + 0x20a0) = param_1;
  return;
}


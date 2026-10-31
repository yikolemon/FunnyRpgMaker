/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180119f4c */

void FUN_180119f4c(float param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x1608);
  *(float *)(lVar1 + 0x15c) = (*(float *)(lVar1 + 100) - *(float *)(lVar1 + 0xd8)) + param_1;
  *(undefined1 *)(lVar1 + 0x199) = 1;
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116b67 */

void FUN_180116b67(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(uint *)(DAT_180419160 + 0x2030) = *(uint *)(DAT_180419160 + 0x2030) | 0x800;
  *(undefined4 *)(lVar1 + 0x209c) = param_1;
  return;
}


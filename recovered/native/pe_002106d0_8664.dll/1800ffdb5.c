/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ffdb5 */

void FUN_1800ffdb5(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(uint *)(DAT_180419160 + 0x1fa8) = *(uint *)(DAT_180419160 + 0x1fa8) | 1;
  *(undefined4 *)(lVar1 + 0x1fc0) = param_1;
  return;
}


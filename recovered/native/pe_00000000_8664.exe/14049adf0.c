/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14049adf0 */

uint FUN_14049adf0(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = FUN_1404a25a8();
  uVar2 = *(int *)(lVar1 + 0x28) * 0x343fd + 0x269ec3;
  *(uint *)(lVar1 + 0x28) = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}


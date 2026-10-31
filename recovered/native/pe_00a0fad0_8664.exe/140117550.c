/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140117550 */

uint FUN_140117550(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = FUN_140121578();
  uVar2 = *(int *)(lVar1 + 0x28) * 0x343fd + 0x269ec3;
  *(uint *)(lVar1 + 0x28) = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}


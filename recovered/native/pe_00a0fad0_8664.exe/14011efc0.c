/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011efc0 */

undefined4 FUN_14011efc0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14011fa00();
  lVar2 = FUN_14011d6e0();
  *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
  return uVar1;
}


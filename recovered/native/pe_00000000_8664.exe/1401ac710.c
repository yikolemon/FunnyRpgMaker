/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ac710 */

undefined4 FUN_1401ac710(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1401ad150();
  lVar2 = FUN_1401aae30();
  *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
  return uVar1;
}


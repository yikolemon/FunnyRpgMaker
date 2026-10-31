/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140190620 */

undefined4 FUN_140190620(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1401aaf10();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x30);
  }
  return 0;
}


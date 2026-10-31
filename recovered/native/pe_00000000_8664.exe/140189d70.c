/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189d70 */

undefined4 thunk_FUN_140190620(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1401aaf10();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x30);
  }
  return 0;
}


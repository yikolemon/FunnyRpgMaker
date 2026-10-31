/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140455ef0 */

undefined4 thunk_FUN_140480010(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14049e650();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x30);
  }
  return 0;
}


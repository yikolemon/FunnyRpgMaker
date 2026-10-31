/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001a040 */

longlong FUN_14001a040(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x20) != param_1 + 0x40) {
    thunk_FUN_1401aea30();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x158);
  }
  return param_1;
}


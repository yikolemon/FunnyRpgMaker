/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005ebd0 */

void FUN_14005ebd0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  while (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    thunk_FUN_1401aea30(*(undefined8 *)(param_2 + 0x10));
    thunk_FUN_14018e090(param_2,0x20);
    param_2 = lVar1;
  }
  return;
}


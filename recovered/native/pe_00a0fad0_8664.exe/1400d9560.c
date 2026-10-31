/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d9560 */

void FUN_1400d9560(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    thunk_FUN_1401212e0(*(undefined8 *)(lVar1 + 0x10));
    thunk_FUN_1401212e0(*(undefined8 *)(lVar1 + 0x20));
    thunk_FUN_1401212e0(*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


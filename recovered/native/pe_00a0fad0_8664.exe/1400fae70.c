/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400fae70 */

void FUN_1400fae70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    thunk_FUN_1401212e0(*(undefined8 *)(lVar1 + 0x10));
    thunk_FUN_1401212e0(*(undefined8 *)(lVar1 + 0x18));
    thunk_FUN_1401212e0(*(undefined8 *)(lVar1 + 0x20));
    return;
  }
  return;
}


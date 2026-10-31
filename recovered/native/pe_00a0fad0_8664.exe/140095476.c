/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140095476 */

void FUN_140095476(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  while (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    thunk_FUN_1401212e0(*(undefined8 *)(param_2 + 0x10));
    thunk_FUN_1400ddcd0(param_2,0x20);
    param_2 = lVar1;
  }
  return;
}


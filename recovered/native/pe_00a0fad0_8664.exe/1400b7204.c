/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b7204 */

void Unwind_1400b7204(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x368);
  while (param_2 + 0x270 != lVar1) {
    lVar1 = lVar1 + -0x20;
    FUN_140005242(lVar1);
  }
  return;
}


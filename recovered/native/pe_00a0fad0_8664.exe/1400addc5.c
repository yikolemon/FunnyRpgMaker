/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400addc5 */

void Unwind_1400addc5(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x348);
  while (param_2 + 0x38 != lVar1) {
    lVar1 = lVar1 + -0x20;
    FUN_1400017de(lVar1);
  }
  return;
}


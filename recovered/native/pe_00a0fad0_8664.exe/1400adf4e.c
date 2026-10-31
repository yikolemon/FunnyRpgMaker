/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400adf4e */

void Unwind_1400adf4e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x60;
  do {
    FUN_140005242(lVar1 + param_2 + 0x38);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x20);
  return;
}


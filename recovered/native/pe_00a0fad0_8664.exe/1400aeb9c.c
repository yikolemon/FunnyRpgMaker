/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aeb9c */

void Unwind_1400aeb9c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x80;
  do {
    FUN_140005242(lVar1 + param_2 + 0x20);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x20);
  return;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ae037 */

void Unwind_1400ae037(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    FUN_140005242(lVar1 + param_2 + 0x38);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x20);
  return;
}


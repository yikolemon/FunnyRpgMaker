/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400af9f1 */

void Unwind_1400af9f1(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x900;
  do {
    FUN_1400aecc8(lVar1 + param_2 + 0x28);
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x40);
  return;
}


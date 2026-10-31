/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007c7fe */

void Unwind_14007c7fe(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x40;
  do {
    FUN_1400017de(lVar1 + param_2 + 0x40);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x20);
  return;
}


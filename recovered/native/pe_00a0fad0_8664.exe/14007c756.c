/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007c756 */

void Unwind_14007c756(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if (param_2 + 0x40 != lVar1) {
    do {
      lVar1 = lVar1 + -0x20;
      FUN_1400017de(lVar1);
    } while (lVar1 != param_2 + 0x40);
  }
  return;
}


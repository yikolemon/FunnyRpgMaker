/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ad8bb */

void Unwind_1400ad8bb(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_2 + 0x36e) = 0;
  for (lVar1 = *(longlong *)(param_2 + 0x2d0); param_2 + 0x38 != lVar1; lVar1 = lVar1 + -0x40) {
    FUN_140016e5c(lVar1 + -0x18);
    FUN_1400017de(lVar1 + -0x38);
  }
  *(undefined1 *)(param_2 + 0x36e) = 0;
  return;
}


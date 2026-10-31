/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cf81a */

void Unwind_1400cf81a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_2 + 0x34e) = 0;
  for (lVar1 = *(longlong *)(param_2 + 0x2c8); param_2 + 0x20 != lVar1; lVar1 = lVar1 + -0x40) {
    FUN_140016e5c(lVar1 + -0x18);
    FUN_1400017de(lVar1 + -0x38);
  }
  *(undefined1 *)(param_2 + 0x34e) = 0;
  return;
}


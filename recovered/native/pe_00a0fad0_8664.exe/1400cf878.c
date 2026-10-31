/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cf878 */

void Unwind_1400cf878(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_2 + 0x34e) = 0;
  lVar2 = param_2 + 0x160;
  do {
    lVar1 = lVar2 + -0x40;
    FUN_140016e5c(lVar2 + -0x18);
    FUN_1400017de(lVar2 + -0x38);
    lVar2 = lVar1;
  } while (lVar1 != param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x34e) = 0;
  return;
}


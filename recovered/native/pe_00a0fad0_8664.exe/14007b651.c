/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b651 */

void Unwind_14007b651(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_2 + 0x8ef) = 0;
  lVar1 = *(longlong *)(param_2 + 0x860);
  while (param_2 + 0x60 != lVar1) {
    FUN_140016e5c(lVar1 + -0x18);
    FUN_1400017de(lVar1 + -0x50);
    lVar1 = lVar1 + -0x50;
  }
  *(undefined1 *)(param_2 + 0x8ef) = 0;
  return;
}


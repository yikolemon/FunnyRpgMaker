/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b6b7 */

void Unwind_14007b6b7(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_2 + 0x8ef) = 0;
  lVar2 = param_2 + 0x3d0;
  do {
    lVar1 = lVar2 + -0x50;
    FUN_140016e5c(lVar2 + -0x18);
    FUN_1400017de(lVar1);
    lVar2 = lVar1;
  } while (lVar1 != param_2 + 0x60);
  *(undefined1 *)(param_2 + 0x8ef) = 0;
  return;
}


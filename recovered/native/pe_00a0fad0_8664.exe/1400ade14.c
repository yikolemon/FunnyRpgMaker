/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ade14 */

void Unwind_1400ade14(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x358); lVar1 != -0x20; lVar1 = lVar1 + -0x20) {
    FUN_1400017de(lVar1 + param_2 + 0x38);
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cfc1a */

void Unwind_1400cfc1a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x2f8);
  if ((param_2 + 0x20 != lVar1 & *(byte *)(param_2 + 0x342)) == 1) {
    do {
      lVar1 = lVar1 + -0x40;
      FUN_14007be64(lVar1);
    } while (lVar1 != param_2 + 0x20);
  }
  return;
}


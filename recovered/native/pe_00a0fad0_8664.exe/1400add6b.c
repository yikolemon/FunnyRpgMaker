/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400add6b */

void Unwind_1400add6b(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x300);
  if ((param_2 + 0x38 != lVar1 & *(byte *)(param_2 + 0x362)) == 1) {
    do {
      lVar1 = lVar1 + -0x40;
      FUN_14007be64(lVar1);
    } while (lVar1 != param_2 + 0x38);
  }
  return;
}


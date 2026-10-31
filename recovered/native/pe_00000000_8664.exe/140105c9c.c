/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140105c9c */

void Unwind_140105c9c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 0x20) != -0x60) {
    lVar1 = *(longlong *)(param_2 + 0x20) + 0x30;
    do {
      FUN_14010501a((longlong)&DAT_140f317a0 + lVar1);
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != -0x30);
  }
  return;
}


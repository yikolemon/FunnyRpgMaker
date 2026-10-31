/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005dc8c */

void Unwind_18005dc8c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_2 + 0x4df) = 1;
  if (*(longlong *)(param_2 + 0x4b8) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x4b8) + -0x20;
    do {
      FUN_1800010ec(lVar1 + param_2 + 0xc0);
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != -0x20);
  }
  *(undefined1 *)(param_2 + 0x4df) = 1;
  return;
}


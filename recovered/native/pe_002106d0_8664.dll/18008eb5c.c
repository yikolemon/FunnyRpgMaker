/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008eb5c */

void Unwind_18008eb5c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x28) != -0xf8) {
    lVar2 = -*(longlong *)(param_2 + 0x28);
    do {
      FUN_1800010ec(lVar1 + lVar2);
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0xf8);
  }
  return;
}


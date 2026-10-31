/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bf76c */

void Unwind_1801bf76c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x20) != -0x18) {
    lVar2 = -*(longlong *)(param_2 + 0x20);
    do {
      if (*(longlong *)(lVar1 + 8) != 0) {
        FUN_1800fe8d4();
      }
      lVar2 = lVar2 + -0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar2 != 0x18);
  }
  return;
}


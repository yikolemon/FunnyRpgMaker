/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bff98 */

void Unwind_1801bff98(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 0x20) != -0x60) {
    lVar1 = *(longlong *)(param_2 + 0x20) + 0x30;
    do {
      FUN_1800da0f8((longlong)&DAT_180420050 + lVar1);
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != -0x30);
  }
  return;
}


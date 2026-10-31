/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800da233 */

void Unwind_1800da233(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 0x20) != -0x60) {
    lVar1 = *(longlong *)(param_2 + 0x20) + 0x30;
    do {
      FUN_1800da0f8(&DAT_180418420 + lVar1);
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != -0x30);
  }
  return;
}


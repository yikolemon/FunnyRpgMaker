/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008eb9e */

void Unwind_18008eb9e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0xd78;
  do {
    FUN_1800010ec(*(longlong *)(param_2 + 0x30) + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0xf8);
  return;
}


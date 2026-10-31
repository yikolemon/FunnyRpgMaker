/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008edf0 */

void FUN_18008edf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0xc40;
  do {
    FUN_1800010ec(lVar1 + param_1 + 0x20);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x40);
  return;
}


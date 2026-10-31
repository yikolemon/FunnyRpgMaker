/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cc163 */

void Unwind_1800cc163(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x10;
  do {
    FUN_18004363a(lVar1 + param_2 + 0xd0);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x10);
  return;
}


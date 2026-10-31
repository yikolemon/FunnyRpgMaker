/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cc034 */

void Unwind_1800cc034(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x88);
  while (param_2 + 0xd0 != lVar1) {
    lVar1 = lVar1 + -0x10;
    FUN_18004363a(lVar1);
  }
  return;
}


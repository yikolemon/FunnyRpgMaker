/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cc124 */

void Unwind_1800cc124(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0xf0); lVar1 != -0x10; lVar1 = lVar1 + -0x10) {
    FUN_18004363a(lVar1 + param_2 + 0xd0);
  }
  return;
}


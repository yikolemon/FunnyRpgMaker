/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c81f2 */

void Unwind_1800c81f2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_2 + 0x3a6) = 0;
  for (lVar1 = *(longlong *)(param_2 + 800); param_2 + 0x20 != lVar1; lVar1 = lVar1 + -0x40) {
    FUN_180004cea(lVar1 + -0x18);
    FUN_180001ef2(lVar1 + -0x38);
  }
  *(undefined1 *)(param_2 + 0x3a6) = 0;
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e2b82 */

void Unwind_1800e2b82(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x13a);
  *(undefined1 *)(param_2 + 0x13f) = uVar1;
  FUN_180001ef2(param_2 + 0x108);
  *(undefined1 *)(param_2 + 0x13f) = uVar1;
  return;
}


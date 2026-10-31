/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b69d7 */

void Unwind_1800b69d7(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  FUN_180004cea(lVar1 + 8);
  *(longlong *)(param_2 + 0x38) = lVar1;
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x20);
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a4c8c */

void Unwind_1800a4c8c(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x9e);
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  FUN_18000d016(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  return;
}


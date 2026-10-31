/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c82bf */

void Unwind_1800c82bf(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x3a6);
  *(longlong *)(param_2 + 0x390) = param_2 + 0x120;
  *(undefined1 *)(param_2 + 0x3a7) = uVar1;
  FUN_18005a604(param_2 + 0x2b0);
  *(longlong *)(param_2 + 0x390) = param_2 + 0x120;
  *(undefined1 *)(param_2 + 0x3a7) = uVar1;
  return;
}


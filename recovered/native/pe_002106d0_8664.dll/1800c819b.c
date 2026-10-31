/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c819b */

void Unwind_1800c819b(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x390) = param_2 + 0x120;
  *(undefined1 *)(param_2 + 0x3a7) = 1;
  FUN_180001ef2(param_2 + 0x2b0);
  *(longlong *)(param_2 + 0x390) = param_2 + 0x120;
  *(undefined1 *)(param_2 + 0x3a7) = 1;
  return;
}


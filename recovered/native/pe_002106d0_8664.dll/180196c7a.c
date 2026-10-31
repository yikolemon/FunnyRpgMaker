/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180196c7a */

void Unwind_180196c7a(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1800db14a(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28);
  return;
}


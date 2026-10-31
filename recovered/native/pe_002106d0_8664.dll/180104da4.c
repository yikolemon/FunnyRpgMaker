/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180104da4 */

void Unwind_180104da4(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1800db14a(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8);
  return;
}


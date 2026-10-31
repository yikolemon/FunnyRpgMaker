/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800be997 */

void Unwind_1800be997(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x40);
  FUN_1800bd8be(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x38) = **(undefined8 **)(param_2 + 0x28);
  return;
}


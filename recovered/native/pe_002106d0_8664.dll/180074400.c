/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180074400 */

void Unwind_180074400(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x28) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x20));
  return;
}


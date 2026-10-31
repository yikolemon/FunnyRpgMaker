/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180076060 */

void Unwind_180076060(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x38) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x28));
  return;
}


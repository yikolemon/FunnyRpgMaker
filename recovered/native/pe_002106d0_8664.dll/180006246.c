/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180006246 */

void Unwind_180006246(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x40) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x38));
  return;
}


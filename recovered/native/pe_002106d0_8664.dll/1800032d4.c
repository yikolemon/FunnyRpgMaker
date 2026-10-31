/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800032d4 */

void Unwind_1800032d4(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x40) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x38));
  return;
}


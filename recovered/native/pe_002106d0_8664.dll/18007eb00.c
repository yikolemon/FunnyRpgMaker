/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007eb00 */

void Unwind_18007eb00(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0xa8) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x98));
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180001578 */

void Unwind_180001578(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x30) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x28));
  return;
}


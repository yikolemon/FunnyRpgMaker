/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006f9e8 */

void Unwind_18006f9e8(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x30) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x20));
  return;
}


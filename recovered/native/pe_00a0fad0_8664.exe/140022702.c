/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140022702 */

void Unwind_140022702(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x38) = std::exception::vftable;
  FUN_140107df0(*(undefined8 *)(param_2 + 0x30));
  return;
}


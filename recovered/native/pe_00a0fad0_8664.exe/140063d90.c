/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140063d90 */

void Unwind_140063d90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(undefined ***)(lVar1 + 0x20) = std::exception::vftable;
  FUN_140107df0(lVar1 + 0x28);
  return;
}


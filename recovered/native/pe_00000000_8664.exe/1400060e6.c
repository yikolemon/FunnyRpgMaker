/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400060e6 */

void Unwind_1400060e6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(undefined ***)(lVar1 + 0x20) = std::exception::vftable;
  FUN_1401905b0(lVar1 + 0x28);
  return;
}


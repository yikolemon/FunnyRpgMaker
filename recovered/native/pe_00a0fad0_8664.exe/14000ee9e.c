/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000ee9e */

void Unwind_14000ee9e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  *puVar1 = std::exception::vftable;
  FUN_140107df0(puVar1 + 1);
  return;
}


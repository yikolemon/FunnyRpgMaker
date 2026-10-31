/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000aae4 */

void Unwind_14000aae4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  *puVar1 = std::exception::vftable;
  FUN_140107df0(puVar1 + 1);
  return;
}


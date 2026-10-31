/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140002f4a */

void Unwind_140002f4a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  *puVar1 = std::exception::vftable;
  FUN_1401905b0(puVar1 + 1);
  return;
}


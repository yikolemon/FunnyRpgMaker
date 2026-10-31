/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140003e1e */

void Unwind_140003e1e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  *puVar1 = std::exception::vftable;
  FUN_1401905b0(puVar1 + 1);
  return;
}


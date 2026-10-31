/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140002e82 */

void Unwind_140002e82(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x80);
  *puVar1 = std::exception::vftable;
  FUN_14008dba0(puVar1 + 1);
  return;
}


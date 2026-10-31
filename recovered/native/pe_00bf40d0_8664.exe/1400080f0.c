/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400080f0 */

void Unwind_1400080f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  *puVar1 = std::ios_base::vftable;
  FUN_1400895d0((longlong)puVar1);
  return;
}


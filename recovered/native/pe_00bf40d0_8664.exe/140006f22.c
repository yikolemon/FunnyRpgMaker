/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140006f22 */

void FUN_140006f22(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x98);
  FUN_140007260((longlong)puVar1);
  *puVar1 = std::ios_base::vftable;
  FUN_1400895d0((longlong)puVar1);
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140012d70 */

void FUN_140012d70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  FUN_140015b6e(puVar1);
  *puVar1 = std::ios_base::vftable;
  FUN_140188f70(puVar1);
  return;
}


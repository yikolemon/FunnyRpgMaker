/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007f8d0 */

void FUN_18007f8d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xa8);
  FUN_18007fc46(puVar1);
  *puVar1 = std::ios_base::vftable;
  FUN_18023ef00(puVar1);
  return;
}


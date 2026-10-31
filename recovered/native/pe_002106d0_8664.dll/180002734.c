/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180002734 */

void Unwind_180002734(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x80);
  *puVar1 = std::exception::vftable;
  FUN_18026ea90(puVar1 + 1);
  return;
}


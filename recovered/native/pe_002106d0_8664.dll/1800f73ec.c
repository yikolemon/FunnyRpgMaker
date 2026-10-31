/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f73ec */

void Unwind_1800f73ec(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  *puVar1 = std::exception::vftable;
  FUN_18026ea90(puVar1 + 1);
  return;
}


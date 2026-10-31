/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000b034 */

void Unwind_14000b034(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x70);
  *puVar1 = std::exception::vftable;
  FUN_140107df0(puVar1 + 1);
  return;
}


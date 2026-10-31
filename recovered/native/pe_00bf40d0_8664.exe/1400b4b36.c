/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b4b36 */

void FUN_1400b4b36(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)**(undefined8 **)(param_2 + 0x48) + 0x3a8);
  *puVar1 = *puVar1 & 0xffffffef;
  return;
}


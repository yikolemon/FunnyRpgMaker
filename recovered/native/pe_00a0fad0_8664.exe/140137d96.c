/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137d96 */

void FUN_140137d96(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)**(undefined8 **)(param_2 + 0x48) + 0x3a8);
  *puVar1 = *puVar1 & 0xffffffef;
  return;
}


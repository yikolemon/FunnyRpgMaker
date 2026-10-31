/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aa790 */

void FUN_1802aa790(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)**(undefined8 **)(param_2 + 0x48) + 0x3a8);
  *puVar1 = *puVar1 & 0xffffffef;
  return;
}


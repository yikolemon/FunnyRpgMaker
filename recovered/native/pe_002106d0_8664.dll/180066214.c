/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180066214 */

void FUN_180066214(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = 3;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
  return;
}


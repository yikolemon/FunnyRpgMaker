/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019cdba */

void FUN_18019cdba(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar2 + *(int *)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_1800fe8d4(*puVar2);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e832e */

void FUN_1400e832e(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar2 + *(int *)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_140077b90(*puVar2);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}


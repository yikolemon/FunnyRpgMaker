/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019d7d0 */

void FUN_18019d7d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1800fe8d4();
  }
  puVar2 = *(undefined8 **)(param_1 + 0xd0);
  puVar1 = puVar2 + *(int *)(param_1 + 200);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_1800fe8d4(*puVar2);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


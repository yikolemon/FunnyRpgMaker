/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c1f80 */

void FUN_1801c1f80(longlong param_1)

{
  uint uVar1;
  
  FUN_1801c25e0(param_1);
  for (uVar1 = 0; (int)uVar1 < *(int *)(param_1 + 0x120); uVar1 = uVar1 + 1) {
    FUN_1800fe8d4(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + (ulonglong)uVar1 * 8));
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


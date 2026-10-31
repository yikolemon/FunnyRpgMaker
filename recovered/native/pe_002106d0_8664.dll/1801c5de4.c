/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c5de4 */

void FUN_1801c5de4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_18014f5d6(param_1 + 0x28);
  return;
}


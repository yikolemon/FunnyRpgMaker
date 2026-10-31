/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019a550 */

void FUN_18019a550(longlong param_1)

{
  FUN_18019838a(param_1);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


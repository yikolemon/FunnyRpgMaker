/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f63f4 */

void FUN_1800f63f4(longlong param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1800f6486();
    }
    FUN_1800440c8(param_1);
    return;
  }
  return;
}


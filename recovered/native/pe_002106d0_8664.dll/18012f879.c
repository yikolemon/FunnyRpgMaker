/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012f879 */

void FUN_18012f879(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_1800fe8d4();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1800fe8d4();
    }
    FUN_1800fe8d4(param_1);
    return;
  }
  return;
}


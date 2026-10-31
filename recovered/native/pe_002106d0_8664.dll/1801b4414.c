/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b4414 */

void FUN_1801b4414(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1800fe8d4();
    }
    FUN_1800fe8d4(param_1);
    return;
  }
  return;
}


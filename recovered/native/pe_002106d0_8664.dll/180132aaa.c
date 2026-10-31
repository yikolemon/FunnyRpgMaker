/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180132aaa */

void FUN_180132aaa(longlong param_1)

{
  FUN_1800fe8d4(*(undefined8 *)(param_1 + 8));
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


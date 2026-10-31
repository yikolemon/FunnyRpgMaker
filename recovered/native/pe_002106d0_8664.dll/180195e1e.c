/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180195e1e */

void FUN_180195e1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x34) == '\x01') {
    FUN_1800fe8d4(*(undefined8 *)(param_2 + 0x28));
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1800fe8d4();
  }
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}


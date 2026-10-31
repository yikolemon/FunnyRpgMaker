/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180227e04 */

void FUN_180227e04(longlong param_1)

{
  if (*(char *)(param_1 + 0x4c0) != '\0') {
    if (*(longlong *)(param_1 + 0x4a0) != 0) {
      FUN_1801ced57(*(undefined8 *)(param_1 + 0xa0));
    }
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    *(undefined4 *)(param_1 + 0x4b8) = 0;
  }
  return;
}


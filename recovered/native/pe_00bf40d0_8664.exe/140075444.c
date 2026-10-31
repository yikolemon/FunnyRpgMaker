/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140075444 */

void FUN_140075444(longlong param_1)

{
  if (*(char *)(param_1 + 0x4c0) != '\0') {
    if (*(longlong *)(param_1 + 0x4a0) != 0) {
      FUN_14002115a(*(longlong *)(param_1 + 0xa0),(longlong *)(param_1 + 0x4a0));
    }
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    *(undefined4 *)(param_1 + 0x4b8) = 0;
  }
  return;
}


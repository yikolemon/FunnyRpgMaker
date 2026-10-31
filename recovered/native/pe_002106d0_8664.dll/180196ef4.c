/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180196ef4 */

void FUN_180196ef4(longlong param_1,longlong param_2,longlong param_3)

{
  if (*(char *)(param_3 + 0x35) == '\0') {
    FUN_18019838a(param_2);
    *(longlong *)(param_2 + 8) = param_1;
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  FUN_1801983b7();
  return;
}


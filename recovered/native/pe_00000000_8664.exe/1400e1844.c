/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e1844 */

void FUN_1400e1844(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x38) + 0x18) != *(int *)(param_1 + 4))) {
    FUN_1400e3549(param_1);
  }
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    FUN_1400e2083(param_1);
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_1400e24a2(param_1,0);
  }
  FUN_1400e3646(param_1);
  if (*(char *)(param_1 + 0x51) == '\0') {
    FUN_1400e3684(param_1);
  }
  *(undefined1 *)(param_1 + 0x52) = 1;
  return;
}


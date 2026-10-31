/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801962d0 */

void FUN_1801962d0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x38) + 0x18) != *(int *)(param_1 + 4))) {
    FUN_180197fd5(param_1);
  }
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    FUN_180196b0f(param_1);
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_180196f2e(param_1,0);
  }
  FUN_1801980d2(param_1);
  if (*(char *)(param_1 + 0x51) == '\0') {
    FUN_180198110(param_1);
  }
  *(undefined1 *)(param_1 + 0x52) = 1;
  return;
}


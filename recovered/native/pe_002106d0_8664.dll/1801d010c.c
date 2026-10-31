/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d010c */

void FUN_1801d010c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar1 = 0;
      do {
        FUN_1801cc970(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar1 * 8));
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar1 * 8) = 0;
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x38));
    }
    FUN_1801c9b65(param_2,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002250f */

void FUN_14002250f(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar1 = 0;
      do {
        FUN_14001f2cb(*(longlong **)(*(longlong *)(param_1 + 0x40) + lVar1 * 8));
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar1 * 8) = 0;
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x38));
    }
    FUN_14001c53d(param_2,*(longlong *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


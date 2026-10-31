/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012f0e0 */

void FUN_14012f0e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar1 = 0;
      do {
        FUN_14012b944(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar1 * 8));
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar1 * 8) = 0;
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x38));
    }
    FUN_140128b39(param_2,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e5223 */

void FUN_1400e5223(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  FUN_1400e42c4(param_1,2);
  if ((float)*(int *)(lVar1 + 0xa0) < (float)*(int *)(lVar1 + 0x98) * DAT_14021001c) {
    FUN_1400e4cc5(param_1,0xffffffff,0xffffffff);
    return;
  }
  FUN_1400e46ef(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x1c),
                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20));
  return;
}


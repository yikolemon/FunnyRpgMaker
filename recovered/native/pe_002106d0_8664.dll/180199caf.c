/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180199caf */

void FUN_180199caf(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  FUN_180198d50(param_1,2);
  if ((float)*(int *)(lVar1 + 0xa0) < (float)*(int *)(lVar1 + 0x98) * DAT_1802de790) {
    FUN_180199751(param_1,0xffffffff,0xffffffff);
    return;
  }
  FUN_18019917b(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x1c),
                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20));
  return;
}


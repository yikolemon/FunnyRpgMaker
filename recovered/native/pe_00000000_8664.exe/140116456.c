/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140116456 */

void FUN_140116456(undefined4 param_1)

{
  longlong lVar1;
  int in_ECX;
  undefined1 auStack_38 [32];
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x208);
  if (lVar1 == 0) {
    FUN_14008a381(local_18);
    param_1 = local_18[0];
    if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
      return;
    }
  }
  else {
    if (in_ECX < 0) {
      in_ECX = *(int *)(lVar1 + 0xc);
    }
    if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
      FUN_1401163e9(lVar1,*(float *)(*(longlong *)(lVar1 + 0x68) + 0x1c + (longlong)in_ECX * 0x1c) -
                          *(float *)(*(longlong *)(lVar1 + 0x68) + (longlong)in_ECX * 0x1c));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(param_1);
}


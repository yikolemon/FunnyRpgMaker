/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006e23d */

uint FUN_14006e23d(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_38 [44];
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  uVar1 = 0;
  local_c = param_2;
  if (param_2 < 0x10000) {
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      uVar1 = FUN_14007944b(param_1,&local_c,0);
    }
    else {
      uVar1 = FUN_14007920d(param_1,&local_c,0);
    }
  }
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_38)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_38);
}


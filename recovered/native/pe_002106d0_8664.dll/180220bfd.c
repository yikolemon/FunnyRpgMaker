/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180220bfd */

undefined8 FUN_180220bfd(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  uVar1 = 0;
  local_c = param_2;
  if (param_2 < 0x10000) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar1 = FUN_18022be0b(param_1,&local_c,0);
    }
    else {
      uVar1 = FUN_18022bbcd(param_1,&local_c,0);
    }
  }
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


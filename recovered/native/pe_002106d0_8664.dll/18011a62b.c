/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011a62b */

void FUN_18011a62b(undefined4 param_1)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  FUN_1801174ae(local_10,*(undefined8 *)(DAT_180419160 + 0x1608),DAT_180419160 + 0x1ffc,param_1);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


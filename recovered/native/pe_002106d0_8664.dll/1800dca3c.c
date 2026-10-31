/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dca3c */

longlong FUN_1800dca3c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_1800dcab6(param_1,local_38,param_2);
  if ((*(char *)(local_28 + 0x19) != '\0') ||
     (iVar1 = FUN_1800624b8(local_28 + 0x20,param_2), 0 < iVar1)) {
    local_28 = *param_1;
  }
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
  }
  return local_28;
}


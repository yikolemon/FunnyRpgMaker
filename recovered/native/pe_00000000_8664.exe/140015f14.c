/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140015f14 */

longlong FUN_140015f14(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  FUN_140015f8e(param_1,local_38,param_2);
  if ((*(char *)(local_28 + 0x19) != '\0') ||
     (iVar1 = FUN_140015ff2(local_28 + 0x20,param_2), 0 < iVar1)) {
    local_28 = *param_1;
  }
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
  }
  return local_28;
}


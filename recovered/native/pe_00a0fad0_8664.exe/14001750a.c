/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001750a */

longlong FUN_14001750a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  FUN_140017584(param_1,local_38,param_2);
  if ((*(char *)(local_28 + 0x19) != '\0') ||
     (iVar1 = FUN_1400175e8(param_2,local_28 + 0x20), iVar1 < 0)) {
    local_28 = *param_1;
  }
  if (DAT_1401c9640 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_20 ^ (ulonglong)auStack_58);
  }
  return local_28;
}


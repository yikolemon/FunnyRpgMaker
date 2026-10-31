/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001748a */

longlong FUN_14001748a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  FUN_140017584(param_1,local_30,param_2);
  if (*(char *)(local_20 + 0x19) == '\0') {
    iVar1 = FUN_1400175e8(param_2,local_20 + 0x20);
    if (-1 < iVar1) {
      if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_58)) {
        return local_20 + 0x40;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1400d3720(local_18 ^ (ulonglong)auStack_58);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9d30("invalid map<K, T> key");
}


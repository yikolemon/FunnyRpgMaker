/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006cd84 */

undefined8 * FUN_18006cd84(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  uint local_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_18006c530(param_1,&local_30,3);
  if ((local_28 == 0) || ((local_30 & 0xfffffff7) == 1)) {
    *param_2 = CONCAT44(uStack_2c,local_30);
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
      return param_2;
    }
  }
  else {
    FUN_18006ccef("directory_entry::status",local_28,param_1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}


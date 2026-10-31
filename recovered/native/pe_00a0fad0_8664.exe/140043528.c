/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140043528 */

undefined8 * FUN_140043528(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  uint local_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  FUN_1400435b2(param_1,&local_30,3);
  if ((local_28 != 0) && ((local_30 & 0xfffffff7) != 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_140041f39("directory_entry::status",local_28,param_1 + 0x20);
  }
  *param_2 = CONCAT44(uStack_2c,local_30);
  if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_58);
}


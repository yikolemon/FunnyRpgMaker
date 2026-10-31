/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140022026 */

longlong FUN_140022026(undefined8 *param_1,byte param_2,uint param_3)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if ((param_3 >> (*(uint *)(param_1 + 2) & 0x1f) & 1) == 0) {
    local_29 = 1;
    FUN_14001b296(local_28,"invalid format specifier");
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(local_28,&DAT_140ee3c60);
  }
  *(uint *)param_1[1] = (uint)param_2 | *(uint *)param_1[1] & 0xfffffff8;
  if (DAT_140f17b40 != (local_10 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_10 ^ (ulonglong)auStack_58);
  }
  return *(longlong *)*param_1 + 1;
}


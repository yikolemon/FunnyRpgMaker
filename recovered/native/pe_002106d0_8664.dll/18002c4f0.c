/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002c4f0 */

longlong FUN_18002c4f0(undefined8 *param_1,byte param_2,uint param_3)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((param_3 >> (*(uint *)(param_1 + 2) & 0x1f) & 1) == 0) {
    local_29 = 1;
    FUN_180025c48(local_28,"invalid format specifier");
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_28,&DAT_180391580);
  }
  *(uint *)param_1[1] = (uint)param_2 | *(uint *)param_1[1] & 0xfffffff8;
  if (DAT_180402640 != (local_10 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_10 ^ (ulonglong)auStack_58);
  }
  return *(longlong *)*param_1 + 1;
}


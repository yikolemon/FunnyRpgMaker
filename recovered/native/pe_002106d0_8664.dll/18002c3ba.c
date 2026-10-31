/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002c3ba */

void FUN_18002c3ba(int *param_1,int param_2,char param_3)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((param_3 != '\0') && (*param_1 < param_2)) {
    *param_1 = param_2;
    if (DAT_180402640 != (local_10 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_10 ^ (ulonglong)auStack_58);
    }
    return;
  }
  local_29 = 1;
  FUN_180025c48(local_28,"invalid format specifier");
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_28,&DAT_180391580);
}


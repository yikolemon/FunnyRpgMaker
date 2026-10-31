/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140021ef0 */

void FUN_140021ef0(int *param_1,int param_2,char param_3)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if ((param_3 != '\0') && (*param_1 < param_2)) {
    *param_1 = param_2;
    if (DAT_140f17b40 != (local_10 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
      FUN_140188a00(local_10 ^ (ulonglong)auStack_58);
    }
    return;
  }
  local_29 = 1;
  FUN_14001b296(local_28,"invalid format specifier");
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(local_28,&DAT_140ee3c60);
}


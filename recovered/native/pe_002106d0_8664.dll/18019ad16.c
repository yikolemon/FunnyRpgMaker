/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ad16 */

void FUN_18019ad16(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_14 = param_1;
  local_10 = param_2;
  local_c = param_3;
  FUN_1800fed08(&local_14,0xc,0);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


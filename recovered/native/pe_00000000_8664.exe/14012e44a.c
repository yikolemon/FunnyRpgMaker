/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012e44a */

void FUN_14012e44a(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  local_c = param_2;
  FUN_14012e38c(&local_10);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}


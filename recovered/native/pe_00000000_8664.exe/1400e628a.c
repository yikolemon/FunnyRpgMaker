/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e628a */

void FUN_1400e628a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_14 = param_1;
  local_10 = param_2;
  local_c = param_3;
  FUN_140077fc4(&local_14,0xc,0);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}


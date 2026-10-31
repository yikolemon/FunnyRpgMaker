/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013058d */

void FUN_14013058d(longlong param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x60) == 0x6f75746c)) {
    local_18 = 0x10000;
    local_10 = -param_3;
    local_c = 0x10000;
    local_14 = param_2;
    FUN_14012a529(param_1 + 0x98,&local_18);
  }
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}


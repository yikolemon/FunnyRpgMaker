/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d15b9 */

void FUN_1801d15b9(longlong param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x60) == 0x6f75746c)) {
    local_18 = 0x10000;
    local_10 = -param_3;
    local_c = 0x10000;
    local_14 = param_2;
    FUN_1801cb555(param_1 + 0x98,&local_18);
  }
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


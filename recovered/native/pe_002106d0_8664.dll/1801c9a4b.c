/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c9a4b */

longlong FUN_1801c9a4b(undefined8 param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1801cc006(param_1,param_2,&local_34);
  if (((0 < (int)param_2) && (local_34 == 0)) && (lVar1 != 0)) {
    FUN_1802a89a0(lVar1,0,param_2 & 0xffffffff);
  }
  *param_3 = local_34;
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}


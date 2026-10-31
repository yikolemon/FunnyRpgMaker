/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140128a1f */

longlong FUN_140128a1f(undefined8 param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14012afda(param_1,param_2,&local_34);
  if (((0 < (int)param_2) && (local_34 == 0)) && (lVar1 != 0)) {
    FUN_1401c5830(lVar1,0,param_2 & 0xffffffff);
  }
  *param_3 = local_34;
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}


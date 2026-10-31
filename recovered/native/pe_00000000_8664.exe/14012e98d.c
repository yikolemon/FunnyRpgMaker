/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012e98d */

undefined8 FUN_14012e98d(undefined8 param_1,longlong param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14012afda(param_1,param_3,&local_34);
  if (((param_3 != 0) && (param_2 != 0)) && (local_34 == 0)) {
    FUN_1401c5180(uVar1,param_2,param_3);
  }
  *param_4 = local_34;
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}


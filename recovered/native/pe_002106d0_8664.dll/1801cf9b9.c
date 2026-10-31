/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cf9b9 */

undefined8 FUN_1801cf9b9(undefined8 param_1,longlong param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1801cc006(param_1,param_3,&local_34);
  if (((param_3 != 0) && (param_2 != 0)) && (local_34 == 0)) {
    FUN_1802a82f0(uVar1,param_2,param_3);
  }
  *param_4 = local_34;
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}


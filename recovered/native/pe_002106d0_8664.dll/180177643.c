/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180177643 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180177643(longlong param_1,int param_2,int param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_1058 [40];
  longlong local_1030;
  longlong local_1028;
  int local_1010;
  undefined8 local_1008;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_1058;
  lVar2 = FUN_18012be7d((longlong)param_3);
  if (lVar2 != 0) {
    local_1028 = param_2 + param_1;
    local_1030 = param_1;
    iVar1 = FUN_180177b60(&local_1030,lVar2,param_3,param_5);
    if (iVar1 != 0) {
      *param_4 = local_1010 - (int)local_1008;
      goto LAB_1801776c2;
    }
    thunk_FUN_180290e40(local_1008);
  }
  local_1008 = 0;
LAB_1801776c2:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_1058)) {
    return local_1008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_1058);
}


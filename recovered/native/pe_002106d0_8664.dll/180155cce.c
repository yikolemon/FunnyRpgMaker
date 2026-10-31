/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180155cce */

void FUN_180155cce(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_50 = &local_30;
  local_30 = 0;
  local_58 = (longlong)*(int *)(param_2 + 3) + param_2[4];
  lVar1 = (longlong)param_3 + param_2[4];
  local_48 = 6;
  FUN_180156462(&local_38,*param_2,lVar1);
  *param_1 = 0;
  *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_34,local_38);
  param_1[3] = 0;
  param_1[4] = uStack_34;
  param_1[5] = (int)local_30 - (int)lVar1;
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_78);
}


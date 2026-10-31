/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018c6bd */

bool FUN_18018c6bd(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_30 = *param_2;
  piVar2 = (int *)FUN_18018a34e(*param_1);
  iVar1 = *piVar2;
  piVar2 = (int *)FUN_18018a34e(*param_1,&local_28);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return iVar1 < *piVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}


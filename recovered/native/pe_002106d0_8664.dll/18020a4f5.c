/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020a4f5 */

void FUN_18020a4f5(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,int *param_5
                  )

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((*param_5 != 0) && (param_5[1] != 0)) {
    FUN_18020a5a0(local_38,param_5,param_4);
    if (param_3 == 2) {
      FUN_18020a748(local_38,param_1,param_2);
    }
    else if (param_3 == 1) {
      FUN_18020a66b(local_38,param_1,param_2);
    }
    else if (param_3 == 0) {
      FUN_18020a5e0(local_38,param_1,param_2);
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}


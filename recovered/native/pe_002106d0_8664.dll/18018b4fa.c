/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018b4fa */

void FUN_18018b4fa(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  if ((undefined8 *)param_1[1] == (undefined8 *)param_1[2]) {
    FUN_180052bde(param_1);
    lVar1 = param_1[1];
  }
  else {
    *(undefined8 *)param_1[1] = *param_2;
    lVar1 = param_1[1] + 8;
    param_1[1] = lVar1;
  }
  lVar2 = lVar1 - *param_1 >> 3;
  if (1 < lVar2) {
    local_18 = *(undefined8 *)(lVar1 + -8);
    FUN_18018c17f(*param_1,lVar2 + -1,&local_18,param_1[3]);
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}


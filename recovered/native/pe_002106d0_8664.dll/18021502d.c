/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021502d */

undefined8 FUN_18021502d(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20 [2];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_20[0] = 3;
  iVar1 = FUN_180215096(param_1,local_20,1);
  uVar2 = 0xa0;
  if (iVar1 == 1) {
    *param_2 = local_18;
    uVar2 = 0;
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_48);
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d3470 */

undefined8 FUN_1801d3470(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  longlong local_60 [4];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1801d3534(param_1 + 3,&local_40);
  if (local_40 == param_1[4]) {
    FUN_18019eef8(local_60,param_1[1],*param_1,local_38);
    uVar1 = FUN_18019efba(local_60);
    FUN_1801d361e(param_1 + 3,local_60,&local_38);
    *(undefined8 *)(local_60[0] + 0x18) = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)(local_40 + 0x18);
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_88)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_88);
}


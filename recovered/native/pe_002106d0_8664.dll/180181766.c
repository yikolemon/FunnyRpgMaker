/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180181766 */

undefined8 * FUN_180181766(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_1800136a6(param_2,"n");
  local_34 = 0;
  FUN_180057604(&DAT_1802b0ea8,uVar1,&local_34);
  *(undefined4 *)param_1 = local_34;
  uVar1 = FUN_1800136a6(param_2,&DAT_18036093e);
  local_34 = 0;
  FUN_1800e5e62(&DAT_1802b0ea8,uVar1,&local_34);
  *(undefined4 *)((longlong)param_1 + 4) = local_34;
  uVar1 = FUN_1800136a6(param_2,&DAT_1803604c9);
  local_34 = 0;
  FUN_1800e5e62(&DAT_1802b0ea8,uVar1,&local_34);
  *(undefined4 *)(param_1 + 1) = local_34;
  uVar1 = FUN_1800136a6(param_2,"w");
  local_34 = 0;
  FUN_1800e5e62(&DAT_1802b0ea8,uVar1,&local_34);
  *(undefined4 *)((longlong)param_1 + 0xc) = local_34;
  uVar1 = FUN_1800136a6(param_2,&DAT_18036760e);
  local_34 = 0;
  FUN_1800e5e62(&DAT_1802b0ea8,uVar1,&local_34);
  *(undefined4 *)(param_1 + 2) = local_34;
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}


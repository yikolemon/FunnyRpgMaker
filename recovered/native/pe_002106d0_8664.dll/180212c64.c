/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180212c64 */

int FUN_180212c64(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  param_1[6] = param_3;
  local_48 = 0;
  local_40 = &local_34;
  uVar5 = FUN_1801c9c3f(param_3,8,0,param_2);
  param_1[4] = uVar5;
  if (local_34 == 0) {
    local_48 = 0;
    iVar6 = 0;
    local_40 = &local_34;
    uVar5 = FUN_1801c9c3f(param_3,4,0,param_2);
    param_1[5] = uVar5;
    if (local_34 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = param_2;
      *(undefined4 *)(param_1 + 3) = 0xdeadbeef;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar1 = PTR_LAB_18033c798;
      param_1[7] = PTR_FUN_18033c790;
      param_1[8] = puVar1;
      uVar4 = PTR_FUN_18033c7a8._4_4_;
      uVar3 = PTR_FUN_18033c7a8._0_4_;
      uVar2 = PTR_FUN_18033c7a0._4_4_;
      *(undefined4 *)(param_1 + 9) = PTR_FUN_18033c7a0._0_4_;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
      *(undefined4 *)(param_1 + 10) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
      goto LAB_180212cff;
    }
  }
  FUN_1801c9b65(param_3,param_1[4]);
  param_1[4] = 0;
  iVar6 = local_34;
LAB_180212cff:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}


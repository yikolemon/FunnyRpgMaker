/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d061e */

int FUN_1801d061e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 longlong *param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  longlong *local_80;
  undefined8 *local_78;
  int *local_70;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a8;
  uVar1 = *param_1;
  local_88 = &local_50;
  iVar2 = FUN_1801ce361();
  if (iVar2 != 0) goto LAB_1801d0664;
  local_80._0_1_ = 1;
  local_88._0_4_ = 0x504f5354;
  local_78 = &local_58;
  local_70 = &local_5c;
  iVar2 = FUN_1801ce744(param_1,param_2,local_4c,local_50);
  if (iVar2 == 0) {
    local_80 = param_5;
    local_88 = (undefined4 *)CONCAT44(local_88._4_4_,param_4);
    iVar2 = FUN_1801d0985(param_1,param_2,local_58,local_5c);
    FUN_1801c9b65(uVar1,local_58);
    if (iVar2 != 0) goto LAB_1801d0664;
    *(undefined4 *)*param_5 = 1;
  }
  else {
    local_80 = (longlong *)((ulonglong)local_80._1_7_ << 8);
    local_88 = (undefined4 *)CONCAT44(local_88._4_4_,0x73666e74);
    local_78 = &local_58;
    local_70 = &local_5c;
    iVar2 = FUN_1801ce744(param_1,param_2,local_4c,local_50);
    if (iVar2 != 0) goto LAB_1801d0664;
    local_80 = param_5;
    local_88 = (undefined4 *)CONCAT44(local_88._4_4_,param_4 % local_5c);
    iVar2 = FUN_1801d0cd6(param_1,param_2,local_58,local_5c);
    FUN_1801c9b65(uVar1,local_58);
    if (iVar2 != 0) goto LAB_1801d0664;
    *(int *)*param_5 = local_5c;
    *(int *)(*param_5 + 4) = param_4 % local_5c;
  }
  iVar2 = 0;
LAB_1801d0664:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_a8);
  }
  return iVar2;
}


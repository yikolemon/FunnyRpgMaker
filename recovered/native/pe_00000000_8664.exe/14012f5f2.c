/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012f5f2 */

int FUN_14012f5f2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  uVar1 = *param_1;
  local_88 = &local_50;
  iVar2 = FUN_14012d335();
  if (iVar2 != 0) goto LAB_14012f638;
  local_80._0_1_ = 1;
  local_88._0_4_ = 0x504f5354;
  local_78 = &local_58;
  local_70 = &local_5c;
  iVar2 = FUN_14012d718(param_1,param_2,local_4c,local_50);
  if (iVar2 == 0) {
    local_80 = param_5;
    local_88 = (undefined4 *)CONCAT44(local_88._4_4_,param_4);
    iVar2 = FUN_14012f959(param_1,param_2,local_58,local_5c);
    FUN_140128b39(uVar1,local_58);
    if (iVar2 != 0) goto LAB_14012f638;
    *(undefined4 *)*param_5 = 1;
  }
  else {
    local_80 = (longlong *)((ulonglong)local_80._1_7_ << 8);
    local_88 = (undefined4 *)CONCAT44(local_88._4_4_,0x73666e74);
    local_78 = &local_58;
    local_70 = &local_5c;
    iVar2 = FUN_14012d718(param_1,param_2,local_4c,local_50);
    if (iVar2 != 0) goto LAB_14012f638;
    local_80 = param_5;
    local_88 = (undefined4 *)CONCAT44(local_88._4_4_,param_4 % local_5c);
    iVar2 = FUN_14012fcaa(param_1,param_2,local_58,local_5c);
    FUN_140128b39(uVar1,local_58);
    if (iVar2 != 0) goto LAB_14012f638;
    *(int *)*param_5 = local_5c;
    *(int *)(*param_5 + 4) = param_4 % local_5c;
  }
  iVar2 = 0;
LAB_14012f638:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_a8);
  }
  return iVar2;
}


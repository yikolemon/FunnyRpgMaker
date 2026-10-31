/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021bf05 */

void FUN_18021bf05(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,char param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  int iStack_5c;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_a8;
  local_70 = 0;
  bVar5 = *(int *)(param_1 + 0x493c) != 2;
  lVar3 = param_1 + 0x4958;
  lVar2 = param_1 + 0x4950;
  if (!bVar5) {
    lVar3 = param_1 + 0x4948;
    lVar2 = param_1 + 0x4940;
  }
  uVar4 = (ulonglong)bVar5 * 0x10;
  local_40 = param_4;
  if ((*(int *)(param_1 + 0x4948 + uVar4) != *param_3) ||
     (bVar5 = true, *(int *)(lVar3 + 4) != param_3[1])) {
    local_80 = &local_70;
    local_88 = &local_40;
    cVar1 = FUN_18021c38a(param_1,lVar2,lVar3,param_3);
    if (cVar1 == '\0') {
      bVar5 = true;
    }
    else {
      *(undefined8 *)(param_1 + (uVar4 | 0x4948)) = local_70;
      bVar5 = false;
    }
  }
  local_68 = *(undefined8 *)(param_1 + 0x4928);
  if (*(int *)(param_1 + 0x493c) == 4) {
    local_48 = 4;
    local_88._0_4_ = *(undefined4 *)(param_1 + 0x494c);
    FUN_18021c1a2(param_1,param_2,&local_60,*(undefined4 *)(param_1 + 0x4948));
    local_88._0_4_ = *(undefined4 *)(param_1 + 0x4954);
    FUN_18021c1a2(param_1,param_2,local_58,*(undefined4 *)(param_1 + 0x4950));
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x495c));
    FUN_18021c1a2(param_1,param_2,&local_50,*(undefined4 *)(param_1 + 0x4958));
    (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(*(longlong *)(param_1 + 8),&local_68);
  }
  else {
    if (*(int *)(param_1 + 0x493c) != 2) goto LAB_18021c0cd;
    local_48 = 2;
    lVar2 = param_1 + 0x1838;
    if (param_5 == '\0') {
      lVar2 = param_2;
    }
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x494c));
    FUN_18021c1a2(param_1,lVar2,&local_60,*(undefined4 *)(param_1 + 0x4948));
    if (((int)local_68 == local_60) && (local_68._4_4_ == iStack_5c)) goto LAB_18021c0cd;
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(*(longlong *)(param_1 + 8),&local_68);
    local_50 = CONCAT44(iStack_5c,local_60);
  }
  *(undefined8 *)(param_1 + 0x4928) = local_50;
LAB_18021c0cd:
  if (!(bool)(param_5 == '\0' & (bVar5 ^ 1U))) {
    lVar2 = param_1 + 0x1838;
    if (param_5 == '\0') {
      lVar2 = param_2;
    }
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,param_3[1]);
    FUN_18021c1a2(param_1,lVar2,&local_60,*param_3);
    if ((local_60 != *(int *)(param_1 + 0x4928)) || (iStack_5c != *(int *)(param_1 + 0x492c))) {
      local_48 = 2;
      local_68 = *(undefined8 *)(param_1 + 0x4928);
      (**(code **)(*(longlong *)(param_1 + 8) + 8))(*(longlong *)(param_1 + 8),&local_68);
      *(ulonglong *)(param_1 + 0x4928) = CONCAT44(iStack_5c,local_60);
    }
  }
  if (!bVar5) {
    *(undefined8 *)param_3 = local_70;
  }
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_a8);
  }
  return;
}


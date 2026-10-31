/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020c871 */

void __fastcall
FUN_1020c871(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_50;
  local_1c = param_4;
  local_18 = param_5;
  uStack_44 = 0;
  local_48 = 0;
  bVar6 = *(int *)(param_1 + 0x2de0) != 2;
  iVar2 = param_1 + 0x2dfc;
  if (!bVar6) {
    iVar2 = param_1 + 0x2dec;
  }
  uVar5 = (uint)bVar6 * 0x10;
  iVar1 = *(int *)(param_1 + 0x2dec + uVar5);
  local_4c = param_2;
  if ((iVar1 != *param_3) ||
     (local_50 = CONCAT31((int3)((uint)iVar1 >> 8),1), *(int *)(iVar2 + 4) != param_3[1])) {
    uVar3 = FUN_1020ccd4(iVar2,param_3,&local_1c,&local_48);
    if ((char)uVar3 == '\0') {
      local_50 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    else {
      *(ulonglong *)(param_1 + (uVar5 | 0x2dec)) = CONCAT44(uStack_44,local_48);
      local_50 = 0;
    }
  }
  local_40 = *(undefined8 *)(param_1 + 0x2dcc);
  if (*(int *)(param_1 + 0x2de0) == 4) {
    local_20 = 4;
    FUN_1020cb0c(&local_38,*(undefined4 *)(param_1 + 0x2dec),*(undefined4 *)(param_1 + 0x2df0));
    FUN_1020cb0c(local_30,*(undefined4 *)(param_1 + 0x2df4),*(undefined4 *)(param_1 + 0x2df8));
    FUN_1020cb0c(&local_28,*(undefined4 *)(param_1 + 0x2dfc),*(undefined4 *)(param_1 + 0x2e00));
    (**(code **)(*(int *)(param_1 + 4) + 0xc))(*(int *)(param_1 + 4),&local_40);
    bVar4 = (byte)local_50;
  }
  else {
    bVar4 = (byte)local_50;
    if (*(int *)(param_1 + 0x2de0) != 2) goto LAB_1020ca42;
    local_20 = 2;
    FUN_1020cb0c(&local_38,*(undefined4 *)(param_1 + 0x2dec),*(undefined4 *)(param_1 + 0x2df0));
    bVar4 = (byte)local_50;
    if (((int)local_40 == local_38) && (local_40._4_4_ == local_34)) goto LAB_1020ca42;
    (**(code **)(*(int *)(param_1 + 4) + 4))(*(int *)(param_1 + 4),&local_40);
    local_28 = local_38;
    local_24 = local_34;
  }
  *(int *)(param_1 + 0x2dcc) = local_28;
  *(int *)(param_1 + 0x2dd0) = local_24;
LAB_1020ca42:
  if (((param_6 == '\0' & (bVar4 ^ 1)) == 0) &&
     ((FUN_1020cb0c(&local_38,*param_3,param_3[1]), local_38 != *(int *)(param_1 + 0x2dcc) ||
      (local_34 != *(int *)(param_1 + 0x2dd0))))) {
    local_20 = 2;
    local_40 = *(undefined8 *)(param_1 + 0x2dcc);
    (**(code **)(*(int *)(param_1 + 4) + 4))(*(int *)(param_1 + 4),&local_40);
    *(ulonglong *)(param_1 + 0x2dcc) = CONCAT44(local_34,local_38);
  }
  if (bVar4 == 0) {
    *(ulonglong *)param_3 = CONCAT44(uStack_44,local_48);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_50)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}


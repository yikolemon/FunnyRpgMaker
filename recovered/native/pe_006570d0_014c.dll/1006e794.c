/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006e794 */

void __fastcall FUN_1006e794(int param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined **local_70;
  undefined4 **local_6c [4];
  undefined4 local_5c;
  uint local_58;
  int local_54;
  int local_50;
  undefined4 local_48;
  undefined7 local_44;
  undefined4 uStack_3d;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_a0;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2740;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10001e84("BasicData/CommonEvent.dat",0);
  local_14 = 2;
  local_24 = param_1;
  FUN_10001cfb(local_88,param_1,local_a0);
  local_14 = 3;
  FUN_1009c636(local_88,local_24 + 0x19);
  local_14 = 4;
  if ((undefined ***)(local_24 + 0x1a8) != &local_70) {
    if (local_58 < 8) {
      local_6c[0] = local_6c;
    }
    FUN_10004664(local_6c[0],local_5c);
    FUN_1007798c(local_54,local_50 - local_54);
  }
  iVar1 = local_24;
  *(undefined4 *)(local_24 + 0x1d0) = local_48;
  *(ulonglong *)(local_24 + 0x1d4) = CONCAT17((undefined1)uStack_3d,local_44);
  *(undefined4 *)(local_24 + 0x1db) = uStack_3d;
  *(undefined1 *)(local_24 + 0x1e0) = local_38;
  if ((undefined4 *)(local_24 + 0x1e4) != &local_34) {
    FUN_1008d8fe();
    *(ulonglong *)(iVar1 + 0x1e4) = CONCAT44(uStack_30,local_34);
    *(undefined4 *)(iVar1 + 0x1ec) = local_2c;
    local_34 = 0;
    uStack_30 = 0;
    local_2c = 0;
  }
  *(undefined1 *)(iVar1 + 0x1f2) = local_26;
  *(undefined2 *)(iVar1 + 0x1f0) = local_28;
  local_70 = CommonEvents::vftable;
  local_14 = 0xffffffff;
  FUN_1008d8fe();
  FUN_10070120();
  FUN_10001f04();
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return;
}


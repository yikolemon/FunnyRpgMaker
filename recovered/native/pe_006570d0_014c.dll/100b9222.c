/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9222 */

int __fastcall FUN_100b9222(int param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_70;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1ce0;
  local_1c = ExceptionList;
  local_24 = param_1;
  if ((int)param_2 < 0 || param_3 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    local_28 = *(int *)(*param_3 + 4);
    if (param_2 < (uint)((*(int *)(*param_3 + 8) - local_28 >> 2) * 0x3cf3cf3d)) {
      iVar3 = param_2 * 0x54;
      local_70 = *(undefined4 *)(local_28 + iVar3);
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      piVar2 = (int *)(local_28 + iVar3 + 8);
      ExceptionList = &local_1c;
      FUN_100b9686(*piVar2 - *(int *)(local_28 + iVar3 + 4) >> 2,
                   (undefined4 *)(local_28 + iVar3) + 1,piVar2);
      local_14 = 2;
      local_28 = local_28 + iVar3;
      local_60 = *(undefined4 *)(local_28 + 0x14);
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      FUN_100b9782((*(int *)(local_28 + 0x1c) - *(int *)(local_28 + 0x18) >> 2) * -0x49249249,
                   local_28 + 0x18,local_28 + 0x1c);
      local_14 = 3;
      FUN_100b9ad6(*param_4,param_4[1] - *param_4 >> 2);
      FUN_100b9bd8(param_4[3],(param_4[4] - param_4[3] >> 3) * -0x55555555);
      local_50 = local_28;
      local_4c = local_70;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      FUN_100b9686(local_68 - local_6c >> 2,&local_6c,&local_68);
      local_14 = 4;
      local_3c = local_60;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      FUN_100b9782((local_58 - local_5c >> 2) * -0x49249249,&local_5c,&local_58);
      *(undefined4 *)(local_24 + 0x24) = 0;
      local_14 = 7;
      local_2c = 0;
      local_2c = FUN_100ba048();
      iVar1 = local_34;
      *(undefined4 *)(local_24 + 0x24) = local_2c;
      local_14 = 0xffffffff;
      iVar3 = local_38;
      if (local_38 != 0) {
        for (; iVar3 != iVar1; iVar3 = iVar3 + 0x1c) {
          FUN_100b9a02();
        }
        (*DAT_1039c964)(local_38);
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
      }
      local_14 = 0xffffffff;
      if (local_48 != 0) {
        (*DAT_1039c964)(local_48);
      }
      iVar1 = local_58;
      iVar3 = local_5c;
      if (local_5c != 0) {
        for (; iVar3 != iVar1; iVar3 = iVar3 + 0x1c) {
          FUN_100b9a02();
        }
        (*DAT_1039c964)(local_5c);
        local_14 = 0xffffffff;
      }
      if (local_6c != 0) {
        (*DAT_1039c964)(local_6c);
      }
      ExceptionList = local_1c;
    }
    else {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return local_24;
}


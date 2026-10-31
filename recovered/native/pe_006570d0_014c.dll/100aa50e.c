/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aa50e */

int __thiscall FUN_100aa50e(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int *local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4470;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar4 = *param_1;
  local_38 = (param_1[1] - iVar4 >> 4) * -0x55555555 + 1;
  uVar1 = (param_1[2] - iVar4 >> 4) * -0x55555555;
  uVar2 = 0x5555555 - (uVar1 >> 1);
  uVar3 = (uVar1 >> 1) + uVar1;
  if (uVar3 <= local_38) {
    uVar3 = local_38;
  }
  if (uVar2 <= uVar1 && uVar1 - uVar2 != 0) {
    uVar3 = 0x5555555;
  }
  local_28 = param_1;
  if (0x5555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  local_20 = (undefined1 *)&local_4c;
  local_48 = FUN_10001426(uVar3 * 0x30);
  local_40 = local_48 + (param_2 - iVar4) + 0x30;
  local_4c = local_28;
  local_14 = 0;
  iVar5 = (param_2 - iVar4) + local_48;
  local_44 = uVar3;
  local_3c = local_40;
  local_34 = uVar3;
  local_2c = local_40;
  local_24 = local_48;
  FUN_100aa852(iVar5);
  iVar4 = *local_28;
  iVar6 = local_28[1];
  local_14 = 0xffffffff;
  local_40 = iVar5;
  local_30 = iVar5;
  iVar5 = local_24;
  if (param_2 == iVar6) {
    for (; iVar4 != param_2; iVar4 = iVar4 + 0x30) {
      FUN_100aa917(iVar5,iVar4);
      iVar5 = iVar5 + 0x30;
    }
    local_14 = 0xffffffff;
  }
  else {
    if (iVar4 != param_2) {
      do {
        FUN_100aa917(iVar5,iVar4);
        iVar4 = iVar4 + 0x30;
        iVar5 = iVar5 + 0x30;
      } while (iVar4 != param_2);
      iVar6 = local_28[1];
    }
    local_14 = 0xffffffff;
    local_40 = local_24;
    iVar4 = local_2c;
    for (; param_2 != iVar6; param_2 = param_2 + 0x30) {
      FUN_100aa917(iVar4,param_2);
      iVar4 = iVar4 + 0x30;
    }
  }
  local_48 = 0;
  FUN_100aa77e(local_24,local_38,local_34);
  iVar4 = local_30;
  local_14 = 0xffffffff;
  FUN_100aa7f6();
  *unaff_FS_OFFSET = local_1c;
  return iVar4;
}


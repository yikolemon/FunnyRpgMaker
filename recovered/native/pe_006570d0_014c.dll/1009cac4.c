/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009cac4 */

int __thiscall FUN_1009cac4(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int *local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3de0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar6 = *param_1;
  local_34 = (param_1[1] - iVar6 >> 2) * 0x286bca1b + 1;
  uVar1 = (param_1[2] - iVar6 >> 2) * 0x286bca1b;
  uVar2 = 0x35e50d7 - (uVar1 >> 1);
  uVar3 = (uVar1 >> 1) + uVar1;
  if (uVar3 <= local_34) {
    uVar3 = local_34;
  }
  if (uVar2 <= uVar1 && uVar1 - uVar2 != 0) {
    uVar3 = 0x35e50d7;
  }
  local_28 = param_1;
  if (0x35e50d7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  local_20 = (undefined1 *)&local_48;
  local_44 = FUN_10001426(uVar3 * 0x4c);
  local_3c = local_44 + (param_2 - iVar6) + 0x4c;
  local_48 = local_28;
  local_14 = 0;
  iVar5 = (param_2 - iVar6) + local_44;
  local_40 = uVar3;
  local_38 = local_3c;
  local_30 = uVar3;
  local_24 = local_44;
  FUN_1009cc64(param_3);
  iVar6 = *local_28;
  iVar4 = local_28[1];
  local_14 = 0xffffffff;
  local_3c = iVar5;
  local_2c = iVar5;
  if (param_2 == iVar4) {
    for (; iVar6 != param_2; iVar6 = iVar6 + 0x4c) {
      FUN_1009cc64(iVar6);
    }
    local_14 = 0xffffffff;
  }
  else {
    if (iVar6 != param_2) {
      do {
        FUN_1009cc64(iVar6);
        iVar6 = iVar6 + 0x4c;
      } while (iVar6 != param_2);
      iVar4 = local_28[1];
    }
    local_14 = 0xffffffff;
    local_3c = local_24;
    for (; param_2 != iVar4; param_2 = param_2 + 0x4c) {
      FUN_1009cc64(param_2);
    }
  }
  local_44 = 0;
  FUN_1009d1d2(local_24,local_34,local_30);
  iVar6 = local_2c;
  local_14 = 0xffffffff;
  FUN_1009d242();
  *unaff_FS_OFFSET = local_1c;
  return iVar6;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ab68e */

int __thiscall FUN_100ab68e(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
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
  int local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c44f0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar1 = *param_1;
  local_38 = (param_1[1] - iVar1 >> 2) * -0xf0f0f0f + 1;
  uVar2 = (param_1[2] - iVar1 >> 2) * -0xf0f0f0f;
  uVar3 = 0x3c3c3c3 - (uVar2 >> 1);
  uVar4 = (uVar2 >> 1) + uVar2;
  if (uVar4 <= local_38) {
    uVar4 = local_38;
  }
  if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
    uVar4 = 0x3c3c3c3;
  }
  local_24 = param_1;
  if (uVar4 < 0x3c3c3c4) {
    local_20 = (undefined1 *)&local_4c;
    local_48 = FUN_10001426(uVar4 * 0x44);
    local_40 = (param_2 - iVar1) + local_48 + 0x44;
    local_4c = local_24;
    local_14 = 0;
    local_2c = (param_2 - iVar1) + local_48;
    local_44 = uVar4;
    local_3c = local_40;
    local_34 = uVar4;
    local_30 = local_40;
    local_28 = local_48;
    FUN_100ab808(local_2c);
    local_40 = local_2c;
    if (param_2 == local_24[1]) {
      FUN_100ab8f3(*local_24,local_24[1],local_28,local_24);
    }
    else {
      FUN_100ab9aa(*local_24,param_2,local_28,local_24);
      local_40 = local_28;
      FUN_100ab9aa(param_2,local_24[1],local_30,local_24);
    }
    local_48 = 0;
    FUN_100aba64(local_28,local_38,local_34);
    local_14 = 0xffffffff;
    FUN_100abae0();
    *unaff_FS_OFFSET = local_1c;
    return local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}


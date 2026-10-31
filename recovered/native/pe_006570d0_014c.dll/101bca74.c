/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bca74 */

void __thiscall FUN_101bca74(int *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_18 = &LAB_101bd000;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_2c = 0;
  local_14 = 0;
  uVar4 = *param_3 - *param_1;
  local_30 = param_1;
  if (uVar4 == 0 || (int)*param_3 < *param_1) {
    local_24 = 0;
    local_20 = (undefined1 *)&local_44;
  }
  else {
    local_24 = 0;
    local_34 = uVar4;
    local_24 = FUN_100fa1fa(uVar4 * 8);
    local_2c = local_34;
  }
  local_38 = -1;
  local_28 = 0;
  iVar5 = 0;
  while (iVar5 < (int)*param_3) {
    local_40 = iVar5;
    local_34 = local_24;
    uVar3 = (*(code *)local_30[3])(local_30,iVar5);
    local_24 = local_34;
    cVar2 = FUN_1014b156(uVar3);
    local_24 = local_34;
    if (cVar2 == '\0') {
      local_44 = param_3[2];
      if (local_28 == local_2c) {
        local_3c = (local_2c >> 1) + local_2c;
        if (local_2c == 0) {
          local_3c = 8;
        }
        if ((int)local_3c <= (int)(local_2c + 1)) {
          local_3c = local_2c + 1;
        }
        uVar4 = FUN_100fa1fa(local_3c * 8);
        uVar1 = local_34;
        if (local_34 != 0) {
          iVar5 = local_2c << 3;
          local_2c = uVar4;
          FUN_1025b2d0(uVar4,local_34,iVar5);
          local_24 = uVar1;
          FUN_100fa2cb(uVar1);
          uVar4 = local_2c;
        }
      }
      else {
        local_3c = local_2c;
        uVar4 = local_34;
      }
      *(undefined8 *)(uVar4 + local_28 * 8) = *(undefined8 *)(local_44 + local_40 * 8);
      local_28 = local_28 + 1;
      local_2c = local_3c;
      local_24 = uVar4;
    }
    if (param_4 == local_40) {
      local_38 = local_28 - 1;
    }
    iVar5 = local_40 + 1;
  }
  *param_3 = local_28;
  param_3[1] = local_2c;
  local_28 = param_3[2];
  param_3[2] = local_24;
  local_24 = local_28;
  FUN_1014b0b0();
  if ((local_38 != -1) && (*(char *)(param_2 + 0x20) == '\x01')) {
    local_24 = local_28;
    uVar3 = (*(code *)local_30[3])(local_30,local_38);
    local_24 = local_28;
    FUN_1014b226(uVar3,1);
  }
  local_14 = 0xffffffff;
  if (local_28 == 0) {
    *unaff_FS_OFFSET = local_1c;
  }
  else {
    local_24 = local_28;
    FUN_100fa2cb(local_28);
    *unaff_FS_OFFSET = local_1c;
  }
  return;
}


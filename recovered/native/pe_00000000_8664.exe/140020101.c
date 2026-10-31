/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140020101 */

undefined8
FUN_140020101(undefined8 param_1,undefined8 param_2,uint *param_3,int param_4,undefined8 param_5,
             uint *param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 **local_70;
  undefined4 *local_68;
  uint *local_60;
  int *local_58;
  uint *local_50;
  uint *local_48;
  int *local_40;
  uint *local_38;
  undefined1 local_2d;
  uint local_2c;
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  uVar1 = param_3[2];
  local_28 = uVar1 + param_4;
  local_78 = (longlong)(int)((param_4 + 1) - (uint)(param_7 == 0));
  local_60 = param_3;
  local_24 = param_4;
  if (-1 < (longlong)(int)uVar1) {
    local_78 = (int)uVar1 + local_78;
    local_2c = param_6[3] - local_28;
    if ((*param_6 >> 0xd & 1) != 0) {
      local_78 = local_78 + 1;
      if ((*param_6 & 7) == 2 || 0 < (int)local_2c) {
        if (0 < (int)local_2c) {
          local_78 = local_78 + (ulonglong)local_2c;
        }
      }
      else {
        local_2c = 0;
      }
    }
    local_68 = &param_7;
    local_70 = &local_68;
    local_58 = &local_24;
    local_50 = (uint *)&local_2d;
    local_48 = param_6;
    local_40 = (int *)&param_5;
    local_38 = &local_2c;
    FUN_140020436(param_1,param_2,param_6,local_78);
    goto LAB_140020282;
  }
  if (0 < (int)local_28) {
    local_2c = param_6[3] - param_4 & (int)(*param_6 << 0x12) >> 0x1f;
    local_38 = &local_2c;
    uVar3 = (ulonglong)local_2c;
    if ((int)local_2c < 1) {
      uVar3 = 0;
    }
    local_78 = uVar3 + 1 + local_78;
    local_68 = &param_7;
    local_70 = &local_68;
    local_58 = &local_24;
    local_50 = &local_28;
    local_48 = (uint *)&param_5;
    local_40 = (int *)&local_2d;
    FUN_14002065b(param_1);
    goto LAB_140020282;
  }
  local_2c = -local_28;
  if (param_4 == 0) {
    uVar1 = param_6[3];
    if ((int)uVar1 < (int)local_2c && -1 < (int)uVar1) {
      local_2c = uVar1;
    }
    if (local_2c != 0) goto LAB_1400202db;
    local_2d = (undefined1)((*param_6 & 0x2000) >> 0xd);
    iVar2 = 2 - (uint)((*param_6 & 0x2000) == 0);
    uVar1 = 0;
  }
  else {
LAB_1400202db:
    local_2d = 1;
    iVar2 = 2;
    uVar1 = local_2c;
  }
  local_78 = (ulonglong)(uVar1 + iVar2) + local_78;
  local_68 = &param_7;
  local_70 = &local_68;
  local_60 = (uint *)&local_2d;
  local_58 = (int *)&param_5;
  local_50 = &local_2c;
  local_40 = &local_24;
  local_48 = param_3;
  FUN_140020923(param_1);
LAB_140020282:
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_98)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_98);
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006bf4c */

uint FUN_1006bf4c(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined4 **local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 **local_60 [5];
  uint local_4c;
  wchar_t *local_48;
  undefined4 local_44;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_70;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c2540;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  puVar1 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  iVar2 = FUN_10271d80(puVar1);
  uVar3 = 2;
  if ((iVar2 != 0) && (iVar2 == param_1[4])) {
    local_70 = local_60;
    FUN_10002e46(param_1);
    local_18 = 0;
    local_48 = L"*";
    local_44 = 1;
    FUN_1006c0ca(&local_48);
    if (7 < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    uVar3 = FUN_10228cb0(param_1,param_3,param_4);
    if (uVar3 == 5) {
      uVar3 = 0x12;
      if ((param_2 & 2) == 0) {
        uVar3 = 5;
      }
    }
    else if (uVar3 == 2) {
      FUN_10002303();
      local_6c = 0;
      local_68 = 0xffff;
      if (7 < local_4c) {
        local_70 = local_60[0];
      }
      local_64 = FUN_10228d20(local_70,&local_48,3,0xffffffff);
      FUN_100025ec(local_64,&local_48);
      FUN_10002303();
      iVar2 = local_6c;
      if (local_6c == 0) {
        uVar3 = 2;
      }
      else {
        FUN_10002303();
        uVar3 = (uint)(iVar2 != 1) << 4 | 2;
      }
    }
    else if (uVar3 == 0) {
      uVar3 = FUN_1006c152(*param_3,param_4);
    }
    local_18 = 0xffffffff;
    FUN_10001f04();
  }
  *unaff_FS_OFFSET = local_20;
  return uVar3;
}


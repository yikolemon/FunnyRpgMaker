/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001601e */

undefined4 * __thiscall
FUN_1001601e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,int param_7)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  uint local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_10058f70;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  uVar1 = param_7 + param_5;
  uVar3 = 0xf;
  local_24 = param_1;
  puVar2 = &local_28;
  if (0xf < uVar1) {
    uVar3 = 0x16;
    if (0x16 < (uVar1 | 0xf)) {
      uVar3 = uVar1 | 0xf;
    }
    local_28 = 0x7fffffff;
    if (-1 < (int)uVar1) {
      local_28 = uVar3;
    }
    param_1 = (undefined4 *)FUN_10001426(local_28 + 1);
    *local_24 = param_1;
    uVar3 = local_28;
    puVar2 = (uint *)local_20;
  }
  local_20 = (undefined1 *)puVar2;
  local_24[4] = param_7 + param_5;
  local_24[5] = uVar3;
  FUN_1025b2d0(param_1,param_4,param_5);
  FUN_1025b2d0(param_5 + (int)param_1,param_6,param_7);
  *(undefined1 *)((int)param_1 + param_7 + param_5) = 0;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}


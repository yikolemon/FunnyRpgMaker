/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10017a0c */

undefined4 *
FUN_10017a0c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_18 = &LAB_100590e0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  iVar3 = param_2[4];
  uVar4 = param_3[4] + iVar3 + param_4[4];
  puVar2 = local_24;
  if (0xf < uVar4) {
    FUN_10003cd4(uVar4,local_24[0]);
    param_1[4] = 0;
    iVar3 = param_2[4];
    puVar2 = local_20;
  }
  local_20 = puVar2;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_1000347e(param_2,iVar3);
  puVar1 = param_3 + 4;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  FUN_1000347e(param_3,*puVar1);
  puVar1 = param_4 + 4;
  if (0xf < (uint)param_4[5]) {
    param_4 = (undefined4 *)*param_4;
  }
  FUN_1000347e(param_4,*puVar1);
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100545ad */

undefined4 *
FUN_100545ad(undefined4 *param_1,char *param_2,undefined4 *param_3,char *param_4,undefined4 *param_5
            )

{
  undefined4 *puVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_18 = &LAB_1005ab70;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  sVar3 = _strlen(param_2);
  iVar2 = param_3[4];
  sVar4 = _strlen(param_4);
  uVar5 = sVar4 + sVar3 + iVar2 + param_5[4];
  if (0xf < uVar5) {
    FUN_10003cd4(uVar5,local_24[0]);
    param_1[4] = 0;
  }
  sVar3 = _strlen(param_2);
  FUN_1000347e(param_2,sVar3);
  puVar1 = param_3 + 4;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  FUN_1000347e(param_3,*puVar1);
  sVar3 = _strlen(param_4);
  FUN_1000347e(param_4,sVar3);
  puVar1 = param_5 + 4;
  if (0xf < (uint)param_5[5]) {
    param_5 = (undefined4 *)*param_5;
  }
  FUN_1000347e(param_5,*puVar1);
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}


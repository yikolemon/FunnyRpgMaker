/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10017c29 */

undefined4 *
FUN_10017c29(undefined4 *param_1,char *param_2,undefined4 *param_3,char *param_4,undefined4 *param_5
            ,char *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_18 = &LAB_10059110;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  sVar4 = _strlen(param_2);
  iVar2 = param_3[4];
  iVar3 = param_5[4];
  sVar5 = _strlen(param_6);
  uVar6 = sVar5 + sVar4 + iVar2 + iVar3 + 1;
  if (0xf < uVar6) {
    FUN_10003cd4(uVar6,local_24[0]);
    param_1[4] = 0;
  }
  sVar4 = _strlen(param_2);
  FUN_1000347e(param_2,sVar4);
  puVar1 = param_3 + 4;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  FUN_1000347e(param_3,*puVar1);
  FUN_10003d9a((int)*param_4);
  puVar1 = param_5 + 4;
  if (0xf < (uint)param_5[5]) {
    param_5 = (undefined4 *)*param_5;
  }
  FUN_1000347e(param_5,*puVar1);
  sVar4 = _strlen(param_6);
  FUN_1000347e(param_6,sVar4);
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100542f1 */

undefined4 *
FUN_100542f1(undefined4 *param_1,undefined4 *param_2,char *param_3,undefined4 *param_4,char *param_5
            ,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_18 = &LAB_1005ab40;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  iVar6 = param_2[4];
  sVar3 = _strlen(param_3);
  iVar2 = param_4[4];
  sVar4 = _strlen(param_5);
  uVar5 = sVar4 + sVar3 + iVar6 + iVar2 + param_6[4] + param_7[4];
  if (0xf < uVar5) {
    FUN_10003cd4(uVar5,local_24[0]);
    param_1[4] = 0;
    iVar6 = param_2[4];
  }
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_1000347e(param_2,iVar6);
  sVar3 = _strlen(param_3);
  FUN_1000347e(param_3,sVar3);
  puVar1 = param_4 + 4;
  if (0xf < (uint)param_4[5]) {
    param_4 = (undefined4 *)*param_4;
  }
  FUN_1000347e(param_4,*puVar1);
  sVar3 = _strlen(param_5);
  FUN_1000347e(param_5,sVar3);
  puVar1 = param_6 + 4;
  if (0xf < (uint)param_6[5]) {
    param_6 = (undefined4 *)*param_6;
  }
  FUN_1000347e(param_6,*puVar1);
  puVar1 = param_7 + 4;
  if (0xf < (uint)param_7[5]) {
    param_7 = (undefined4 *)*param_7;
  }
  FUN_1000347e(param_7,*puVar1);
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}


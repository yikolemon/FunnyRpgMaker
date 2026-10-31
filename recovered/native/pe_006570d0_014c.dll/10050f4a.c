/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10050f4a */

undefined4 * FUN_10050f4a(undefined4 *param_1,char *param_2,undefined4 *param_3,char *param_4)

{
  undefined4 *puVar1;
  size_t sVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_18 = &LAB_1005a940;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  sVar2 = _strlen(param_2);
  uVar3 = sVar2 + param_3[4] + 1;
  if (0xf < uVar3) {
    FUN_10003cd4(uVar3,local_24[0]);
    param_1[4] = 0;
  }
  sVar2 = _strlen(param_2);
  FUN_1000347e(param_2,sVar2);
  puVar1 = param_3 + 4;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  FUN_1000347e(param_3,*puVar1);
  FUN_10003d9a((int)*param_4);
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}


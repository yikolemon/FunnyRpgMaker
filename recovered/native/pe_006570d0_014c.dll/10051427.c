/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10051427 */

undefined4 * FUN_10051427(undefined4 *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  size_t sVar2;
  int *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_18 = &LAB_1005a960;
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
  if (0xf < sVar2 + param_3[4]) {
    FUN_10003cd4(sVar2 + param_3[4],local_24[0]);
    param_1[4] = 0;
  }
  sVar2 = _strlen(param_2);
  FUN_1000347e(param_2,sVar2);
  puVar1 = param_3 + 4;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  FUN_1000347e(param_3,*puVar1);
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}


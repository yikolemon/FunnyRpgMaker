/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10017682 */

undefined4 * FUN_10017682(undefined4 *param_1,char *param_2,undefined4 *param_3)

{
  char *_Str;
  size_t sVar1;
  size_t sVar2;
  int *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_18 = &LAB_100590b0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  sVar1 = _strlen(param_2);
  sVar2 = _strlen((char *)*param_3);
  if (0xf < sVar2 + sVar1) {
    FUN_10003cd4(sVar2 + sVar1,local_24[0]);
    param_1[4] = 0;
  }
  sVar1 = _strlen(param_2);
  FUN_1000347e(param_2,sVar1);
  _Str = (char *)*param_3;
  sVar1 = _strlen(_Str);
  FUN_1000347e(_Str,sVar1);
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}


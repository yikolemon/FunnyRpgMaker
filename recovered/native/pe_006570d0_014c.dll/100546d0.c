/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100546d0 */

undefined4 *
FUN_100546d0(undefined4 *param_1,undefined4 *param_2,char *param_3,undefined4 *param_4,char *param_5
            )

{
  undefined4 *puVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  char *_Str;
  int *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_18 = &LAB_1005ab80;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  _Str = (char *)*param_2;
  sVar2 = _strlen(_Str);
  sVar3 = _strlen(param_3);
  uVar4 = sVar3 + sVar2 + param_4[4] + 1;
  if (0xf < uVar4) {
    FUN_10003cd4(uVar4,local_24[0]);
    param_1[4] = 0;
    _Str = (char *)*param_2;
  }
  sVar2 = _strlen(_Str);
  FUN_1000347e(_Str,sVar2);
  sVar2 = _strlen(param_3);
  FUN_1000347e(param_3,sVar2);
  puVar1 = param_4 + 4;
  if (0xf < (uint)param_4[5]) {
    param_4 = (undefined4 *)*param_4;
  }
  FUN_1000347e(param_4,*puVar1);
  FUN_10003d9a((int)*param_5);
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}


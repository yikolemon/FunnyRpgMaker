/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10101b1a */

void __fastcall FUN_10101b1a(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_14 = &LAB_1012cb30;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  for (iVar2 = 0; iVar1 = param_1[5], iVar2 < (int)param_1[3]; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar1 + 4 + iVar2 * 8);
    if (iVar1 != -1) {
      local_20 = iVar1 * 0xa4 + param_1[2];
      local_10 = 0xffffffff;
      if (*(int *)(local_20 + 0xa0) != 0) {
        FUN_100fa2cb(*(int *)(local_20 + 0xa0));
      }
      if (*(int *)(local_20 + 0xc) != 0) {
        FUN_100fa2cb(*(int *)(local_20 + 0xc));
      }
    }
  }
  if (iVar1 != 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    local_10 = 0xffffffff;
    FUN_100fa2cb(iVar1);
    param_1[5] = 0;
  }
  if (param_1[2] != 0) {
    param_1[1] = 0;
    *param_1 = 0;
    local_10 = 0xffffffff;
    FUN_100fa2cb(param_1[2]);
    param_1[2] = 0;
  }
  param_1[7] = 0;
  param_1[6] = 0;
  ExceptionList = local_18;
  return;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003d5f4 */

void FUN_1003d5f4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int local_44 [5];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a0d0;
  local_1c = ExceptionList;
  local_44[0] = *param_1;
  ExceptionList = &local_1c;
  FUN_100244ca();
  local_2c = local_44[0];
  local_24 = *(int *)*param_1;
  if ((int *)local_24 != (int *)*param_1) {
    local_28 = local_28 + 4;
    do {
      local_30 = local_24;
      FUN_1003a106((*(int *)(local_24 + 0x20) - (uint)(local_24 == local_2c)) +
                   *(int *)(local_24 + 0x38) + 2,local_28,param_2);
      local_14 = 0;
      if (*(uint *)(local_30 + 0x24) < 0x10) {
        iVar1 = local_30 + 0x10;
      }
      else {
        iVar1 = *(int *)(local_30 + 0x10);
      }
      FUN_1001909c(iVar1,*(int *)(local_30 + 0x20) + iVar1);
      FUN_1001909c(&DAT_1033da8f,&DAT_1033da90);
      if (*(uint *)(local_30 + 0x3c) < 0x10) {
        iVar1 = local_30 + 0x28;
      }
      else {
        iVar1 = *(int *)(local_30 + 0x28);
      }
      FUN_1001909c(iVar1,*(int *)(local_30 + 0x38) + iVar1);
      if (local_24 != local_2c) {
        FUN_1001909c(&DAT_1034bcc8,&DAT_1034bcc9);
      }
      local_14 = 0xffffffff;
      FUN_1003a17a();
      FUN_10016fb8();
    } while (local_24 != *param_1);
  }
  ExceptionList = local_1c;
  return;
}


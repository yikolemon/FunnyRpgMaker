/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101825a7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_101825a7(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  float10 fVar3;
  undefined8 local_64;
  float local_5c;
  undefined1 local_3c [4];
  char local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_10185ff0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    local_30 = param_1;
    local_2c = param_2;
    local_28 = param_1;
    FUN_1018218a();
    local_14 = 2;
    local_64 = (double)((float)((double)((ulonglong)*(uint *)(local_2c + 8) |
                                        (ulonglong)DAT_1028f6c0) - DAT_1028f6b0) / local_5c);
    fVar3 = (float10)FUN_1026d3b0();
    local_34 = (float)fVar3;
    local_64 = (double)CONCAT44(local_64._4_4_,
                                (int)(local_34 - DAT_1028f6d0) & (int)fVar3 >> 0x1f | (int)fVar3);
    FUN_101832d8();
    iVar2 = local_30;
    while (*(int *)(iVar2 + 0x3a0) != 0) {
      local_64 = (double)CONCAT44(local_64._4_4_,&local_24);
      local_24 = *(int *)(iVar2 + 0x3a0);
      uVar1 = FUN_100616f3();
      uVar1 = uVar1 & *(uint *)(local_2c + 0x18);
      iVar2 = *(int *)(*(int *)(local_2c + 0xc) + 4 + uVar1 * 8);
      if (iVar2 == *(int *)(local_2c + 4)) break;
      if (local_24 != *(int *)(iVar2 + 8)) {
        do {
          if (iVar2 == *(int *)(*(int *)(local_2c + 0xc) + uVar1 * 8)) goto code_r0x101826d5;
          iVar2 = *(int *)(iVar2 + 4);
        } while (local_24 != *(int *)(iVar2 + 8));
      }
      local_14 = 2;
      local_64 = (double)CONCAT44(&local_28,local_3c);
      FUN_1018394c();
      if (local_38 == '\0') break;
      local_28 = local_24;
      iVar2 = local_24;
    }
code_r0x101826d5:
    iVar2 = local_28;
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_101832a0();
  }
  *unaff_FS_OFFSET = local_1c;
  return iVar2;
}


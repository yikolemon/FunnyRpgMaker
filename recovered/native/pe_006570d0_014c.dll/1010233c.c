/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010233c */

void FUN_1010233c(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_1012c9a0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar5 = DAT_1039d74c;
  iVar3 = *(int *)(DAT_1039d74c + 0x1fac);
  piVar2 = &local_28;
  if (iVar3 != 0) {
    *(undefined4 *)(DAT_1039d74c + 0x1fa8) = 0;
    *(undefined4 *)(iVar5 + 0x1fa4) = 0;
    FUN_100fa2cb(iVar3);
    *(undefined4 *)(iVar5 + 0x1fac) = 0;
    piVar2 = (int *)local_20;
  }
  local_20 = (undefined1 *)piVar2;
  if (*(int *)(iVar5 + 0x1fb8) != 0) {
    *(undefined4 *)(iVar5 + 0x1fb4) = 0;
    *(undefined4 *)(iVar5 + 0x1fb0) = 0;
    FUN_100fa2cb(*(int *)(iVar5 + 0x1fb8));
    *(undefined4 *)(iVar5 + 0x1fb8) = 0;
  }
  if (*(int *)(iVar5 + 0x24dc) != 0) {
    *(undefined4 *)(iVar5 + 0x24d8) = 0;
    *(undefined4 *)(iVar5 + 0x24d4) = 0;
    FUN_100fa2cb(*(int *)(iVar5 + 0x24dc));
    *(undefined4 *)(iVar5 + 0x24dc) = 0;
  }
  iVar4 = 0;
  *(undefined4 *)(iVar5 + 0x24e0) = 0;
  *(undefined4 *)(iVar5 + 0x2418) = 0;
  iVar3 = *(int *)(iVar5 + 0x241c);
  if (0 < iVar3) {
    iVar6 = 0;
    do {
      local_24 = *(int *)(iVar5 + 0x2424);
      local_14 = 0xffffffff;
      iVar1 = *(int *)(local_24 + 8 + iVar4);
      local_28 = iVar4;
      if (iVar1 != 0) {
        FUN_100fa2cb(iVar1);
        iVar3 = *(int *)(iVar5 + 0x241c);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x58;
    } while (iVar6 < iVar3);
  }
  if (*(int *)(iVar5 + 0x2424) != 0) {
    *(undefined4 *)(iVar5 + 0x2420) = 0;
    *(undefined4 *)(iVar5 + 0x241c) = 0;
    FUN_100fa2cb(*(int *)(iVar5 + 0x2424));
    *(undefined4 *)(iVar5 + 0x2424) = 0;
  }
  FUN_10168410();
  iVar3 = *(int *)(iVar5 + 0x1214);
  if (iVar3 != 0) {
    iVar5 = 0;
    do {
      FUN_1018e6ee();
      iVar5 = iVar5 + 4;
    } while (iVar3 << 2 != iVar5);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}


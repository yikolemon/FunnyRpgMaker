/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101818ec */

void __fastcall FUN_101818ec(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_70 [8];
  uint local_68;
  int *local_50;
  int *local_4c;
  int *local_44;
  int local_40;
  char local_3c;
  int *local_38;
  HWND local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_70;
  local_14 = 0xffffffff;
  local_18 = &LAB_10185fd0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_34 = (HWND)param_2;
  iVar3 = FUN_100fbf7e();
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x1fe0);
    if (iVar1 != 0) {
      local_24 = *(int **)(iVar3 + 0x1fe8);
      iVar3 = 0;
      local_38 = (int *)(param_1 & 0xff);
      do {
        iVar2 = *(int *)((int)local_24 + iVar3);
        if (*(int *)(iVar2 + 0x4c) != 0) {
          local_14 = 0xffffffff;
          iVar4 = FUN_1010ad36();
          if (iVar2 != iVar4) {
            FUN_10181bab();
          }
        }
        iVar3 = iVar3 + 4;
      } while (iVar1 << 2 != iVar3);
    }
    if ((char)local_34 == '\0') {
      local_14 = 0xffffffff;
      FUN_10181c1a();
      local_30 = (int *)0x0;
      local_2c = (int *)0x0;
      local_28 = (int *)0x0;
      local_14 = 3;
      FUN_1018218a();
      local_34 = (HWND)-(uint)DAT_1038a630;
      while (local_4c != local_50) {
        if (local_30 != local_2c) {
          local_2c = local_30;
        }
        local_14 = 4;
        local_24 = local_4c;
        FUN_100647d6(local_4c[-3] - local_4c[-4] >> 2);
        local_44 = local_24 + -5;
        local_38 = (int *)local_24[-3];
        piVar5 = (int *)local_24[-4];
        while (piVar6 = local_2c, piVar5 != local_38) {
          iVar3 = *piVar5;
          iVar1 = *(int *)(iVar3 + 0x3c);
          local_24 = piVar5;
          if (((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x4c), iVar1 != 0)) &&
             (piVar5 = (int *)FUN_10185ef8(local_30,local_2c,iVar1), piVar5 == local_2c)) {
            local_40 = *(int *)(*(int *)(iVar3 + 0x3c) + 0x4c);
            if (piVar5 == local_28) {
              local_14 = 4;
              FUN_10051662(local_2c,&local_40);
            }
            else {
              *local_2c = local_40;
              local_2c = local_2c + 1;
            }
          }
          piVar5 = local_24 + 1;
        }
        while (local_4c = local_44, piVar6 != local_30) {
          local_24 = piVar6 + -1;
          local_14 = 4;
          FUN_101821fe(&local_40,local_24);
          piVar6 = local_24;
          if (local_3c == '\x01') {
            if (1 < local_68) {
              SetWindowPos(*(HWND *)(local_40 + 8),local_34,0,0,0,0,0x213);
            }
            local_34 = *(HWND *)(local_40 + 8);
            piVar6 = local_24;
          }
        }
      }
      local_14 = 0xffffffff;
      FUN_10004eae();
      FUN_101832a0();
      FUN_10004eae();
      FUN_10185f1a();
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}


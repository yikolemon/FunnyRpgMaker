/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b942a */

void __thiscall FUN_101b942a(int param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_101b92e6(param_1,"# %s\n",param_2);
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  iVar4 = *(int *)(param_1 + 0x118) + 1;
  do {
    iVar5 = iVar4 + -1;
    if (iVar5 < 1) goto LAB_101b94b2;
    iVar1 = FUN_101b9aa0(*(undefined4 *)(*(int *)(param_1 + 0x120) + -8 + iVar4 * 4),param_2);
    iVar4 = iVar5;
  } while (iVar1 != 0);
  FUN_100fa2cb(*(undefined4 *)(*(int *)(param_1 + 0x120) + -4 + iVar5 * 4));
  FUN_1025b2d0(*(int *)(param_1 + 0x120) + iVar5 * 4 + -4,*(int *)(param_1 + 0x120) + iVar5 * 4,
               (*(int *)(param_1 + 0x118) - iVar5) * 4);
  *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + -1;
LAB_101b94b2:
  sVar2 = _strlen(param_2);
  uVar3 = FUN_100fa1fa(sVar2 + 1);
  FUN_1025b2d0(uVar3,param_2,sVar2 + 1);
  iVar4 = *(int *)(param_1 + 0x118);
  if (iVar4 == *(int *)(param_1 + 0x11c)) {
    if (iVar4 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar4 / 2 + iVar4;
    }
    iVar1 = iVar4 + 1;
    if (iVar4 + 1 < iVar5) {
      iVar1 = iVar5;
    }
    iVar5 = FUN_100fa1fa(iVar1 * 4);
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_1025b2d0(iVar5,*(int *)(param_1 + 0x120),*(int *)(param_1 + 0x118) << 2);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x120));
    }
    *(int *)(param_1 + 0x120) = iVar5;
    *(int *)(param_1 + 0x11c) = iVar1;
    iVar4 = *(int *)(param_1 + 0x118);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x120);
  }
  *(undefined4 *)(iVar5 + iVar4 * 4) = uVar3;
  *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
  iVar4 = FUN_101b9aa0(param_2,"CLEAR");
  if (iVar4 == 0) {
    FUN_101b9292();
  }
  else {
    iVar4 = FUN_101b9aa0(param_2,&DAT_1033c2fc);
    if (iVar4 == 0) {
      FUN_101b92e6(param_1,"Commands:");
      if (0 < *(int *)(param_1 + 0x10c)) {
        iVar4 = 0;
        do {
          FUN_101b92e6(param_1,&DAT_103344b5,*(undefined4 *)(*(int *)(param_1 + 0x114) + iVar4 * 4))
          ;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x10c));
      }
    }
    else {
      iVar4 = FUN_101b9aa0(param_2,"HISTORY");
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x118);
        iVar5 = 10;
        if (10 < iVar4) {
          iVar5 = iVar4;
        }
        iVar5 = iVar5 + -10;
        if (iVar5 < iVar4) {
          do {
            FUN_101b92e6(param_1,"%3d: %s\n",iVar5,
                         *(undefined4 *)(*(int *)(param_1 + 0x120) + iVar5 * 4));
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x118));
        }
      }
      else {
        FUN_101b92e6(param_1,"Unknown command: \'%s\'\n",param_2);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x239) = 1;
  return;
}


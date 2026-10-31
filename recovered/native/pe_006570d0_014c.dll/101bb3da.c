/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bb3da */

void __thiscall FUN_101bb3da(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_114 [256];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_114;
  cVar1 = FUN_10116a0f(0,0);
  if (cVar1 != '\0') {
    FUN_101b5fc7(auStack_114,"Save %s",param_2);
    cVar1 = FUN_10131d08(auStack_114,"Ctrl+S",0,*(undefined1 *)(param_2 + 0x24));
    if (cVar1 != '\0') {
      *(undefined1 *)(param_2 + 0x26) = 0;
    }
    cVar1 = FUN_10131d08("Rename...","Ctrl+R",0,*(undefined1 *)(param_2 + 0x24));
    if (cVar1 != '\0') {
      *(int *)(param_1 + 0x18) = param_2;
    }
    cVar1 = FUN_10131d08("Close","Ctrl+W",0,*(undefined1 *)(param_2 + 0x24));
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == *(int *)(param_1 + 0x10)) {
        if (iVar2 == 0) {
          iVar3 = 8;
        }
        else {
          iVar3 = iVar2 / 2 + iVar2;
        }
        iVar4 = iVar2 + 1;
        if (iVar2 + 1 < iVar3) {
          iVar4 = iVar3;
        }
        iVar3 = FUN_100fa1fa(iVar4 * 4);
        if (*(int *)(param_1 + 0x14) != 0) {
          FUN_1025b2d0(iVar3,*(int *)(param_1 + 0x14),*(int *)(param_1 + 0xc) << 2);
          FUN_100fa2cb(*(undefined4 *)(param_1 + 0x14));
        }
        *(int *)(param_1 + 0x14) = iVar3;
        *(int *)(param_1 + 0x10) = iVar4;
        iVar2 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x14);
      }
      *(int *)(iVar3 + iVar2 * 4) = param_2;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    FUN_101165cb();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_114)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010c53d */

void FUN_1010c53d(int param_1,char param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_10;
  
  iVar1 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_20;
  if ((*(uint *)(param_1 + 0xc) >> 0x10 & 1) == 0) {
    if (((((*(uint *)(param_1 + 0xc) >> 0x1a & 1) == 0) && (param_1 != *(int *)(param_1 + 0x3a8)))
        && (param_2 == '\0')) && (*(int *)(param_1 + 0x3c4) != 0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if ((*(byte *)(DAT_1039d74c + 0x27b4) & 0x10) != 0) {
      FUN_100f99e6("[nav] NavInitRequest: from NavInitWindow(), init_for_nav=%d, window=\"%s\", layer=%d\n"
                   ,cVar3,*(undefined4 *)(param_1 + 4),*(undefined4 *)(DAT_1039d74c + 0x2050));
    }
    if (cVar3 != '\0') {
      local_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      FUN_1011714e(0,*(undefined4 *)(iVar1 + 0x2050),*(undefined4 *)(param_1 + 0x3fc),&local_20);
      *(undefined2 *)(iVar1 + 0x209a) = 1;
      *(undefined4 *)(iVar1 + 0x20a4) = 0;
      uVar2 = 1;
      if (*(char *)(DAT_1039d74c + 0x20d9) == '\0') {
        uVar2 = *(undefined1 *)(DAT_1039d74c + 0x209a);
      }
      *(undefined1 *)(DAT_1039d74c + 0x2099) = uVar2;
      goto LAB_1010c622;
    }
    *(undefined4 *)(iVar1 + 0x2044) = *(undefined4 *)(param_1 + 0x3c4);
  }
  else {
    *(undefined4 *)(DAT_1039d74c + 0x2044) = 0;
  }
  FUN_101120d9(*(undefined4 *)(param_1 + 0x3fc));
LAB_1010c622:
  if (DAT_10388d00 == (local_10 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


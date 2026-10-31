/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101034e2 */

void FUN_101034e2(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = DAT_1039d74c;
  if ((((param_2 & 2) != 0) && (*(int *)(DAT_1039d74c + 0x2048) != param_1)) &&
     (iVar2 = FUN_10115e32(param_1), iVar2 != 0)) {
    if ((*(byte *)(iVar1 + 0x27b4) & 4) != 0) {
      if (param_1 == 0) {
        pcVar5 = "<NULL>";
      }
      else {
        pcVar5 = *(char **)(param_1 + 4);
      }
      FUN_100f99e6("[focus] FocusWindow(\"%s\", UnlessBelowModal): prevented by \"%s\".\n",pcVar5,
                   *(undefined4 *)(iVar2 + 4));
    }
    if (((param_1 != 0) && (param_1 == *(int *)(param_1 + 0x3a8))) &&
       ((*(byte *)(param_1 + 0xd) & 0x20) == 0)) {
      FUN_10116fdc(param_1,iVar2);
    }
    uVar4 = FUN_1010400a();
    FUN_10104092(uVar4,0);
    return;
  }
  if (param_1 != 0 && (param_2 & 1) != 0) {
    param_1 = FUN_10117072();
  }
  if (*(int *)(iVar1 + 0x2048) != param_1) {
    FUN_1011238c(param_1);
    if (param_1 == 0) {
      uVar4 = 0;
      *(undefined4 *)(iVar1 + 0x2044) = 0;
      *(undefined4 *)(iVar1 + 0x2050) = 0;
    }
    else {
      if (*(char *)(iVar1 + 0x2041) == '\x01') {
        *(undefined1 *)(iVar1 + 0x2042) = 1;
      }
      *(undefined4 *)(iVar1 + 0x2044) = *(undefined4 *)(param_1 + 0x3c4);
      *(undefined4 *)(iVar1 + 0x2050) = 0;
      uVar4 = *(undefined4 *)(param_1 + 0x3fc);
    }
    FUN_101120d9(uVar4);
    *(undefined1 *)(iVar1 + 0x2043) = 0;
    *(undefined4 *)(iVar1 + 0x2094) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2090) = 0xffffffff;
    FUN_10104092(param_1,0);
  }
  if (param_1 == 0) {
    iVar3 = *(int *)(iVar1 + 0x154c);
    iVar2 = 0;
    iVar6 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x3a8);
    iVar6 = *(int *)(param_1 + 0x3b0);
    iVar3 = *(int *)(iVar1 + 0x154c);
    if (*(int *)(param_1 + 0x430) != 0 && iVar3 != 0) {
      bVar7 = *(int *)(*(int *)(param_1 + 0x430) + 0x78) == iVar3;
      goto LAB_10103606;
    }
  }
  bVar7 = false;
LAB_10103606:
  if (((*(int *)(iVar1 + 0x1528) != 0) && (iVar3 != 0)) &&
     ((*(int *)(iVar3 + 0x3a8) != iVar2 && (!bVar7 && (*(byte *)(iVar1 + 0x1536) & 1) == 0)))) {
    FUN_101028d8();
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(iVar1 + 4);
    FUN_10114b4c(iVar2);
    if (((*(uint *)(iVar2 + 0xc) | *(uint *)(param_1 + 0xc) | *(uint *)(iVar6 + 0xc)) >> 0xd & 1) ==
        0) {
      FUN_10114ada(iVar6);
    }
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e1d7a */

longlong FUN_1400e1d7a(longlong param_1,longlong param_2)

{
  int iVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined4 extraout_XMM0_Da;
  
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    FUN_1400e2083(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (*(char *)(param_2 + 0x35) == '\0') {
    lVar5 = FUN_140077ab4(0x50);
    FUN_1400e2188(lVar5);
    iVar4 = *(int *)(param_1 + 0x29c);
    *(int *)(param_1 + 0x29c) = iVar4 + 1;
    *(int *)(lVar5 + 0x18) = iVar4;
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(param_2 + 0x70);
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar4 == *(int *)(param_1 + 0x6c)) {
      if (iVar4 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar4 / 2 + iVar4;
      }
      iVar11 = iVar4 + 1;
      if (iVar4 + 1 < iVar8) {
        iVar11 = iVar8;
      }
      lVar6 = FUN_140077ab4((longlong)iVar11 << 3);
      if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_1401c5180(lVar6,*(longlong *)(param_1 + 0x70),(longlong)*(int *)(param_1 + 0x68) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x70));
      }
      *(longlong *)(param_1 + 0x70) = lVar6;
      *(int *)(param_1 + 0x6c) = iVar11;
      iVar4 = *(int *)(param_1 + 0x68);
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x70);
    }
    *(longlong *)(lVar6 + (longlong)iVar4 * 8) = lVar5;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x80);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x70) + -8 + (longlong)iVar1 * 8);
    }
    FUN_1400e2244(param_1,lVar5,0);
  }
  iVar4 = *(int *)(param_1 + 0x78);
  if (iVar4 == *(int *)(param_1 + 0x7c)) {
    if (iVar4 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar4 / 2 + iVar4;
    }
    iVar11 = iVar4 + 1;
    if (iVar4 + 1 < iVar8) {
      iVar11 = iVar8;
    }
    lVar6 = FUN_140077ab4((longlong)iVar11 * 0xa0);
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1401c5180(lVar6,*(longlong *)(param_1 + 0x80),(longlong)*(int *)(param_1 + 0x78) * 0xa0);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x80));
    }
    *(longlong *)(param_1 + 0x80) = lVar6;
    *(int *)(param_1 + 0x7c) = iVar11;
    iVar4 = *(int *)(param_1 + 0x78);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x80);
  }
  FUN_1401c5180((longlong)iVar4 * 0xa0 + lVar6,param_2,0xa0);
  lVar9 = (longlong)*(int *)(param_1 + 0x78) + 1;
  *(int *)(param_1 + 0x78) = (int)lVar9;
  lVar10 = *(longlong *)(param_1 + 0x80);
  lVar9 = lVar9 * 0xa0;
  lVar6 = lVar10 + lVar9;
  if (*(longlong *)(lVar10 + -0x20 + lVar9) == 0) {
    *(longlong *)(lVar6 + -0x20) = lVar5;
  }
  lVar10 = lVar10 + lVar9 + -0xa0;
  iVar4 = *(int *)(lVar5 + 0x20);
  if (iVar4 == *(int *)(lVar5 + 0x24)) {
    if (iVar4 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar4 / 2 + iVar4;
    }
    iVar11 = iVar4 + 1;
    if (iVar4 + 1 < iVar8) {
      iVar11 = iVar8;
    }
    lVar9 = FUN_140077ab4((longlong)iVar11 << 3);
    if (*(longlong *)(lVar5 + 0x28) != 0) {
      FUN_1401c5180(lVar9,*(longlong *)(lVar5 + 0x28),(longlong)*(int *)(lVar5 + 0x20) << 3);
      FUN_140077b90(*(undefined8 *)(lVar5 + 0x28));
    }
    *(longlong *)(lVar5 + 0x28) = lVar9;
    *(int *)(lVar5 + 0x24) = iVar11;
    iVar4 = *(int *)(lVar5 + 0x20);
  }
  else {
    lVar9 = *(longlong *)(lVar5 + 0x28);
  }
  *(longlong *)(lVar9 + (longlong)iVar4 * 8) = lVar10;
  *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
  FUN_1400e22d3(param_1);
  psVar2 = *(short **)(lVar6 + -0x58);
  if (psVar2 != (short *)0x0) {
    if (*psVar2 == 0) {
      iVar4 = 2;
    }
    else {
      iVar4 = FUN_1401aa6d0(psVar2 + 1);
      iVar4 = iVar4 * 2 + 4;
    }
    uVar7 = FUN_140077af5(psVar2,iVar4);
    *(undefined8 *)(lVar6 + -0x58) = uVar7;
  }
  cVar3 = FUN_1400e2412(param_1,lVar10);
  if (cVar3 == '\0') {
    FUN_1400e1392(extraout_XMM0_Da,lVar10);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + -1;
    if (*(char *)(lVar6 + -0x6b) == '\0') {
      FUN_1400e2443(lVar5);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
    }
  }
  else {
    FUN_1400e2468(param_1,lVar5,lVar10);
    if (iVar1 == 0) {
      FUN_1400e118c(param_1,0,lVar5);
    }
  }
  return lVar5;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012808e */

void FUN_1012808e(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = DAT_1039d74c;
  *(undefined4 *)(DAT_1039d74c + 0x2080) = 0;
  *(undefined4 *)(iVar1 + 0x207c) = 0;
  if (((*(byte *)(iVar1 + 0x30) & 1) == 0) || (iVar3 = *(int *)(iVar1 + 0x2048), iVar3 == 0)) {
    return;
  }
  cVar2 = FUN_10113ee2(0x217,0xffffffff);
  if (cVar2 == '\0') {
    bVar5 = false;
    cVar2 = FUN_10113d60(0x245,0,0xffffffff);
    if (cVar2 != '\0') {
      bVar5 = *(int *)(iVar1 + 0x108) == 0x2000;
    }
  }
  else {
    bVar5 = true;
  }
  cVar2 = FUN_10113d60(0x27c,0,0xffffffff);
  if (cVar2 != '\0' || bVar5) {
    iVar4 = *(int *)(iVar1 + 0x2044);
    *(int *)(iVar1 + 0x207c) = iVar4;
    *(undefined4 *)(iVar1 + 0x2080) = *(undefined4 *)(iVar3 + 8);
    iVar3 = FUN_101021d4("#CLOSE",0);
    if ((iVar4 == iVar3) ||
       (iVar3 = *(int *)(iVar1 + 0x2044), iVar4 = FUN_101021d4("#COLLAPSE",0), iVar3 == iVar4)) {
      *(undefined4 *)(iVar1 + 0x207c) = *(undefined4 *)(*(int *)(iVar1 + 0x2048) + 0xb4);
    }
    *(undefined4 *)(iVar1 + 0x208c) = 2;
    FUN_101170bb();
    return;
  }
  return;
}


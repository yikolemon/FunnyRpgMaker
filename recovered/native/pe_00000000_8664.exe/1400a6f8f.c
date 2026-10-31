/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a6f8f */

void FUN_1400a6f8f(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  
  lVar3 = DAT_140f2a910;
  *(undefined8 *)(DAT_140f2a910 + 0x2240) = 0;
  if (((*(byte *)(lVar3 + 0x30) & 1) == 0) || (lVar2 = *(longlong *)(lVar3 + 0x2200), lVar2 == 0)) {
    return;
  }
  cVar4 = FUN_140092028(0x217,0xffffffff);
  bVar6 = true;
  if (cVar4 == '\0') {
    bVar6 = false;
    cVar4 = FUN_140091ea2(0x245,0,0xffffffff);
    if (cVar4 != '\0') {
      bVar6 = *(int *)(lVar3 + 0x13c) == 0x2000;
    }
  }
  cVar4 = FUN_140091ea2(0x27c,0,0xffffffff);
  if (cVar4 != '\0' || bVar6) {
    iVar1 = *(int *)(lVar3 + 0x21f8);
    *(int *)(lVar3 + 0x2240) = iVar1;
    *(undefined4 *)(lVar3 + 0x2244) = *(undefined4 *)(lVar2 + 0x10);
    iVar5 = FUN_140080066(lVar2,"#CLOSE",0);
    if ((iVar1 == iVar5) ||
       (iVar1 = *(int *)(lVar3 + 0x21f8),
       iVar5 = FUN_140080066(*(undefined8 *)(lVar3 + 0x2200),"#COLLAPSE",0), iVar1 == iVar5)) {
      *(undefined4 *)(lVar3 + 0x2240) = *(undefined4 *)(*(longlong *)(lVar3 + 0x2200) + 0xc4);
    }
    *(undefined4 *)(lVar3 + 0x2250) = 2;
    FUN_140095213();
    return;
  }
  return;
}


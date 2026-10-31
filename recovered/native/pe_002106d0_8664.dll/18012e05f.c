/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012e05f */

void FUN_18012e05f(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  
  lVar3 = DAT_180419160;
  *(undefined8 *)(DAT_180419160 + 0x2240) = 0;
  if (((*(byte *)(lVar3 + 0x30) & 1) == 0) || (lVar2 = *(longlong *)(lVar3 + 0x2200), lVar2 == 0)) {
    return;
  }
  cVar4 = FUN_180118d10(0x217,0xffffffff);
  bVar6 = true;
  if (cVar4 == '\0') {
    bVar6 = false;
    cVar4 = FUN_180118b8a(0x245,0,0xffffffff);
    if (cVar4 != '\0') {
      bVar6 = *(int *)(lVar3 + 0x13c) == 0x2000;
    }
  }
  cVar4 = FUN_180118b8a(0x27c,0,0xffffffff);
  if (cVar4 != '\0' || bVar6) {
    iVar1 = *(int *)(lVar3 + 0x21f8);
    *(int *)(lVar3 + 0x2240) = iVar1;
    *(undefined4 *)(lVar3 + 0x2244) = *(undefined4 *)(lVar2 + 0x10);
    iVar5 = FUN_180106d4e(lVar2,"#CLOSE",0);
    if ((iVar1 == iVar5) ||
       (iVar1 = *(int *)(lVar3 + 0x21f8),
       iVar5 = FUN_180106d4e(*(undefined8 *)(lVar3 + 0x2200),"#COLLAPSE",0), iVar1 == iVar5)) {
      *(undefined4 *)(lVar3 + 0x2240) = *(undefined4 *)(*(longlong *)(lVar3 + 0x2200) + 0xc4);
    }
    *(undefined4 *)(lVar3 + 0x2250) = 2;
    FUN_18011bf57();
    return;
  }
  return;
}


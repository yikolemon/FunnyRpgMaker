/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140081ce1 */

void FUN_140081ce1(void)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = DAT_140f2a910;
  if (*(int *)(DAT_140f2a910 + 0x167c) != 0) {
    return;
  }
  iVar6 = *(int *)(DAT_140f2a910 + 0x1664);
  if ((iVar6 != 0) && (*(char *)(DAT_140f2a910 + 0x1679) != '\x01')) {
    return;
  }
  lVar4 = *(longlong *)(DAT_140f2a910 + 0x2200);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x110) != '\0')) {
    return;
  }
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1610);
  cVar2 = FUN_140081ebc(0,0,0xffffffff);
  if (cVar2 == '\0') goto LAB_140081e5d;
  if ((lVar1 == 0) || (lVar8 = *(longlong *)(lVar1 + 0x418), lVar8 == 0)) {
    lVar8 = 0;
LAB_140081d7f:
    bVar3 = 0;
  }
  else {
    if ((*(byte *)(lVar8 + 0x17) & 4) == 0) goto LAB_140081d7f;
    bVar3 = FUN_140081f3e(*(undefined4 *)(lVar8 + 0xd0),0x800);
    bVar3 = bVar3 ^ 1;
  }
  if (*(char *)(lVar7 + 0x22a0) == '\x01') {
    bVar5 = (*(byte *)(lVar7 + 0x22a5) & 2) >> 1;
  }
  else {
    bVar5 = 0;
  }
  if ((lVar1 == 0 || bVar3 != 0) || (bVar5 != 0)) {
    if (lVar4 != 0 && lVar1 == 0) {
      FUN_140081404(0,2);
      iVar6 = *(int *)(lVar7 + 0x1664);
    }
    goto LAB_140081e5d;
  }
  FUN_14008135a(lVar1);
  if (((*(byte *)(lVar1 + 0x130) & 1) == 0) &&
     (((*(byte *)(lVar8 + 0x14) & 1) == 0 || ((*(byte *)(lVar8 + 0x495) & 1) != 0)))) {
    if (*(float *)(lVar8 + 0x60) <= *(float *)(lVar7 + 0xafc)) {
      if (((*(float *)(lVar8 + 100) <= *(float *)(lVar7 + 0xb00)) &&
          (*(float *)(lVar7 + 0xafc) < *(float *)(lVar8 + 0x60) + *(float *)(lVar8 + 0x70))) &&
         (*(float *)(lVar7 + 0xb00) < *(float *)(lVar8 + 100) + *(float *)(lVar8 + 0xa0)))
      goto LAB_140081e3d;
    }
    *(undefined8 *)(lVar7 + 0x1628) = 0;
  }
LAB_140081e3d:
  iVar6 = *(int *)(lVar7 + 0x1664);
  if (*(char *)(lVar7 + 0x1679) == '\x01') {
    *(undefined8 *)(lVar7 + 0x1628) = 0;
    *(int *)(lVar7 + 0x1690) = iVar6;
  }
LAB_140081e5d:
  if ((iVar6 == 0) && (cVar2 = FUN_140081ebc(1,0,0xffffffff), cVar2 != '\0')) {
    lVar4 = FUN_140081fc1();
    lVar7 = lVar4;
    if ((lVar1 != 0) &&
       ((lVar7 = lVar1, lVar4 != 0 &&
        (cVar2 = FUN_140082007(lVar1,lVar4), lVar7 = lVar4, cVar2 != '\0')))) {
      lVar7 = lVar1;
    }
    FUN_140082057(lVar7,1);
    return;
  }
  return;
}


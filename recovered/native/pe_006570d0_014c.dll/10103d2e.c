/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103d2e */

void FUN_10103d2e(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 0x1528) != 0) {
    return;
  }
  iVar5 = *(int *)(DAT_1039d74c + 0x1510);
  if ((iVar5 != 0) && (*(char *)(DAT_1039d74c + 0x1525) != '\x01')) {
    return;
  }
  iVar1 = *(int *)(DAT_1039d74c + 0x2048);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x100) != '\0')) {
    return;
  }
  iVar2 = *(int *)(DAT_1039d74c + 0x14d0);
  cVar3 = FUN_10103eee(0,0,0xffffffff);
  if (cVar3 == '\0') goto LAB_10103e99;
  if (iVar2 == 0) {
    bVar4 = 0;
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar2 + 0x3a8);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else if ((*(byte *)(iVar7 + 0xf) & 4) != 0) {
      bVar4 = FUN_10103f84(*(undefined4 *)(iVar7 + 0xc0),0x800);
      bVar4 = bVar4 ^ 1;
      goto LAB_10103dc4;
    }
    bVar4 = 0;
  }
LAB_10103dc4:
  if (*(char *)(iVar8 + 0x20d8) == '\x01') {
    bVar6 = (*(byte *)(iVar8 + 0x20dd) & 2) >> 1;
  }
  else {
    bVar6 = 0;
  }
  if ((iVar2 == 0 || bVar4 != 0) || (bVar6 != 0)) {
    if (iVar1 != 0 && iVar2 == 0) {
      FUN_101034e2(0,2);
      iVar5 = *(int *)(iVar8 + 0x1510);
    }
    goto LAB_10103e99;
  }
  FUN_10103445(iVar2);
  if (((*(byte *)(iVar2 + 0x120) & 1) == 0) &&
     (((*(byte *)(iVar7 + 0xc) & 1) == 0 || ((*(byte *)(iVar7 + 0x409) & 1) != 0)))) {
    if (*(float *)(iVar7 + 0x50) <= *(float *)(iVar8 + 0xac8)) {
      if (((*(float *)(iVar7 + 0x54) <= *(float *)(iVar8 + 0xacc)) &&
          (*(float *)(iVar8 + 0xac8) < *(float *)(iVar7 + 0x50) + *(float *)(iVar7 + 0x60))) &&
         (*(float *)(iVar8 + 0xacc) < *(float *)(iVar7 + 0x54) + *(float *)(iVar7 + 0x90)))
      goto LAB_10103e7a;
    }
    *(undefined4 *)(iVar8 + 0x14dc) = 0;
  }
LAB_10103e7a:
  iVar5 = *(int *)(iVar8 + 0x1510);
  if (*(char *)(iVar8 + 0x1525) == '\x01') {
    *(undefined4 *)(iVar8 + 0x14dc) = 0;
    *(int *)(iVar8 + 0x153c) = iVar5;
  }
LAB_10103e99:
  if ((iVar5 == 0) && (cVar3 = FUN_10103eee(1,0,0xffffffff), cVar3 != '\0')) {
    iVar5 = FUN_1010400a();
    iVar8 = iVar5;
    if ((iVar2 != 0) &&
       ((iVar8 = iVar2, iVar5 != 0 &&
        (cVar3 = FUN_10104041(iVar2,iVar5), iVar8 = iVar5, cVar3 != '\0')))) {
      iVar8 = iVar2;
    }
    FUN_10104092(iVar8,1);
  }
  return;
}


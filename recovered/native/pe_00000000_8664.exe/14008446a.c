/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008446a */

void FUN_14008446a(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  float *pfVar6;
  char *pcVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  undefined4 uVar12;
  
  lVar3 = DAT_140f2a910;
  if ((*(byte *)(DAT_140f2a910 + 0x30) & 0x40) != 0) {
    FUN_140076ac4(DAT_140f2a910 + 0x30);
  }
  uVar2 = DAT_1401c86c8;
  lVar10 = 0;
  do {
    cVar8 = *(char *)(lVar3 + 0x120 + lVar10);
    uVar12 = uVar2;
    if (cVar8 == '\0') {
      uVar12 = 0;
    }
    FUN_1400a5b12((uint)lVar10 | 0x290,cVar8,uVar12);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 5);
  FUN_1400a5b12(0x295,-(*(float *)(lVar3 + 300) != 0.0) & 1);
  FUN_1400a5b12(0x296,-(*(float *)(lVar3 + 0x128) != 0.0) & 1);
  iVar1 = *(int *)(lVar3 + 0x13c);
  uVar5 = FUN_14009227e();
  iVar4 = (int)uVar5;
  *(int *)(lVar3 + 0x13c) = iVar4;
  *(byte *)(lVar3 + 0x138) = (byte)(uVar5 >> 0xc) & 1;
  *(byte *)(lVar3 + 0x139) = (byte)(uVar5 >> 0xd) & 1;
  *(byte *)(lVar3 + 0x13a) = (byte)(uVar5 >> 0xe) & 1;
  *(char *)(lVar3 + 0x13b) = (char)(uVar5 >> 0xf);
  if (iVar1 != iVar4) {
    *(undefined8 *)(lVar3 + 0x16c8) = *(undefined8 *)(lVar3 + 0x18);
  }
  if (iVar4 != 0 && iVar1 == 0) {
    *(undefined8 *)(lVar3 + 0x16d0) = *(undefined8 *)(lVar3 + 0x18);
  }
  if ((*(byte *)(lVar3 + 0x34) & 1) == 0) {
    lVar10 = 0;
    do {
      *(undefined1 *)(lVar3 + 0x8c0 + lVar10) = 0;
      *(undefined4 *)(lVar3 + 0x8cc + lVar10) = 0;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x180);
  }
  pfVar6 = (float *)(lVar3 + 0x148);
  uVar5 = 0x200;
  uVar9 = 0xffffff69;
  do {
    fVar11 = pfVar6[-1];
    *pfVar6 = fVar11;
    if (*(char *)(pfVar6 + -2) == '\0') {
      pfVar6[-1] = -1.0;
    }
    else {
      if (0.0 <= fVar11) {
        fVar11 = fVar11 + *(float *)(lVar3 + 0x48);
        pfVar6[-1] = fVar11;
        if ((fVar11 != 0.0) || (NAN(fVar11))) goto LAB_1400845fd;
      }
      else {
        pfVar6[-1] = 0.0;
      }
      if ((uVar5 < 0x278) || (uVar9 < 4)) {
        *(undefined8 *)(lVar3 + 0x16d8) = *(undefined8 *)(lVar3 + 0x18);
      }
    }
LAB_1400845fd:
    uVar5 = uVar5 + 1;
    uVar9 = uVar9 + 1;
    pfVar6 = pfVar6 + 4;
    if (uVar5 == 0x29b) {
      pcVar7 = (char *)(lVar3 + 0x140);
      lVar10 = 0;
      do {
        *(undefined4 *)(lVar3 + 0x16f4 + lVar10) = *(undefined4 *)(lVar3 + 0x16f8 + lVar10);
        if (*pcVar7 == '\0') {
          *(undefined4 *)(lVar3 + 0x16f8 + lVar10) = 0xffffffff;
        }
        if (*(char *)(lVar3 + 0x16fd + lVar10) == '\x01') {
          cVar8 = *pcVar7;
        }
        else {
          cVar8 = '\0';
        }
        *(char *)(lVar3 + 0x16fd + lVar10) = cVar8;
        *(char *)(lVar3 + 0x16fc + lVar10) = cVar8;
        pcVar7 = pcVar7 + 0x10;
        lVar10 = lVar10 + 0xc;
      } while (lVar10 != 0x744);
      FUN_1400a5b41(lVar3 + 0x1e38);
      return;
    }
  } while( true );
}


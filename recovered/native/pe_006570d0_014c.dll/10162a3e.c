/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10162a3e */

void FUN_10162a3e(int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int *piVar8;
  char *pcVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  
  iVar6 = DAT_1039d74c;
  if (*(char *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfe) != '\0') {
    return;
  }
  iVar11 = (int)*(short *)(param_1 + 0x1da);
  if ((iVar11 < 0) || (*(int *)(param_1 + 0x40) <= iVar11)) {
    if ((param_2 & 1) != 0) goto LAB_10162ada;
  }
  else if ((param_2 & 1) != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      pbVar13 = (byte *)(*(int *)(param_1 + 0x10) + iVar11 * 0x74);
      bVar10 = 0;
      if ((*pbVar13 & 0x20) == 0) {
        bVar10 = pbVar13[0x66];
      }
      pcVar9 = "*Missing Text*";
      if (*(char **)(DAT_1039d74c + 0x2718) != (char *)0x0) {
        pcVar9 = *(char **)(DAT_1039d74c + 0x2718);
      }
      cVar7 = FUN_10131d08(pcVar9,0,0,bVar10);
      if (cVar7 != '\0') {
        FUN_10163029(param_1,iVar11);
      }
    }
LAB_10162ada:
    if ((*(short *)(param_1 + 0x1b8) == *(short *)(param_1 + 0x1b6)) &&
       ((*(uint *)(param_1 + 4) & 0xe000) != 0x4000)) {
      piVar8 = (int *)(DAT_1039d74c + 0x271c);
    }
    else {
      piVar8 = (int *)(DAT_1039d74c + 0x2720);
    }
    pcVar9 = "*Missing Text*";
    if ((char *)*piVar8 != (char *)0x0) {
      pcVar9 = (char *)*piVar8;
    }
    bVar5 = true;
    cVar7 = FUN_10131d08(pcVar9,0,0,1);
    if (cVar7 != '\0') {
      FUN_1016586f();
    }
    goto LAB_10162b48;
  }
  bVar5 = false;
LAB_10162b48:
  if ((param_2 & 2) != 0) {
    pcVar9 = "*Missing Text*";
    if (*(char **)(DAT_1039d74c + 0x2724) != (char *)0x0) {
      pcVar9 = *(char **)(DAT_1039d74c + 0x2724);
    }
    bVar5 = true;
    cVar7 = FUN_10131d08(pcVar9,0,0,*(byte *)(param_1 + 0x1f6) ^ 1);
    if (cVar7 != '\0') {
      *(undefined1 *)(param_1 + 0x1f8) = 1;
    }
  }
  if ((param_2 & 4) == 0) {
    return;
  }
  if (bVar5) {
    FUN_10132188();
  }
  if ((((*(int *)(iVar6 + 0x1528) != 0) && (*(int *)(iVar6 + 0x154c) == *(int *)(iVar6 + 0x14cc)))
      && (*(short *)(param_1 + 0x1ce) != -1)) && (*(char *)(iVar6 + 0x1538) == '\x01')) {
    FUN_101610c2();
    FUN_101610c2();
  }
  FUN_1011177d(0x10,0);
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar11 = 0;
    do {
      iVar14 = *(int *)(param_1 + 0x10);
      sVar4 = *(short *)(*(int *)(param_1 + 0x18) + iVar11 * 2);
      iVar12 = sVar4 * 0x74;
      if ((*(uint *)(iVar14 + iVar12) & 1) == 0) {
        FUN_10165174(param_1,(int)sVar4);
        iVar14 = iVar14 + iVar12;
        cVar7 = FUN_10167891();
        if (cVar7 != '\0') {
          *(byte *)(iVar14 + 0x68) = *(byte *)(iVar14 + 0x67) ^ 1;
        }
        cVar7 = FUN_1010bee1();
        if (((cVar7 != '\0') && (cVar7 = FUN_1010378f(), cVar7 != '\0')) &&
           ((*(int *)(iVar6 + 0x1548) == 1 && ((*(byte *)(param_1 + 4) & 2) != 0)))) {
          *(undefined1 *)(iVar6 + 0x1538) = 1;
          *(short *)(param_1 + 0x1ce) = sVar4;
          cVar7 = FUN_10102a1a();
          if (cVar7 == '\0') {
            fVar1 = *(float *)(iVar6 + 0xe8);
            fVar2 = *(float *)(iVar6 + 0x1e90);
            fVar3 = *(float *)(iVar6 + 0x1e98);
            uVar15 = -(uint)(fVar1 < (fVar2 + fVar3) * DAT_102b70e0);
            FUN_1026d3b0((double)((float)(~uVar15 & (uint)(fVar1 - fVar3) |
                                         (uint)(fVar2 - fVar1) & uVar15) / (fVar3 - fVar2)));
            FUN_1016107e(param_1);
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x40));
  }
  FUN_10111839();
  return;
}


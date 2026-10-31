/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019722e */

void __fastcall FUN_1019722e(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar4 = *param_1;
  uVar5 = param_1[1];
  pcVar12 = (char *)param_1[3];
  iVar6 = param_1[2];
  cVar11 = *(char *)((int)param_1 + 0x12);
  if (cVar11 == '\x01') {
    if (iVar4 != 0) {
      iVar7 = 0;
      do {
        if (uVar5 != 0) {
          cVar11 = '\0';
          uVar13 = 0;
          pcVar14 = pcVar12;
          do {
            if ((uVar13 & 7) == 0) {
              cVar11 = *pcVar14;
              pcVar14 = pcVar14 + 1;
            }
            *(uint *)(param_2 + uVar13 * 4) = -(uint)(cVar11 < '\0') | 0xffffff;
            uVar13 = uVar13 + 1;
            cVar11 = cVar11 * '\x02';
          } while (uVar5 != uVar13);
        }
        iVar7 = iVar7 + 1;
        pcVar12 = pcVar12 + iVar6;
        param_2 = param_2 + param_3 * 4;
      } while (iVar7 != iVar4);
    }
  }
  else if (cVar11 == '\x02') {
    if (iVar4 != 0) {
      iVar7 = 0;
      do {
        if (uVar5 != 0) {
          uVar13 = 0;
          do {
            *(uint *)(param_2 + uVar13 * 4) = (uint)(byte)pcVar12[uVar13] << 0x18 | 0xffffff;
            uVar13 = uVar13 + 1;
          } while (uVar5 != uVar13);
        }
        iVar7 = iVar7 + 1;
        pcVar12 = pcVar12 + iVar6;
        param_2 = param_2 + param_3 * 4;
      } while (iVar7 != iVar4);
    }
  }
  else if ((cVar11 == '\a') && (iVar4 != 0)) {
    iVar7 = 0;
    fVar17 = DAT_102b7090;
    fVar18 = DAT_102b9690;
    fVar15 = DAT_102b70e0;
    fVar16 = DAT_1028f6d0;
    do {
      if (uVar5 != 0) {
        uVar13 = 0;
        do {
          bVar1 = pcVar12[uVar13 * 4 + 3];
          fVar18 = (float)bVar1 + fVar18;
          fVar15 = ((float)(byte)pcVar12[uVar13 * 4] * fVar17) / fVar18 + fVar15;
          uVar8 = (uint)fVar15;
          bVar2 = pcVar12[uVar13 * 4 + 2];
          bVar3 = pcVar12[uVar13 * 4 + 1];
          iVar9 = FUN_1011e1bd((int)(fVar15 - fVar16) & (int)uVar8 >> 0x1f | uVar8,0xff);
          fVar16 = ((float)bVar3 * DAT_102b7090) / fVar18 + DAT_102b70e0;
          uVar8 = (uint)fVar16;
          iVar10 = FUN_1011e1bd((int)(fVar16 - DAT_1028f6d0) & (int)uVar8 >> 0x1f | uVar8,0xff);
          fVar16 = ((float)bVar2 * DAT_102b7090) / fVar18 + DAT_102b70e0;
          uVar8 = (uint)fVar16;
          uVar8 = FUN_1011e1bd((int)(fVar16 - DAT_1028f6d0) & (int)uVar8 >> 0x1f | uVar8,0xff);
          fVar18 = DAT_102b9690;
          fVar15 = DAT_102b70e0;
          fVar17 = DAT_102b7090;
          fVar16 = DAT_1028f6d0;
          *(uint *)(param_2 + uVar13 * 4) =
               uVar8 | iVar10 << 8 | iVar9 << 0x10 | (uint)bVar1 << 0x18;
          uVar13 = uVar13 + 1;
        } while (uVar5 != uVar13);
      }
      iVar7 = iVar7 + 1;
      pcVar12 = pcVar12 + iVar6;
      param_2 = param_2 + param_3 * 4;
    } while (iVar7 != iVar4);
  }
  return;
}


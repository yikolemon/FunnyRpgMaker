/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ec88 */

void FUN_18019ec88(int *param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char *pcVar15;
  char cVar16;
  char *pcVar17;
  float fVar18;
  
  fVar8 = DAT_1802df180;
  fVar7 = DAT_1802dc270;
  fVar6 = DAT_1802dbb2c;
  iVar4 = *param_1;
  uVar13 = (ulonglong)(uint)param_1[1];
  pcVar17 = *(char **)(param_1 + 4);
  uVar5 = param_1[2];
  cVar16 = *(char *)((longlong)param_1 + 0x1a);
  if (cVar16 == '\x01') {
    if (iVar4 != 0) {
      iVar12 = 0;
      do {
        if (uVar13 != 0) {
          uVar14 = 0;
          cVar16 = '\0';
          pcVar15 = pcVar17;
          do {
            if ((uVar14 & 7) == 0) {
              cVar16 = *pcVar15;
              pcVar15 = pcVar15 + 1;
            }
            *(uint *)(param_2 + uVar14 * 4) = -(uint)(cVar16 < '\0') | 0xffffff;
            uVar14 = uVar14 + 1;
            cVar16 = cVar16 * '\x02';
          } while (uVar13 != uVar14);
        }
        iVar12 = iVar12 + 1;
        pcVar17 = pcVar17 + uVar5;
        param_2 = param_2 + (param_3 & 0xffffffff) * 4;
      } while (iVar12 != iVar4);
    }
  }
  else if (cVar16 == '\x02') {
    if (iVar4 != 0) {
      iVar12 = 0;
      do {
        if (uVar13 != 0) {
          uVar14 = 0;
          do {
            *(uint *)(param_2 + uVar14 * 4) = (uint)(byte)pcVar17[uVar14] << 0x18 | 0xffffff;
            uVar14 = uVar14 + 1;
          } while (uVar13 != uVar14);
        }
        iVar12 = iVar12 + 1;
        pcVar17 = pcVar17 + uVar5;
        param_2 = param_2 + (param_3 & 0xffffffff) * 4;
      } while (iVar12 != iVar4);
    }
  }
  else if ((cVar16 == '\a') && (iVar4 != 0)) {
    iVar12 = 0;
    do {
      if (uVar13 != 0) {
        uVar14 = 0;
        do {
          iVar9 = (int)uVar14;
          bVar1 = pcVar17[iVar9 + 2];
          bVar2 = pcVar17[iVar9 + 3];
          bVar3 = pcVar17[iVar9 + 1];
          fVar18 = (float)bVar2 + fVar8;
          iVar9 = FUN_180196569((longlong)
                                (((float)(byte)pcVar17[uVar14 & 0xffffffff] * fVar7) / fVar18 +
                                fVar6),0xff);
          iVar10 = FUN_180196569((longlong)(((float)bVar3 * fVar7) / fVar18 + fVar6),0xff);
          uVar11 = FUN_180196569((longlong)(((float)bVar1 * fVar7) / fVar18 + fVar6),0xff);
          *(uint *)(param_2 + uVar14) = uVar11 | iVar10 << 8 | iVar9 << 0x10 | (uint)bVar2 << 0x18;
          uVar14 = uVar14 + 4;
        } while (uVar13 * 4 - uVar14 != 0);
      }
      iVar12 = iVar12 + 1;
      pcVar17 = pcVar17 + uVar5;
      param_2 = param_2 + (param_3 & 0xffffffff) * 4;
    } while (iVar12 != iVar4);
  }
  return;
}


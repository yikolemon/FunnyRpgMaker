/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eb1a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1407eb1a6(void)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  float fVar10;
  ulonglong uVar11;
  float *pfVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  char *pcVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar9;
  
  uVar11 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x24);
  uVar13 = *(uint *)(uVar11 + 0x44);
  uVar14 = (ulonglong)uVar13;
  uVar8 = *(uint *)(uVar11 + 0x40);
  pcVar16 = (char *)(ulonglong)uVar8;
  uVar2 = *(undefined4 *)(uVar11 + 0x38);
  pfVar12 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x2c);
  *pfVar12 = (float)*(undefined4 *)(uVar11 + 0x3c);
  pfVar12[1] = -1.0;
  *(undefined8 *)(pfVar12 + -2) = 0x1407eb1df;
  uVar4 = FUN_1407e80f8(uVar2);
  if (uVar8 < uVar13) {
    puVar7 = (uint *)(ulonglong)uVar4;
    pfVar12[4] = pfVar12[0x12] / (pfVar12[0xf] / (float)puVar7[4]);
    uVar13 = 2;
    pfVar12[6] = (float)(((uint)pfVar12[0x13] & 2) >> 1);
    fVar19 = 0.0;
    pfVar12[2] = (float)uVar8;
    pfVar12[1] = 0.0;
    *pfVar12 = 0.0;
    pfVar12[3] = (float)uVar4;
    do {
      cVar1 = *pcVar16;
      uVar8 = (uint)cVar1;
      pfVar12[7] = (float)uVar8;
      pfVar12[5] = fVar19;
      fVar15 = SUB84(pcVar16,0);
      if (cVar1 < '\0') {
        *(ulonglong *)(pfVar12 + -2) = uVar14;
        *(char **)(pfVar12 + -4) = pcVar16;
        *(ulonglong *)(pfVar12 + -6) = (ulonglong)(pfVar12 + 5) & 0xffffffff;
        pfVar12[-8] = 3.9796336;
        pfVar12[-7] = 1.4013e-45;
        iVar6 = FUN_140750fa5();
        fVar19 = pfVar12[2];
        puVar7 = (uint *)(ulonglong)(uint)*pfVar12;
        pfVar12 = (float *)(ulonglong)((int)(pfVar12 + -6) + 0xc);
        fVar10 = (float)(iVar6 + (int)fVar15);
        uVar8 = *(uint *)((longlong)pfVar12 + 0x1c);
      }
      else {
        fVar10 = (float)((int)fVar15 + 1);
      }
      uVar9 = (ulonglong)uVar8;
      if (uVar8 < 0x20) {
        if (uVar8 != 0xd) {
          if (uVar8 != 10) goto LAB_1407eb27d;
          goto LAB_1407eb3a0;
        }
      }
      else {
LAB_1407eb27d:
        if ((*puVar7 <= uVar8) ||
           (fVar18 = *(float *)((ulonglong)puVar7[2] + uVar9 * 4), fVar18 < 0.0)) {
          pfVar12[-2] = 3.97965;
          pfVar12[-1] = 1.4013e-45;
          fVar18 = (float)FUN_1407eb3ef();
          fVar19 = pfVar12[5];
          uVar9 = (ulonglong)(uint)pfVar12[7];
        }
        uVar8 = (uint)uVar9;
        if (uVar8 < 0x80) {
          puVar7 = (uint *)(ulonglong)((int)(uVar9 >> 4) * 4 + 0x103a3234);
LAB_1407eb2ce:
          uVar4 = *puVar7 >> ((char)uVar9 * '\x02' & 0x1fU) & 3;
          if (uVar4 != 0) goto LAB_1407eb2da;
          bVar17 = uVar13 != 0;
          bVar3 = *(char *)(pfVar12 + 6) == '\0';
          puVar7 = (uint *)(ulonglong)(uint)pfVar12[3];
          if (bVar17 && bVar3) {
            *pfVar12 = *pfVar12 + fVar19;
          }
          fVar5 = pfVar12[2];
          if (bVar17 && bVar3) {
            fVar5 = fVar15;
          }
          pfVar12[2] = fVar5;
          if (bVar17 && bVar3) {
            fVar19 = 0.0;
          }
          pfVar12[1] = pfVar12[1] + fVar18;
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
          puVar7 = (uint *)&DAT_103a3254;
          uVar14 = (ulonglong)(uint)pfVar12[0x11];
          if ((uVar8 & 0xfffffff0) == 0x3000) goto LAB_1407eb2ce;
LAB_1407eb2da:
          if (uVar4 == 1 || uVar13 != 1) {
            puVar7 = (uint *)(ulonglong)(uint)pfVar12[3];
            if ((((uint)pfVar12[0x13] & 2) != 0) && (uVar13 == 0)) goto LAB_1407eb309;
          }
          else {
            puVar7 = (uint *)(ulonglong)(uint)pfVar12[3];
            if (9 < uVar8 - 0x30) {
LAB_1407eb309:
              *pfVar12 = *pfVar12 + pfVar12[1] + fVar19;
              pfVar12[1] = 0.0;
              pfVar12[2] = fVar15;
              fVar19 = 0.0;
            }
          }
          fVar19 = fVar19 + fVar18;
        }
        fVar18 = pfVar12[1] + fVar19;
        uVar13 = uVar4;
        if (pfVar12[4] <= *pfVar12 + fVar18 && *pfVar12 + fVar18 != pfVar12[4]) {
          fVar19 = pfVar12[2];
          fVar10 = fVar15;
          if (fVar18 < pfVar12[4] || fVar18 == pfVar12[4]) goto LAB_1407eb3ca;
          break;
        }
      }
      pcVar16 = (char *)(ulonglong)(uint)fVar10;
    } while ((uint)fVar10 < (uint)(float)uVar14);
    fVar15 = pfVar12[0x10];
    fVar19 = fVar10;
    if (fVar10 == fVar15) {
      *(undefined8 *)(pfVar12 + -2) = *(undefined8 *)(pfVar12 + 0x11);
      *(ulonglong *)(pfVar12 + -4) = (ulonglong)(uint)fVar15;
      pfVar12[-6] = 3.9797218;
      pfVar12[-5] = 1.4013e-45;
      iVar6 = FUN_1407529d7();
      pfVar12 = (float *)(ulonglong)((int)(pfVar12 + -4) + 8);
      fVar19 = (float)(iVar6 + (int)fVar15);
    }
  }
  else {
LAB_1407eb3a0:
    fVar19 = SUB84(pcVar16,0);
  }
LAB_1407eb3ca:
  if (_DAT_150b740d6 != (*(uint *)((longlong)pfVar12 + 0x20) ^ (uint)pfVar12)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((longlong)pfVar12 + -8) = FUN_1407eb3ef;
    FUN_1408802b0(*(uint *)((longlong)pfVar12 + 0x20) ^ (uint)pfVar12);
  }
  return fVar19;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140097489 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140097489(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte bVar10;
  float fVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  longlong lVar16;
  float fVar17;
  
  lVar9 = DAT_140f2a910;
  *(undefined4 *)(DAT_140f2a910 + 0xc) = *(undefined4 *)(DAT_140f2a910 + 4);
  uVar8 = _UNK_140211458;
  uVar7 = _DAT_140211450;
  fVar6 = DAT_1402112e4;
  if (((*(byte *)(lVar9 + 0x12f5) & 4) != 0) && (1 < *(int *)(lVar9 + 0x2178))) {
    lVar16 = 1;
    do {
      puVar5 = *(undefined4 **)(*(longlong *)(lVar9 + 0x2180) + lVar16 * 8);
      iVar3 = puVar5[0x21];
      iVar4 = *(int *)(lVar9 + 4);
      iVar12 = iVar4 + -1;
      lVar13 = *(longlong *)(puVar5 + 0x1e);
      if (lVar13 == 0) {
        if (iVar12 <= iVar3) goto LAB_140097529;
LAB_140097558:
        FUN_14009778f(puVar5);
      }
      else {
        bVar10 = FUN_14008851d(lVar13);
        if ((iVar12 <= iVar3 & bVar10) == 0) goto LAB_140097558;
LAB_140097529:
        if (((iVar4 <= iVar3) && (fVar11 = (float)puVar5[4], 0.0 < fVar11)) &&
           (0.0 < (float)puVar5[5])) {
          cVar1 = *(char *)(puVar5 + 0x1c);
          if (cVar1 == '\0') {
            if ((*(byte *)(lVar9 + 0x2acd) & 8) != 0) {
              puVar15 = &DAT_140ecc340;
              if (lVar13 != 0) {
                puVar15 = *(undefined **)(lVar13 + 8);
              }
              FUN_1400772a6("[viewport] Create Platform Window %08X \'%s\'\n",*puVar5,puVar15);
            }
            (**(code **)(lVar9 + 0xcb0))(puVar5);
            if (*(code **)(lVar9 + 0xd50) != (code *)0x0) {
              (**(code **)(lVar9 + 0xd50))(puVar5);
            }
            *(int *)(lVar9 + 0x21ec) = *(int *)(lVar9 + 0x21ec) + 1;
            puVar5[0x23] = 0;
            *(undefined8 *)(puVar5 + 0x4c) = uVar7;
            *(undefined8 *)(puVar5 + 0x4e) = uVar8;
            *(undefined8 *)(puVar5 + 0x50) = *(undefined8 *)(puVar5 + 4);
            *(undefined1 *)(puVar5 + 0x1c) = 1;
            fVar11 = (float)*(undefined8 *)(puVar5 + 4);
            fVar17 = fVar6;
          }
          else {
            fVar17 = (float)puVar5[0x4c];
          }
          if ((fVar17 != (float)puVar5[2]) || (NAN(fVar17) || NAN((float)puVar5[2]))) {
LAB_1400975fa:
            if (*(char *)((longlong)puVar5 + 0x71) == '\0') {
              (**(code **)(lVar9 + 0xcc8))(puVar5,*(undefined8 *)(puVar5 + 2));
              fVar11 = (float)puVar5[4];
            }
          }
          else if (((float)puVar5[0x4d] != (float)puVar5[3]) ||
                  (NAN((float)puVar5[0x4d]) || NAN((float)puVar5[3]))) goto LAB_1400975fa;
          if (((float)puVar5[0x4e] != fVar11) || (NAN((float)puVar5[0x4e]) || NAN(fVar11))) {
LAB_140097632:
            if (*(char *)((longlong)puVar5 + 0x72) == '\0') {
              (**(code **)(lVar9 + 0xcd8))(puVar5,*(undefined8 *)(puVar5 + 4));
              fVar11 = (float)puVar5[4];
            }
          }
          else if (((float)puVar5[0x4f] != (float)puVar5[5]) ||
                  (NAN((float)puVar5[0x4f]) || NAN((float)puVar5[5]))) goto LAB_140097632;
          if (((float)puVar5[0x50] != fVar11) || (NAN((float)puVar5[0x50]) || NAN(fVar11))) {
LAB_14009766a:
            if (*(code **)(lVar9 + 0xd60) != (code *)0x0) {
              (**(code **)(lVar9 + 0xd60))(puVar5,*(undefined8 *)(puVar5 + 4));
            }
          }
          else if (((float)puVar5[0x51] != (float)puVar5[5]) ||
                  (NAN((float)puVar5[0x51]) || NAN((float)puVar5[5]))) goto LAB_14009766a;
          *(undefined8 *)(puVar5 + 0x50) = *(undefined8 *)(puVar5 + 4);
          *(undefined8 *)(puVar5 + 0x4c) = *(undefined8 *)(puVar5 + 2);
          *(undefined8 *)(puVar5 + 0x4e) = *(undefined8 *)(puVar5 + 4);
          lVar13 = FUN_140097820(*(undefined8 *)(puVar5 + 0x1e));
          if (lVar13 != 0) {
            lVar13 = *(longlong *)(lVar13 + 8);
            puVar14 = (undefined1 *)FUN_14007b050(lVar13,0);
            iVar12 = FUN_140077ff5(lVar13,(longlong)puVar14 - lVar13,0);
            if (puVar5[0x23] != iVar12) {
              uVar2 = *puVar14;
              *puVar14 = 0;
              (**(code **)(lVar9 + 0xd08))(puVar5);
              *puVar14 = uVar2;
              puVar5[0x23] = iVar12;
            }
          }
          fVar11 = (float)puVar5[0x28];
          if ((((float)puVar5[0x29] != fVar11) || (NAN((float)puVar5[0x29]) || NAN(fVar11))) &&
             (*(code **)(lVar9 + 0xd10) != (code *)0x0)) {
            (**(code **)(lVar9 + 0xd10))(puVar5);
            fVar11 = (float)puVar5[0x28];
          }
          puVar5[0x29] = fVar11;
          if (*(code **)(lVar9 + 0xd18) != (code *)0x0) {
            (**(code **)(lVar9 + 0xd18))(puVar5);
          }
          if (cVar1 == '\0') {
            if (*(int *)(lVar9 + 4) < 3) {
              *(byte *)(puVar5 + 1) = *(byte *)(puVar5 + 1) | 0x20;
            }
            (**(code **)(lVar9 + 0xcc0))(puVar5);
          }
          *(undefined2 *)((longlong)puVar5 + 0x71) = 0;
          *(undefined1 *)((longlong)puVar5 + 0x73) = 0;
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(lVar9 + 0x2178));
  }
  return;
}


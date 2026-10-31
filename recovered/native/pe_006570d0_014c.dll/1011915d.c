/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011915d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011915d(void)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  undefined *puVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  
  iVar10 = DAT_1039d74c;
  *(undefined4 *)(DAT_1039d74c + 0xc) = *(undefined4 *)(DAT_1039d74c + 4);
  if (((*(byte *)(iVar10 + 0x120d) & 4) != 0) && (1 < *(int *)(iVar10 + 0x1fe0))) {
    iVar16 = 1;
    do {
      puVar4 = *(undefined4 **)(*(int *)(iVar10 + 0x1fe8) + iVar16 * 4);
      iVar15 = puVar4[0x16];
      iVar5 = puVar4[0x18];
      iVar6 = *(int *)(iVar10 + 4);
      iVar13 = iVar6 + -1;
      if (iVar15 == 0) {
        if (iVar13 <= iVar5) goto LAB_101191c2;
LAB_101191f7:
        FUN_10119462(puVar4);
      }
      else {
        bVar11 = FUN_1010a68d();
        if ((iVar13 <= iVar5 & bVar11) == 0) goto LAB_101191f7;
LAB_101191c2:
        if (((iVar6 <= iVar5) && (fVar17 = (float)puVar4[4], 0.0 < fVar17)) &&
           (0.0 < (float)puVar4[5])) {
          cVar2 = *(char *)(puVar4 + 0x15);
          if (cVar2 == '\0') {
            if ((*(byte *)(iVar10 + 0x27b5) & 8) != 0) {
              if (iVar15 == 0) {
                puVar12 = &DAT_1033b7f1;
              }
              else {
                puVar12 = *(undefined **)(iVar15 + 4);
              }
              FUN_100f99e6("[viewport] Create Platform Window %08X \'%s\'\n",*puVar4,puVar12);
            }
            (**(code **)(iVar10 + 0xc38))(puVar4);
            if (*(code **)(iVar10 + 0xc88) != (code *)0x0) {
              (**(code **)(iVar10 + 0xc88))(puVar4);
            }
            *(int *)(iVar10 + 0x2038) = *(int *)(iVar10 + 0x2038) + 1;
            puVar4[0x1a] = 0;
            uVar9 = _UNK_102b8b7c;
            uVar8 = _UNK_102b8b78;
            uVar7 = _UNK_102b8b74;
            puVar4[0x3a] = _DAT_102b8b70;
            puVar4[0x3b] = uVar7;
            puVar4[0x3c] = uVar8;
            puVar4[0x3d] = uVar9;
            fVar17 = (float)puVar4[4];
            puVar4[0x3f] = puVar4[5];
            puVar4[0x3e] = fVar17;
            *(undefined1 *)(puVar4 + 0x15) = 1;
            fVar18 = DAT_102b89b4;
          }
          else {
            fVar18 = (float)puVar4[0x3a];
          }
          fVar1 = (float)puVar4[2];
          if ((fVar18 != fVar1) || (NAN(fVar18) || NAN(fVar1))) {
LAB_101192b9:
            if (*(char *)((int)puVar4 + 0x55) == '\0') {
              (**(code **)(iVar10 + 0xc44))(puVar4,fVar1,puVar4[3]);
              fVar17 = (float)puVar4[4];
            }
          }
          else if (((float)puVar4[0x3b] != (float)puVar4[3]) ||
                  (NAN((float)puVar4[0x3b]) || NAN((float)puVar4[3]))) goto LAB_101192b9;
          if (((float)puVar4[0x3c] != fVar17) || (NAN((float)puVar4[0x3c]) || NAN(fVar17))) {
LAB_101192fd:
            if (*(char *)((int)puVar4 + 0x56) == '\0') {
              (**(code **)(iVar10 + 0xc4c))(puVar4,fVar17,puVar4[5]);
              fVar17 = (float)puVar4[4];
            }
          }
          else if (((float)puVar4[0x3d] != (float)puVar4[5]) ||
                  (NAN((float)puVar4[0x3d]) || NAN((float)puVar4[5]))) goto LAB_101192fd;
          if (((float)puVar4[0x3e] != fVar17) || (NAN((float)puVar4[0x3e]) || NAN(fVar17))) {
LAB_10119341:
            if (*(code **)(iVar10 + 0xc90) != (code *)0x0) {
              (**(code **)(iVar10 + 0xc90))(puVar4,fVar17,puVar4[5]);
            }
          }
          else if (((float)puVar4[0x3f] != (float)puVar4[5]) ||
                  (NAN((float)puVar4[0x3f]) || NAN((float)puVar4[5]))) goto LAB_10119341;
          puVar4[0x3f] = puVar4[5];
          puVar4[0x3e] = puVar4[4];
          puVar4[0x3a] = puVar4[2];
          puVar4[0x3b] = puVar4[3];
          puVar4[0x3c] = puVar4[4];
          puVar4[0x3d] = puVar4[5];
          iVar13 = FUN_101194e2();
          if (iVar13 != 0) {
            iVar13 = *(int *)(iVar13 + 4);
            puVar14 = (undefined1 *)FUN_100fd57d(iVar13,0);
            iVar15 = FUN_100fa6c3(iVar13,(int)puVar14 - iVar13,0);
            if (puVar4[0x1a] != iVar15) {
              uVar3 = *puVar14;
              *puVar14 = 0;
              (**(code **)(iVar10 + 0xc64))(puVar4,iVar13);
              *puVar14 = uVar3;
              puVar4[0x1a] = iVar15;
            }
          }
          fVar17 = (float)puVar4[0x1f];
          if ((((float)puVar4[0x20] != fVar17) || (NAN((float)puVar4[0x20]) || NAN(fVar17))) &&
             (*(code **)(iVar10 + 0xc68) != (code *)0x0)) {
            (**(code **)(iVar10 + 0xc68))(puVar4,fVar17);
            fVar17 = (float)puVar4[0x1f];
          }
          puVar4[0x20] = fVar17;
          if (*(code **)(iVar10 + 0xc6c) != (code *)0x0) {
            (**(code **)(iVar10 + 0xc6c))(puVar4);
          }
          if (cVar2 == '\0') {
            if (*(int *)(iVar10 + 4) < 3) {
              *(byte *)(puVar4 + 1) = *(byte *)(puVar4 + 1) | 0x20;
            }
            (**(code **)(iVar10 + 0xc40))(puVar4);
          }
          *(undefined2 *)((int)puVar4 + 0x55) = 0;
          *(undefined1 *)((int)puVar4 + 0x57) = 0;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(iVar10 + 0x1fe0));
  }
  return;
}


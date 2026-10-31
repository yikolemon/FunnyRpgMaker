/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be5ec */

undefined8 FUN_1408be5ec(uint param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 unaff_RBX;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  undefined8 unaff_RSI;
  ulonglong uVar17;
  uint unaff_EDI;
  uint uVar18;
  undefined4 *puVar19;
  
  uVar17 = (ulonglong)param_1;
  bVar1 = *(byte *)(ulonglong)*(uint *)(uVar17 + 8);
  if (bVar1 < 0x65) {
    if (bVar1 == 100) {
      *(undefined4 *)(uVar17 + 0x28) = 3;
      goto LAB_1408be75d;
    }
    uVar8 = (uint)bVar1;
    if (uVar8 < 0x4a) {
      if (uVar8 == 0x49) goto LAB_1408be6e6;
      uVar8 = uVar8 - 0x41;
      if (uVar8 != 0) {
        if ((ulonglong)uVar8 == 1) {
LAB_1408be663:
          if (*(int *)(uVar17 + 0x18) == 0 && *(int *)(uVar17 + 0x1c) == 0) {
            *(undefined4 *)(uVar17 + 0x18) = 1;
            *(undefined4 *)(uVar17 + 0x1c) = 0;
          }
          FUN_1408be5cb(uVar17);
          *(undefined4 *)(uVar17 + 0x28) = 0;
          goto LAB_1408be682;
        }
        lVar10 = (ulonglong)uVar8 - 2;
        if (((lVar10 != 0) && (iVar9 = (int)lVar10, iVar9 != 1)) && (iVar9 != 2))
        goto LAB_1408be70d;
      }
    }
    else {
      if (uVar8 == 0x53) {
LAB_1408be73c:
        FUN_1408be5cb(uVar17);
        *(undefined4 *)(uVar17 + 0x28) = 1;
LAB_1408be682:
        *(int *)(uVar17 + 8) = *(int *)(uVar17 + 8) + 1;
        return 1;
      }
      if (uVar8 == 0x58) goto LAB_1408be756;
      if (uVar8 == 0x5b) {
        FUN_1408be5cb(uVar17);
        *(int *)(uVar17 + 8) = *(int *)(uVar17 + 8) + 1;
        *(undefined4 *)(uVar17 + 0x28) = 8;
        uVar16 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
        uVar13 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
        *(undefined8 *)(uVar13 - 8) = unaff_RBX;
        *(undefined8 *)(uVar13 - 0x10) = unaff_RSI;
        uVar8 = param_1 + 0x2c;
        if (uVar8 == 0) {
          *(undefined4 *)(uVar17 + 0xc) = 0xc;
          *(undefined2 *)(uVar17 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(uVar13 - 0x18) = (ulonglong)unaff_EDI;
          *(undefined8 *)(uVar13 - 0x20) = 8;
          puVar19 = (undefined4 *)(ulonglong)uVar8;
          for (lVar10 = *(longlong *)(uVar13 - 0x20); lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar19 = 0;
            puVar19 = puVar19 + 1;
          }
          uVar18 = *(uint *)(uVar17 + 8);
          cVar7 = *(char *)(ulonglong)uVar18;
          *(char *)(uVar16 - 2) = cVar7;
          cVar2 = cVar7;
          if (cVar7 == '^') {
            *(uint *)(uVar17 + 8) = uVar18;
            cVar2 = *(char *)(ulonglong)uVar18;
          }
          if (cVar2 == ']') {
            uVar18 = uVar18 + 1;
            *(uint *)(uVar17 + 8) = uVar18;
            *(byte *)(uVar17 + 0x37) = *(byte *)(uVar17 + 0x37) | 0x20;
          }
          pcVar11 = (char *)(ulonglong)uVar18;
          cVar2 = *pcVar11;
          *(undefined4 *)(uVar16 - 8) = 0;
          if (cVar2 != ']') {
            uVar12 = (ulonglong)CONCAT31((int3)(uVar8 >> 8),*pcVar11);
            pcVar6 = pcVar11;
            puVar14 = (undefined1 *)(uVar13 - 0x18);
            do {
              pcVar11 = pcVar6;
              if ((char)uVar12 == '\0') break;
              if ((((char)uVar12 == '-') &&
                  (uVar8 = (uint)pcVar11, uVar8 - 1 != *(int *)(uVar16 - 8))) && (uVar8 != uVar18))
              {
                *(uint *)(uVar16 - 0x14) = uVar8 + 1;
                bVar1 = *(byte *)(ulonglong)(uVar8 + 1);
                *(byte *)(uVar16 - 1) = bVar1;
                if (bVar1 == 0x5d) goto LAB_1408be861;
                bVar3 = pcVar11[-1];
                bVar4 = *(byte *)(uVar16 - 1);
                *(undefined4 *)(uVar16 - 8) = *(undefined4 *)(uVar16 - 0x14);
                bVar5 = bVar3;
                if (bVar3 <= bVar4) {
                  bVar5 = bVar1;
                }
                *(uint *)(uVar16 - 0x14) = (uint)(byte)(bVar5 + 1);
                if (bVar3 <= bVar4) {
                  bVar4 = bVar3;
                }
                uVar12 = 0;
                *(uint *)(uVar16 - 0xc) = (uint)bVar4;
                *(byte *)(uVar16 - 0x10) = bVar4;
                puVar15 = puVar14;
                if (bVar4 != *(byte *)(uVar16 - 0x14)) {
                  do {
                    puVar15 = puVar14 + -8;
                    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(uVar16 - 0x10);
                    *(undefined8 *)(puVar14 + -0x10) = 0x1408be84f;
                    FUN_1408be8b8(param_1 + 0x2c);
                    cVar7 = (char)*(undefined4 *)(uVar16 - 0xc) + '\x01';
                    *(uint *)(uVar16 - 0xc) =
                         CONCAT31((int3)((uint)*(undefined4 *)(uVar16 - 0xc) >> 8),cVar7);
                    *(char *)(uVar16 - 0x10) = cVar7;
                    puVar14 = puVar14 + -8;
                  } while (cVar7 != *(char *)(uVar16 - 0x14));
                }
              }
              else {
LAB_1408be861:
                puVar15 = puVar14 + -8;
                *(ulonglong *)(puVar14 + -8) = uVar12;
                *(undefined8 *)(puVar14 + -0x10) = 0x1408be86a;
                FUN_1408be8b8(param_1 + 0x2c);
              }
              uVar8 = *(uint *)(uVar17 + 8);
              pcVar11 = (char *)(ulonglong)uVar8;
              *(uint *)(uVar17 + 8) = uVar8;
              cVar7 = *(char *)(ulonglong)uVar8;
              uVar12 = CONCAT71((int7)(uVar12 >> 8),cVar7);
              pcVar6 = (char *)(ulonglong)uVar8;
              puVar14 = puVar15;
            } while (cVar7 != ']');
            cVar7 = *(char *)(uVar16 - 2);
          }
          uVar8 = param_1 + 0x2c;
          if (*pcVar11 != '\0') {
            if (cVar7 == '^') {
              while (uVar8 != param_1 + 0x4c) {
                *(byte *)(ulonglong)uVar8 = ~*(byte *)(ulonglong)uVar8;
              }
            }
            *(int *)(uVar17 + 8) = *(int *)(uVar17 + 8) + 1;
            return 1;
          }
          *(undefined2 *)(uVar17 + 0x14) = 0;
          *(undefined4 *)(uVar17 + 0xc) = 0x16;
        }
        *(undefined4 *)(uVar17 + 0x28) = 0;
        *(undefined1 *)(uVar17 + 0x24) = 0;
        *(undefined4 *)(uVar17 + 0x20) = 0;
        *(undefined4 *)(uVar17 + 0x1c) = 0;
        *(undefined4 *)(uVar17 + 0x18) = 0;
        *(undefined1 *)(uVar17 + 0x16) = 0;
        *(undefined4 *)(uVar17 + 0x10) = 0;
        return 0;
      }
      if (uVar8 != 0x61) {
        if (uVar8 != 0x62) goto LAB_1408be70d;
        goto LAB_1408be663;
      }
    }
LAB_1408be631:
    *(undefined4 *)(uVar17 + 0x28) = 7;
  }
  else {
    uVar8 = (uint)bVar1;
    if (0x6f < bVar1) {
      if (uVar8 == 0x70) {
        *(undefined4 *)(uVar17 + 0x20) = 9;
      }
      else {
        if (uVar8 - 0x73 == 0) goto LAB_1408be73c;
        lVar10 = (ulonglong)(uVar8 - 0x73) - 1;
        if (lVar10 == 0) {
          *(undefined4 *)(uVar17 + 0x28) = 5;
          goto LAB_1408be75d;
        }
        if ((int)lVar10 != 3) goto LAB_1408be70d;
      }
LAB_1408be756:
      *(undefined4 *)(uVar17 + 0x28) = 6;
      goto LAB_1408be75d;
    }
    if (bVar1 == 0x6f) {
      *(undefined4 *)(uVar17 + 0x28) = 4;
      goto LAB_1408be75d;
    }
    if (((uVar8 == 0x65) || (uVar8 == 0x66)) || (uVar8 - 0x67 == 0)) goto LAB_1408be631;
    lVar10 = (ulonglong)(uVar8 - 0x67) - 1;
    if (lVar10 != 0) {
      if ((int)lVar10 != 5) {
LAB_1408be70d:
        *(undefined4 *)(uVar17 + 0xc) = 0x16;
        *(undefined4 *)(uVar17 + 0x10) = 0;
        *(undefined2 *)(uVar17 + 0x14) = 0;
        *(undefined1 *)(uVar17 + 0x16) = 0;
        *(undefined4 *)(uVar17 + 0x18) = 0;
        *(undefined4 *)(uVar17 + 0x1c) = 0;
        *(undefined4 *)(uVar17 + 0x20) = 0;
        *(undefined1 *)(uVar17 + 0x24) = 0;
        *(undefined4 *)(uVar17 + 0x28) = 0;
        return 0;
      }
      *(undefined4 *)(uVar17 + 0x28) = 9;
      goto LAB_1408be75d;
    }
LAB_1408be6e6:
    *(undefined4 *)(uVar17 + 0x28) = 2;
  }
LAB_1408be75d:
  *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) + 1;
  return 1;
}


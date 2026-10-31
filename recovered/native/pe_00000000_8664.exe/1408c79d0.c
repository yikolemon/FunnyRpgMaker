/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c79d0 */

void FUN_1408c79d0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined8 unaff_RBX;
  code *pcVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined8 unaff_RSI;
  ulonglong uVar20;
  uint unaff_EDI;
  ulonglong uVar21;
  int unaff_R15D;
  
  uVar18 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar14 = (ulonglong)((uint)&stack0xfffffffffffffff8 - 0x118);
  iVar7 = *(int *)(uVar18 + 8);
  *(int *)(uVar18 - 0x100) = iVar7;
  *(undefined8 *)(uVar14 - 8) = unaff_RBX;
  uVar5 = *(uint *)(uVar18 + 0x14);
  pcVar13 = (code *)(ulonglong)uVar5;
  *(uint *)(uVar18 - 0xfc) = uVar5;
  *(undefined8 *)(uVar14 - 0x10) = unaff_RSI;
  uVar19 = *(uint *)(uVar18 + 0x10);
  uVar20 = (ulonglong)uVar19;
  *(uint *)(uVar18 - 0xf8) = uVar19;
  puVar15 = (undefined1 *)(uVar14 - 0x18);
  *(ulonglong *)(uVar14 - 0x18) = (ulonglong)unaff_EDI;
  uVar11 = *(uint *)(uVar18 + 0xc);
  if ((((iVar7 == 0) && (uVar11 != 0)) || (uVar19 == 0)) || (uVar5 == 0)) {
    *(undefined8 *)(uVar14 - 0x20) = 0x1408c7a13;
    puVar8 = (undefined4 *)FUN_1408c0ecd();
    *puVar8 = 0x16;
    *(undefined8 *)(uVar14 - 0x20) = 0x1408c7a1e;
    FUN_1408cbd78();
    puVar12 = (undefined1 *)(uVar14 - 0x18);
  }
  else {
    *(undefined8 *)(uVar14 - 0x20) = 0x1408c7a3e;
    FUN_1408ca320(uVar5);
    *(undefined4 *)(uVar18 - 0x114) = 0;
    puVar12 = (undefined1 *)(uVar14 - 0x18);
    if (1 < uVar11) {
      uVar9 = (ulonglong)*(uint *)(uVar18 - 0x100);
      puVar12 = (undefined1 *)(ulonglong)((uVar11 - 1) * uVar19 + *(uint *)(uVar18 - 0x100));
LAB_1408c7a5b:
      do {
        *(int *)(uVar18 - 0x108) = (int)puVar12;
LAB_1408c7a61:
        uVar5 = (uint)uVar9;
        uVar19 = (uint)(((uint)puVar12 - uVar5) / uVar20);
        iVar7 = (int)uVar20;
        if (8 < uVar19) {
          iVar6 = (uVar19 >> 1) * iVar7;
          uVar5 = uVar5 + iVar6;
          uVar21 = (ulonglong)uVar5;
          *(int *)(uVar18 - 0x10c) = iVar6;
          *(ulonglong *)(puVar15 + -8) = uVar21;
          *(undefined8 *)(puVar15 + -0x10) = *(undefined8 *)(uVar18 - 0x100);
          *(uint *)(uVar18 - 0x110) = uVar5;
          *(undefined8 *)(puVar15 + -0x18) = 0x1408c7b30;
          iVar6 = (*pcVar13)();
          uVar16 = (ulonglong)((int)(puVar15 + -0x10) + 8);
          uVar19 = *(uint *)(uVar18 - 0x100);
          uVar9 = (ulonglong)uVar19;
          if (0 < iVar6) {
            *(int *)(uVar18 - 0x104) = iVar7;
            if (uVar19 != uVar5) {
              iVar7 = *(int *)(uVar18 - 0x10c);
              do {
                puVar12 = (undefined1 *)(ulonglong)(uVar5 - iVar7);
                uVar1 = *puVar12;
                *puVar12 = *(undefined1 *)(ulonglong)uVar5;
                *(undefined1 *)(ulonglong)uVar5 = uVar1;
                unaff_R15D = unaff_R15D + -1;
              } while (unaff_R15D != 0);
              uVar21 = (ulonglong)*(uint *)(uVar18 - 0x110);
              uVar20 = (ulonglong)*(uint *)(uVar18 - 0xf8);
              uVar9 = (ulonglong)*(uint *)(uVar18 - 0x100);
            }
          }
          uVar5 = *(uint *)(uVar18 - 0x108);
          puVar12 = (undefined1 *)(ulonglong)uVar5;
          *(undefined1 **)(uVar16 - 8) = puVar12;
          *(ulonglong *)(uVar16 - 0x10) = uVar9;
          pcVar13 = *(code **)(uVar18 - 0xfc);
          *(undefined8 *)(uVar16 - 0x18) = 0x1408c7b87;
          iVar7 = (*pcVar13)();
          uVar17 = (ulonglong)((int)(uVar16 - 0x10) + 8);
          if ((0 < iVar7) && (*(uint *)(uVar18 - 0x100) != uVar5)) {
            uVar5 = *(uint *)(uVar18 - 0x100) - uVar5;
            *(uint *)(uVar18 - 0x110) = uVar5;
            do {
              uVar1 = *puVar12;
              puVar12 = (undefined1 *)(ulonglong)((int)puVar12 + 1);
              uVar2 = puVar12[(ulonglong)uVar5 - 1];
              puVar12[(ulonglong)uVar5 - 1] = uVar1;
              puVar12[-1] = uVar2;
              uVar19 = (int)uVar20 - 1;
              uVar20 = (ulonglong)uVar19;
            } while (uVar19 != 0);
            puVar12 = (undefined1 *)(ulonglong)*(uint *)(uVar18 - 0x108);
          }
          *(undefined1 **)(uVar17 - 8) = puVar12;
          *(ulonglong *)(uVar17 - 0x10) = uVar21;
          pcVar13 = *(code **)(uVar18 - 0xfc);
          *(undefined8 *)(uVar17 - 0x18) = 0x1408c7bc7;
          iVar6 = (*pcVar13)();
          iVar7 = *(int *)(uVar18 - 0xf8);
          puVar15 = (undefined1 *)(ulonglong)((int)(uVar17 - 0x10) + 8);
          if (0 < iVar6) {
            if ((int)uVar21 != (int)puVar12) {
              uVar5 = (int)uVar21 - (int)puVar12;
              *(uint *)(uVar18 - 0x110) = uVar5;
              do {
                uVar1 = *puVar12;
                puVar12 = (undefined1 *)(ulonglong)((int)puVar12 + 1);
                uVar2 = puVar12[(ulonglong)uVar5 - 1];
                puVar12[(ulonglong)uVar5 - 1] = uVar1;
                puVar12[-1] = uVar2;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              iVar7 = *(int *)(uVar18 - 0xf8);
              puVar12 = (undefined1 *)(ulonglong)*(uint *)(uVar18 - 0x108);
            }
          }
          uVar5 = *(uint *)(uVar18 - 0x100);
          *(int *)(uVar18 - 0x104) = (int)puVar12;
          do {
            uVar20 = (ulonglong)uVar5;
            uVar19 = (uint)uVar21;
            if (uVar5 < uVar19) {
              do {
                uVar5 = (int)uVar20 + iVar7;
                uVar20 = (ulonglong)uVar5;
                *(uint *)(uVar18 - 0x10c) = uVar5;
                if (uVar19 <= uVar5) goto LAB_1408c7c47;
                *(ulonglong *)(puVar15 + -8) = uVar21;
                *(ulonglong *)(puVar15 + -0x10) = uVar20;
                pcVar13 = *(code **)(uVar18 - 0xfc);
                *(undefined8 *)(puVar15 + -0x18) = 0x1408c7c38;
                iVar6 = (*pcVar13)();
                iVar7 = *(int *)(uVar18 - 0xf8);
                puVar15 = (undefined1 *)(ulonglong)((int)(puVar15 + -0x10) + 8);
              } while (iVar6 < 1);
            }
            else {
LAB_1408c7c47:
              uVar5 = *(uint *)(uVar18 - 0x108);
              do {
                uVar11 = (int)uVar20 + iVar7;
                uVar20 = (ulonglong)uVar11;
                if (uVar5 < uVar11) break;
                *(ulonglong *)(puVar15 + -8) = uVar21;
                *(ulonglong *)(puVar15 + -0x10) = uVar20;
                pcVar13 = *(code **)(uVar18 - 0xfc);
                *(undefined8 *)(puVar15 + -0x18) = 0x1408c7c5e;
                iVar6 = (*pcVar13)();
                iVar7 = *(int *)(uVar18 - 0xf8);
                puVar15 = (undefined1 *)(ulonglong)((int)(puVar15 + -0x10) + 8);
              } while (iVar6 < 1);
              puVar12 = (undefined1 *)(ulonglong)*(uint *)(uVar18 - 0x104);
              *(uint *)(uVar18 - 0x10c) = uVar11;
            }
            uVar5 = *(uint *)(uVar18 - 0xfc);
            puVar10 = puVar12;
            do {
              iVar7 = *(int *)(uVar18 - 0xf8);
              uVar11 = (int)puVar10 - iVar7;
              puVar12 = (undefined1 *)(ulonglong)uVar11;
              *(int *)(uVar18 - 0x104) = (int)puVar10;
              if (uVar11 <= uVar19) goto LAB_1408c7cab;
              *(ulonglong *)(puVar15 + -8) = uVar21;
              *(undefined1 **)(puVar15 + -0x10) = puVar12;
              *(undefined8 *)(puVar15 + -0x18) = 0x1408c7c98;
              iVar7 = (*(code *)(ulonglong)uVar5)();
              puVar15 = (undefined1 *)(ulonglong)((int)(puVar15 + -0x10) + 8);
              puVar10 = puVar12;
            } while (0 < iVar7);
            iVar7 = *(int *)(uVar18 - 0xf8);
            puVar10 = (undefined1 *)(ulonglong)*(uint *)(uVar18 - 0x104);
LAB_1408c7cab:
            uVar5 = *(uint *)(uVar18 - 0x10c);
            *(uint *)(uVar18 - 0x104) = uVar11;
            if (uVar11 < uVar5) goto LAB_1408c7d05;
            *(int *)(uVar18 - 0x118) = iVar7;
            puVar10 = (undefined1 *)(ulonglong)uVar11;
            if (uVar11 != uVar5) {
              do {
                uVar1 = *puVar10;
                puVar10 = (undefined1 *)(ulonglong)((int)puVar10 + 1);
                uVar2 = puVar10[(ulonglong)(uVar5 - uVar11) - 1];
                puVar10[(ulonglong)(uVar5 - uVar11) - 1] = uVar1;
                puVar10[-1] = uVar2;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              uVar5 = *(uint *)(uVar18 - 0x10c);
              puVar12 = (undefined1 *)(ulonglong)*(uint *)(uVar18 - 0x104);
              iVar7 = *(int *)(uVar18 - 0xf8);
            }
            uVar11 = uVar5;
            if (uVar19 != (uint)puVar12) {
              uVar11 = uVar19;
            }
            uVar21 = (ulonglong)uVar11;
          } while( true );
        }
        if (uVar5 < (uint)puVar12) {
          uVar5 = iVar7 + uVar5;
          *(uint *)(uVar18 - 0x10c) = uVar5;
          do {
            if (uVar5 <= (uint)puVar12) {
              do {
                *(ulonglong *)(puVar15 + -8) = uVar9;
                *(ulonglong *)(puVar15 + -0x10) = (ulonglong)uVar5;
                pcVar13 = *(code **)(uVar18 - 0xfc);
                *(undefined8 *)(puVar15 + -0x18) = 0x1408c7a8e;
                iVar6 = (*pcVar13)();
                puVar15 = (undefined1 *)(ulonglong)((int)(puVar15 + -0x10) + 8);
                uVar19 = uVar5;
                if (iVar6 < 1) {
                  uVar19 = (uint)uVar9;
                }
                uVar5 = uVar5 + iVar7;
                uVar9 = (ulonglong)uVar19;
                puVar12 = (undefined1 *)(ulonglong)*(uint *)(uVar18 - 0x108);
              } while (uVar5 <= *(uint *)(uVar18 - 0x108));
            }
            iVar6 = (int)puVar12;
            if ((int)uVar9 != iVar6) {
              uVar21 = (ulonglong)(uint)((int)uVar9 - iVar6);
              uVar9 = uVar20;
              do {
                uVar1 = *puVar12;
                puVar12 = (undefined1 *)(ulonglong)((int)puVar12 + 1);
                uVar2 = puVar12[uVar21 - 1];
                puVar12[uVar21 - 1] = uVar1;
                puVar12[-1] = uVar2;
                uVar5 = (int)uVar9 - 1;
                uVar9 = (ulonglong)uVar5;
              } while (uVar5 != 0);
              iVar6 = *(int *)(uVar18 - 0x108);
            }
            uVar19 = *(uint *)(uVar18 - 0x100);
            uVar9 = (ulonglong)uVar19;
            uVar11 = iVar6 - iVar7;
            puVar12 = (undefined1 *)(ulonglong)uVar11;
            uVar5 = *(uint *)(uVar18 - 0x10c);
            *(uint *)(uVar18 - 0x108) = uVar11;
          } while (uVar19 < uVar11);
LAB_1408c7ae3:
          pcVar13 = (code *)(ulonglong)*(uint *)(uVar18 - 0xfc);
        }
LAB_1408c7ae9:
        uVar5 = *(int *)(uVar18 - 0x114) - 1;
        *(uint *)(uVar18 - 0x114) = uVar5;
        puVar12 = puVar15;
        if ((int)uVar5 < 0) break;
        uVar19 = *(uint *)((uVar18 - 0x7c) + (ulonglong)uVar5 * 4);
        uVar9 = (ulonglong)uVar19;
        puVar12 = (undefined1 *)(ulonglong)*(uint *)((uVar18 - 0xf4) + (ulonglong)uVar5 * 4);
        *(uint *)(uVar18 - 0x100) = uVar19;
      } while( true );
    }
  }
  uVar5 = *(uint *)(uVar18 - 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + 0x10) = &UNK_1408c7a2b;
  FUN_1408802b0(uVar5 ^ (uint)&stack0xfffffffffffffff8);
LAB_1408c7d05:
  if (uVar19 < (uint)puVar10) {
    do {
      uVar11 = (int)puVar10 - iVar7;
      puVar10 = (undefined1 *)(ulonglong)uVar11;
      *(uint *)(uVar18 - 0x104) = uVar11;
      if (uVar11 <= uVar19) goto LAB_1408c7d39;
      *(ulonglong *)(puVar15 + -8) = uVar21;
      *(undefined1 **)(puVar15 + -0x10) = puVar10;
      pcVar13 = *(code **)(uVar18 - 0xfc);
      *(undefined8 *)(puVar15 + -0x18) = 0x1408c7d24;
      iVar6 = (*pcVar13)();
      iVar7 = *(int *)(uVar18 - 0xf8);
      puVar15 = (undefined1 *)(ulonglong)((int)(puVar15 + -0x10) + 8);
      puVar10 = (undefined1 *)(ulonglong)*(uint *)(uVar18 - 0x104);
    } while (iVar6 == 0);
  }
  else {
LAB_1408c7d39:
    uVar5 = *(uint *)(uVar18 - 0xfc);
    do {
      uVar19 = (int)puVar10 - iVar7;
      *(uint *)(uVar18 - 0x104) = uVar19;
      if (uVar19 <= *(uint *)(uVar18 - 0x100)) break;
      *(ulonglong *)(puVar15 + -8) = uVar21;
      *(ulonglong *)(puVar15 + -0x10) = (ulonglong)uVar19;
      *(undefined8 *)(puVar15 + -0x18) = 0x1408c7d54;
      iVar6 = (*(code *)(ulonglong)uVar5)();
      iVar7 = *(int *)(uVar18 - 0xf8);
      puVar15 = (undefined1 *)(ulonglong)((int)(puVar15 + -0x10) + 8);
      puVar10 = (undefined1 *)(ulonglong)*(uint *)(uVar18 - 0x104);
    } while (iVar6 == 0);
    uVar5 = *(uint *)(uVar18 - 0x10c);
  }
  uVar19 = *(uint *)(uVar18 - 0x108);
  uVar11 = *(uint *)(uVar18 - 0x104);
  uVar3 = *(uint *)(uVar18 - 0x100);
  uVar9 = (ulonglong)uVar3;
  if ((int)(uVar11 - uVar3) < (int)(uVar19 - uVar5)) {
    if (uVar5 < uVar19) {
      uVar4 = *(uint *)(uVar18 - 0x114);
      *(uint *)((uVar18 - 0x7c) + (ulonglong)uVar4 * 4) = uVar5;
      *(uint *)((uVar18 - 0xf4) + (ulonglong)uVar4 * 4) = uVar19;
      *(uint *)(uVar18 - 0x114) = uVar4;
    }
    uVar20 = (ulonglong)*(uint *)(uVar18 - 0xf8);
    if (uVar11 <= uVar3) goto LAB_1408c7ae3;
    pcVar13 = (code *)(ulonglong)*(uint *)(uVar18 - 0xfc);
    puVar12 = (undefined1 *)(ulonglong)uVar11;
    goto LAB_1408c7a5b;
  }
  if (uVar3 < uVar11) {
    uVar19 = *(uint *)(uVar18 - 0x114);
    *(uint *)((uVar18 - 0x7c) + (ulonglong)uVar19 * 4) = uVar3;
    *(uint *)((uVar18 - 0xf4) + (ulonglong)uVar19 * 4) = uVar11;
    *(uint *)(uVar18 - 0x114) = uVar19;
  }
  puVar12 = (undefined1 *)(ulonglong)*(uint *)(uVar18 - 0x108);
  pcVar13 = (code *)(ulonglong)*(uint *)(uVar18 - 0xfc);
  if (*(uint *)(uVar18 - 0x108) <= uVar5) {
    uVar20 = (ulonglong)*(uint *)(uVar18 - 0xf8);
    goto LAB_1408c7ae9;
  }
  uVar9 = (ulonglong)uVar5;
  uVar20 = (ulonglong)*(uint *)(uVar18 - 0xf8);
  *(uint *)(uVar18 - 0x100) = uVar5;
  goto LAB_1408c7a61;
}


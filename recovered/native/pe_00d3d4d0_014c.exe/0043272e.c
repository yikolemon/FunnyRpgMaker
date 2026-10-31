/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043272e */

void __fastcall FUN_0043272e(int param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  puVar2 = *(ushort **)(param_1 + 0x48 + param_2 * 0x544);
  if (puVar2 != (ushort *)0x0) {
    uVar3 = *(uint *)(param_2 * 0x544 + param_1 + 0x40);
    if (0 < *(int *)(param_1 + 0x18) && uVar3 != 0) {
      puVar13 = *(ushort **)(param_1 + 0x1c);
      puVar12 = puVar13 + *(int *)(param_1 + 0x18) * 0x14;
      uVar5 = (uint)(param_2 != 0);
      do {
        if ((uVar5 * 4 + 0x14 & (uint)*puVar13) == 0) {
          uVar1 = puVar13[uVar5 + 6];
          uVar9 = *puVar2;
          if ((short)uVar9 < (short)uVar1) {
            if ((short)uVar1 < (short)puVar2[uVar3 * 0x16 + -0x16]) {
              uVar6 = 0;
              if (uVar3 < 9) {
                puVar8 = puVar2;
                if (0 < (int)uVar3) {
                  do {
                    uVar9 = *puVar8;
                    if ((short)uVar1 <= (short)uVar9) goto LAB_00432886;
                    uVar6 = uVar6 + 1;
                    puVar8 = puVar8 + 0x16;
                  } while (uVar3 != uVar6);
                  uVar9 = puVar2[uVar3 * 0x16];
                  uVar6 = uVar3;
                }
LAB_00432886:
                if (uVar9 == uVar1) {
                  iVar7 = *(int *)(puVar2 + uVar6 * 0x16 + 4);
                  goto LAB_004328ec;
                }
              }
              else {
                uVar10 = uVar3;
                if (0 < (int)uVar3) {
                  do {
                    uVar11 = uVar10 + uVar6 >> 1;
                    if ((short)puVar2[uVar11 * 0x16] <= (short)uVar1) {
                      if ((short)uVar1 <= (short)puVar2[uVar11 * 0x16]) {
                        iVar7 = *(int *)(puVar2 + uVar11 * 0x16 + 4);
                        goto LAB_004328ec;
                      }
                      uVar6 = uVar11 + 1;
                      uVar11 = uVar10;
                    }
                    uVar10 = uVar11;
                  } while ((int)uVar6 < (int)uVar11);
                }
              }
              puVar8 = puVar2 + uVar6 * 0x16;
              iVar7 = *(int *)(puVar2 + uVar6 * 0x16 + -0xe);
              if (iVar7 == 0) {
                iVar7 = FUN_0041eaa0(*(int *)(puVar8 + 4) - *(int *)(puVar8 + -0x12),
                                     (int)(short)*puVar8 - (int)(short)puVar8[-0x16]);
                *(int *)(puVar8 + -0xe) = iVar7;
              }
              lVar4 = (longlong)((int)(short)uVar1 - (int)(short)puVar8[-0x16]) * (longlong)iVar7;
              iVar7 = (int)(lVar4 >> 0x3f);
              lVar4 = lVar4 + CONCAT44(iVar7,iVar7) + 0x8000;
              iVar7 = ((int)((ulonglong)lVar4 >> 0x20) << 0x10 | (uint)lVar4 >> 0x10) +
                      *(int *)(puVar8 + -0x12);
            }
            else {
              iVar7 = (*(int *)(puVar13 + uVar5 * 2 + 2) + *(int *)(puVar2 + uVar3 * 0x16 + -0x12))
                      - *(int *)(puVar2 + uVar3 * 0x16 + -0x14);
            }
          }
          else {
            iVar7 = (*(int *)(puVar13 + uVar5 * 2 + 2) + *(int *)(puVar2 + 4)) -
                    *(int *)(puVar2 + 2);
          }
LAB_004328ec:
          *(int *)(puVar13 + uVar5 * 2 + 8) = iVar7;
          *puVar13 = *puVar13 | (ushort)(param_2 != 0) * 4 + 4;
        }
        puVar13 = puVar13 + 0x14;
      } while (puVar13 < puVar12);
    }
  }
  return;
}


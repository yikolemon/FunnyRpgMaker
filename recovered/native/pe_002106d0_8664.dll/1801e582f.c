/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e582f */

void FUN_1801e582f(longlong param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort *puVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort *puVar12;
  ushort *puVar13;
  bool bVar14;
  
  puVar3 = *(ushort **)(param_1 + 0x60 + (ulonglong)param_2 * 0x898);
  if (puVar3 != (ushort *)0x0) {
    uVar2 = *(uint *)((ulonglong)param_2 * 0x898 + param_1 + 0x58);
    uVar11 = (ulonglong)uVar2;
    if (0 < *(int *)(param_1 + 0x1c) && uVar11 != 0) {
      puVar12 = *(ushort **)(param_1 + 0x20);
      puVar13 = puVar12 + (longlong)*(int *)(param_1 + 0x1c) * 0x18;
      bVar14 = param_2 != 0;
      do {
        if (((ushort)bVar14 * 4 + 0x14 & *puVar12) == 0) {
          uVar1 = puVar12[(ulonglong)bVar14 + 6];
          iVar4 = *(int *)((longlong)puVar12 + (ulonglong)((uint)bVar14 * 4) + 4);
          if ((short)*puVar3 < (short)uVar1) {
            if ((short)uVar1 < (short)puVar3[uVar11 * 0x24 + -0x24]) {
              if (uVar2 < 9) {
                uVar5 = 0;
                puVar7 = puVar3;
                do {
                  uVar9 = *puVar7;
                  if ((short)uVar1 <= (short)uVar9) goto LAB_1801e5924;
                  uVar5 = uVar5 + 1;
                  puVar7 = puVar7 + 0x24;
                } while (uVar11 != uVar5);
                uVar9 = puVar3[uVar11 * 0x24];
                uVar5 = uVar11;
LAB_1801e5924:
                if (uVar9 == uVar1) {
                  iVar4 = *(int *)(puVar3 + uVar5 * 0x24 + 4);
                  goto LAB_1801e59fc;
                }
              }
              else {
                uVar5 = 0;
                uVar8 = uVar11;
                do {
                  uVar10 = uVar8 + uVar5 >> 1;
                  if ((short)puVar3[uVar10 * 0x24] <= (short)uVar1) {
                    if ((short)uVar1 <= (short)puVar3[uVar10 * 0x24]) {
                      iVar4 = *(int *)(puVar3 + uVar10 * 0x24 + 4);
                      goto LAB_1801e59fc;
                    }
                    uVar5 = uVar10 + 1;
                    uVar10 = uVar8;
                  }
                  uVar8 = uVar10;
                } while ((longlong)uVar5 < (longlong)uVar10);
              }
              puVar7 = puVar3 + uVar5 * 0x24;
              iVar4 = *(int *)(puVar7 + -0x1c);
              if (iVar4 == 0) {
                iVar4 = FUN_1801cc3a4(*(int *)(puVar7 + 4) - *(int *)(puVar7 + -0x20),
                                      (int)(short)*puVar7 - (int)(short)puVar7[-0x24]);
                *(int *)(puVar7 + -0x1c) = iVar4;
              }
              lVar6 = (longlong)iVar4 * ((longlong)(short)uVar1 - (longlong)(short)puVar7[-0x24]);
              iVar4 = (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) +
                      *(int *)(puVar7 + -0x20);
            }
            else {
              iVar4 = (iVar4 + *(int *)(puVar3 + uVar11 * 0x24 + -0x20)) -
                      *(int *)(puVar3 + uVar11 * 0x24 + -0x22);
            }
          }
          else {
            iVar4 = (iVar4 + *(int *)(puVar3 + 4)) - *(int *)(puVar3 + 2);
          }
LAB_1801e59fc:
          if (param_2 == 0) {
            *(int *)(puVar12 + 8) = iVar4;
          }
          else {
            *(int *)(puVar12 + 10) = iVar4;
          }
          *puVar12 = *puVar12 | (ushort)bVar14 * 4 + 4;
        }
        puVar12 = puVar12 + 0x18;
      } while (puVar12 < puVar13);
    }
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00434d0c */

void __fastcall FUN_00434d0c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  
  uVar11 = *(uint *)(param_2 + 4 + (uint)(param_3 != 0) * 4);
  iVar1 = *(int *)(param_2 + 0xc + (uint)(param_3 != 0) * 4);
  iVar4 = param_3 * 0x204;
  iVar5 = iVar4 + param_1;
  if ((*(uint *)(iVar5 + 0x22c) != uVar11) || (*(int *)(iVar5 + 0x230) != iVar1)) {
    *(uint *)(iVar5 + 0x22c) = uVar11;
    *(int *)(iVar5 + 0x230) = iVar1;
    iVar6 = *(int *)(param_1 + 0x30c);
    if (iVar6 != 0) {
      pbVar10 = (byte *)(param_1 + 0x330);
LAB_00434d74:
      if ((*pbVar10 & 0x10) == 0) goto code_r0x00434d79;
      iVar6 = (int)((longlong)(int)uVar11 * (longlong)*(int *)(pbVar10 + -0x14) >> 0x3f);
      lVar3 = (longlong)(int)uVar11 * (longlong)*(int *)(pbVar10 + -0x14) + CONCAT44(iVar6,iVar6) +
              0x8000;
      uVar7 = *(uint *)(*(int *)(param_1 + 0x24) + 0x20);
      if (uVar7 == 0) {
        iVar6 = 0x28;
      }
      else {
        uVar19 = (uint)*(ushort *)(*(int *)(*(int *)(param_1 + 4) + 0x58) + 0xc);
        iVar6 = 0x34;
        if (uVar7 < uVar19) {
          iVar6 = 0x28;
        }
        if (uVar19 < 6) {
          iVar6 = 0x28;
        }
      }
      if (param_3 != 0) {
        uVar7 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
        uVar19 = iVar6 + uVar7 & 0xffffffc0;
        if (uVar19 != uVar7) {
          uVar7 = FUN_0041dcda(uVar11,uVar19,uVar7);
          iVar6 = *(int *)(param_1 + 0x2c);
          iVar12 = *(int *)(param_1 + 0x30c);
          if (iVar12 != 0) {
            piVar14 = (int *)(param_1 + 0x32c);
            do {
              iVar18 = piVar14[-1];
              if (piVar14[-1] < iVar6) {
                iVar18 = iVar6;
              }
              iVar6 = -*piVar14;
              if (-*piVar14 < iVar18) {
                iVar6 = iVar18;
              }
              piVar14 = piVar14 + 9;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          lVar3 = (longlong)iVar6 * (longlong)(int)(uVar7 - uVar11);
          iVar6 = (int)(lVar3 >> 0x3f);
          lVar3 = lVar3 + CONCAT44(iVar6,iVar6) + 0x8000;
          if (((int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10) + 0x7f < 0xff) {
            uVar11 = uVar7;
          }
          *(uint *)(iVar5 + 0x30) = uVar11;
          *(int *)(iVar5 + 0x34) = iVar1;
          iVar12 = 0x14;
          iVar6 = 0xc;
          goto LAB_00434e83;
        }
      }
    }
LAB_00434e66:
    *(uint *)(iVar5 + 0x30) = uVar11;
    *(int *)(iVar5 + 0x34) = iVar1;
    iVar6 = (uint)(param_3 != 0) * 4 + 8;
    iVar12 = (uint)(param_3 != 0) * 4 + 0x10;
LAB_00434e83:
    *(uint *)(param_1 + iVar6) = uVar11;
    *(int *)(param_1 + iVar12) = iVar1;
    uVar7 = *(uint *)(iVar5 + 0x38);
    iVar6 = (int)uVar11 >> 0x1f;
    if (uVar7 != 0) {
      puVar15 = (uint *)(param_1 + iVar4 + 0x44);
      uVar19 = 0;
      do {
        iVar12 = (int)((longlong)(int)uVar11 * (longlong)(int)puVar15[-2] >> 0x3f);
        lVar3 = (longlong)(int)uVar11 * (longlong)(int)puVar15[-2] + CONCAT44(iVar12,iVar12) +
                0x8000;
        uVar13 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
        puVar15[-1] = uVar13;
        *puVar15 = uVar13;
        uVar19 = uVar19 + 1;
        puVar15 = puVar15 + 3;
      } while (uVar19 < uVar7);
    }
    uVar7 = *(uint *)(iVar5 + 0x100);
    uVar19 = (uint)((ulonglong)uVar11 * (ulonglong)uVar7);
    iVar12 = uVar7 * iVar6 + (int)((ulonglong)uVar11 * (ulonglong)uVar7 >> 0x20) +
             ((int)uVar7 >> 0x1f) * uVar11;
    uVar13 = iVar12 >> 0x1f;
    uVar7 = uVar19 + uVar13;
    *(bool *)(iVar5 + 0x104) =
         (int)((uVar13 + iVar12 + (uint)CARRY4(uVar19,uVar13) + (uint)(0xffff7fff < uVar7)) *
               0x10000 | uVar7 + 0x8000 >> 0x10) < 0x28;
    if ((param_3 != 0) && (uVar7 = *(uint *)(iVar5 + 0x108), uVar7 != 0)) {
      puVar15 = (uint *)(param_1 + iVar4 + 300);
      uVar19 = 0;
      do {
        uVar13 = puVar15[-8];
        uVar8 = (uint)((ulonglong)uVar11 * (ulonglong)uVar13);
        iVar5 = iVar6 * uVar13 + (int)((ulonglong)uVar11 * (ulonglong)uVar13 >> 0x20) +
                ((int)uVar13 >> 0x1f) * uVar11;
        uVar16 = iVar5 >> 0x1f;
        uVar9 = uVar8 + uVar16;
        uVar2 = puVar15[-5];
        uVar17 = ((uVar16 + iVar5 + (uint)CARRY4(uVar8,uVar16) + (uint)(0xffff7fff < uVar9)) *
                  0x10000 | uVar9 + 0x8000 >> 0x10) + iVar1;
        puVar15[-7] = uVar17;
        uVar8 = (uint)((ulonglong)uVar11 * (ulonglong)uVar2);
        puVar15[-6] = uVar17;
        iVar5 = iVar6 * uVar2 + (int)((ulonglong)uVar11 * (ulonglong)uVar2 >> 0x20) +
                ((int)uVar2 >> 0x1f) * uVar11;
        uVar16 = iVar5 >> 0x1f;
        uVar9 = uVar8 + uVar16;
        uVar8 = ((uVar16 + iVar5 + (uint)CARRY4(uVar8,uVar16) + (uint)(0xffff7fff < uVar9)) *
                 0x10000 | uVar9 + 0x8000 >> 0x10) + iVar1;
        puVar15[-4] = uVar8;
        puVar15[-3] = uVar8;
        uVar13 = uVar13 - uVar2;
        uVar8 = (uint)((ulonglong)uVar11 * (ulonglong)uVar13);
        uVar2 = *puVar15;
        iVar5 = uVar13 * iVar6 + (int)((ulonglong)uVar11 * (ulonglong)uVar13 >> 0x20) +
                ((int)uVar13 >> 0x1f) * uVar11;
        uVar9 = iVar5 >> 0x1f;
        uVar13 = uVar8 + uVar9;
        *puVar15 = uVar2 & 0xfffffffe;
        uVar13 = (uVar9 + iVar5 + (uint)CARRY4(uVar8,uVar9) + (uint)(0xffff7fff < uVar13)) * 0x10000
                 | uVar13 + 0x8000 >> 0x10;
        if (uVar13 + 0x30 < 0x61) {
          uVar8 = -uVar13;
          if ((int)-uVar13 < 0) {
            uVar8 = uVar13;
          }
          iVar5 = (uint)(0x2f < uVar8) * 0x20 + 0x20;
          if (uVar8 < 0x20) {
            iVar5 = 0;
          }
          iVar12 = -iVar5;
          if ((int)uVar13 < 0) {
            iVar12 = iVar5;
          }
          uVar13 = uVar17 + 0x20 & 0xffffffc0;
          puVar15[-6] = uVar13;
          puVar15[-3] = uVar13 + iVar12;
          *puVar15 = uVar2 | 1;
        }
        uVar19 = uVar19 + 1;
        puVar15 = puVar15 + 9;
      } while (uVar19 < uVar7);
      uVar11 = 0;
      do {
        uVar19 = *(uint *)(param_1 + iVar4 + 300 + uVar11 * 0x24);
        if ((~uVar19 & 5) == 0) {
          iVar1 = param_1 + iVar4 + 0x10c + uVar11 * 0x24;
          uVar13 = uVar7;
          puVar15 = (uint *)(param_1 + iVar4 + 300);
          do {
            if ((((*puVar15 & 5) == 1) && ((int)puVar15[-6] <= *(int *)(iVar1 + 0x14))) &&
               (*(int *)(iVar1 + 8) <= (int)puVar15[-3])) {
              *(uint *)(iVar1 + 0x20) = uVar19 & 0xfffffffe;
              break;
            }
            puVar15 = puVar15 + 9;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar7);
    }
  }
  return;
code_r0x00434d79:
  pbVar10 = pbVar10 + 0x24;
  iVar6 = iVar6 + -1;
  if (iVar6 == 0) goto LAB_00434e66;
  goto LAB_00434d74;
}


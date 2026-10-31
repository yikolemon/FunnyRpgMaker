/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400358d1 */

void FUN_1400358d1(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  uVar10 = *(uint *)(param_2 + 8 + (ulonglong)(param_3 != 0) * 4);
  iVar3 = *(int *)(param_2 + 0x10 + (ulonglong)(param_3 != 0) * 4);
  lVar2 = (ulonglong)param_3 * 0x204;
  lVar1 = param_1 + lVar2;
  if ((*(uint *)(lVar1 + 0x240) != uVar10) || (*(int *)(lVar1 + 0x244) != iVar3)) {
    *(uint *)(lVar1 + 0x240) = uVar10;
    *(int *)(lVar1 + 0x244) = iVar3;
    if ((ulonglong)*(uint *)(param_1 + 800) != 0) {
      lVar6 = 0;
LAB_14003594d:
      if ((*(byte *)(param_1 + 0x344 + lVar6) & 0x10) == 0) goto code_r0x000140035957;
      uVar15 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x40);
      if (uVar15 == 0) {
        iVar7 = 0x28;
      }
      else {
        uVar14 = (uint)*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 0x18);
        iVar7 = 0x34;
        if (uVar15 < uVar14) {
          iVar7 = 0x28;
        }
        if (uVar14 < 6) {
          iVar7 = 0x28;
        }
      }
      if (param_3 != 0) {
        lVar6 = (longlong)*(int *)(param_1 + 0x330 + lVar6) * (longlong)(int)uVar10;
        uVar14 = (uint)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
        uVar15 = iVar7 + uVar14 & 0xffffffc0;
        if (uVar15 != uVar14) {
          uVar15 = FUN_14001de7c(uVar10,uVar15,uVar14);
          iVar7 = *(int *)(param_1 + 0x40);
          if ((ulonglong)*(uint *)(param_1 + 800) != 0) {
            lVar6 = 0;
            do {
              iVar16 = *(int *)(param_1 + 0x33c + lVar6);
              if (iVar16 < iVar7) {
                iVar16 = iVar7;
              }
              iVar7 = -*(int *)(param_1 + 0x340 + lVar6);
              if (iVar7 < iVar16) {
                iVar7 = iVar16;
              }
              lVar6 = lVar6 + 0x24;
            } while ((ulonglong)*(uint *)(param_1 + 800) * 0x24 != lVar6);
          }
          lVar6 = (longlong)(int)(uVar15 - uVar10) * (longlong)iVar7;
          if ((int)((ulonglong)((lVar6 >> 0x3f) + lVar6 + 0x8000) >> 0x10) + 0x7fU < 0xff) {
            uVar10 = uVar15;
          }
          *(uint *)(lVar1 + 0x44) = uVar10;
          *(int *)(lVar1 + 0x48) = iVar3;
          goto LAB_140035a67;
        }
      }
    }
LAB_140035a5c:
    *(uint *)(lVar1 + 0x44) = uVar10;
    *(int *)(lVar1 + 0x48) = iVar3;
    if (param_3 == 0) {
      *(uint *)(param_1 + 0x10) = uVar10;
      *(int *)(param_1 + 0x18) = iVar3;
    }
    else {
LAB_140035a67:
      *(uint *)(param_1 + 0x14) = uVar10;
      *(int *)(param_1 + 0x1c) = iVar3;
    }
    uVar15 = *(uint *)(lVar1 + 0x4c);
    lVar6 = (longlong)(int)uVar10;
    if ((ulonglong)uVar15 != 0) {
      puVar8 = (undefined4 *)(param_1 + lVar2 + 0x58);
      uVar11 = 0;
      do {
        uVar12 = (undefined4)
                 ((ulonglong)((int)puVar8[-2] * lVar6 + ((int)puVar8[-2] * lVar6 >> 0x3f) + 0x8000)
                 >> 0x10);
        puVar8[-1] = uVar12;
        *puVar8 = uVar12;
        uVar11 = uVar11 + 1;
        puVar8 = puVar8 + 3;
      } while (uVar11 < uVar15);
    }
    lVar5 = *(int *)(lVar1 + 0x114) * lVar6;
    *(bool *)(lVar1 + 0x118) = (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10) < 0x28;
    if ((param_3 != 0) && (uVar11 = (ulonglong)*(uint *)(lVar1 + 0x11c), uVar11 != 0)) {
      puVar9 = (uint *)(param_1 + lVar2 + 0x140);
      uVar13 = 0;
      do {
        lVar5 = lVar6 * (int)puVar9[-8];
        uVar14 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + iVar3;
        puVar9[-7] = uVar14;
        puVar9[-6] = uVar14;
        lVar5 = lVar6 * (int)puVar9[-5];
        uVar10 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + iVar3;
        puVar9[-4] = uVar10;
        puVar9[-3] = uVar10;
        uVar10 = *puVar9;
        *puVar9 = uVar10 & 0xfffffffe;
        lVar5 = ((longlong)(int)puVar9[-8] - (longlong)(int)puVar9[-5]) * lVar6;
        uVar15 = (uint)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
        if (uVar15 + 0x30 < 0x61) {
          uVar4 = -uVar15;
          if ((int)-uVar15 < 0) {
            uVar4 = uVar15;
          }
          iVar7 = (uint)(0x2f < uVar4) * 0x20 + 0x20;
          if (uVar4 < 0x20) {
            iVar7 = 0;
          }
          iVar16 = -iVar7;
          if ((int)uVar15 < 0) {
            iVar16 = iVar7;
          }
          uVar15 = uVar14 + 0x20 & 0xffffffc0;
          puVar9[-6] = uVar15;
          puVar9[-3] = uVar15 + iVar16;
          *puVar9 = uVar10 | 1;
        }
        uVar13 = uVar13 + 1;
        puVar9 = puVar9 + 9;
      } while (uVar13 < uVar11);
      lVar2 = param_1 + lVar2;
      uVar13 = 0;
      do {
        uVar10 = *(uint *)(lVar1 + 0x140 + uVar13 * 0x24);
        if ((~uVar10 & 5) == 0) {
          lVar6 = lVar1 + 0x120 + uVar13 * 0x24;
          lVar5 = 0;
          do {
            if ((((*(uint *)(lVar2 + 0x140 + lVar5) & 5) == 1) &&
                (*(int *)(lVar2 + 0x128 + lVar5) <= *(int *)(lVar6 + 0x14))) &&
               (*(int *)(lVar6 + 8) <= *(int *)(lVar2 + 0x134 + lVar5))) {
              *(uint *)(lVar6 + 0x20) = uVar10 & 0xfffffffe;
              break;
            }
            lVar5 = lVar5 + 0x24;
          } while (uVar11 * 0x24 != lVar5);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar11);
    }
  }
  return;
code_r0x000140035957:
  lVar6 = lVar6 + 0x24;
  if ((ulonglong)*(uint *)(param_1 + 800) * 0x24 == lVar6) goto LAB_140035a5c;
  goto LAB_14003594d;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165bf6 */

void FUN_10165bf6(int param_1)

{
  short sVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint local_24;
  int local_20;
  uint local_1c;
  
  local_20 = *(int *)(param_1 + 0x40);
  if (0 < local_20) {
    iVar10 = 0x5e;
    uVar8 = 0;
    uVar12 = 0;
    uVar7 = 0;
    iVar11 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x10);
      uVar6 = *(ushort *)(iVar2 + iVar10);
      if (uVar6 == 0xffff) {
LAB_10165c51:
        uVar6 = 0xffff;
      }
      else if (*(char *)(iVar2 + 8 + iVar10) == '\0') {
        *(undefined2 *)(iVar2 + iVar10) = 0xffff;
        local_20 = *(int *)(param_1 + 0x40);
        goto LAB_10165c51;
      }
      bVar3 = (byte)uVar6 & 0x1f;
      uVar13 = 1 << ((byte)uVar6 & 0x1f);
      uVar14 = uVar13;
      uVar4 = 0 << bVar3 | 1U >> 0x20 - bVar3;
      if ((uVar6 & 0x20) != 0) {
        uVar14 = 0;
        uVar4 = uVar13;
      }
      if (uVar6 == 0xffff) {
        uVar4 = 0;
        uVar14 = 0;
      }
      uVar7 = uVar7 | uVar4;
      uVar12 = uVar12 | uVar14;
      uVar8 = uVar8 + (uVar6 != 0xffff);
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0x74;
    } while (iVar11 < local_20);
    bVar3 = (byte)uVar8 & 0x1f;
    uVar13 = 1 << ((byte)uVar8 & 0x1f);
    bVar15 = false;
    uVar14 = uVar13;
    uVar4 = 0 << bVar3 | 1U >> 0x20 - bVar3;
    if ((uVar8 & 0x20) != 0) {
      uVar14 = 0;
      uVar4 = uVar13;
    }
    if (1 < uVar8) {
      bVar15 = (*(byte *)(param_1 + 7) & 4) == 0;
    }
    if (uVar8 != 0 &&
        !(bool)((bVar15 ^ 1U) & (uVar4 == uVar7 + (0xfffffffe < uVar12) && uVar14 == uVar12 + 1))) {
      uVar12 = 0;
      local_1c = 0;
      uVar7 = 0;
      do {
        local_24 = 0xffffffff;
        if (0 < (int)*(uint *)(param_1 + 0x40)) {
          uVar4 = 0;
          iVar10 = 0x5e;
          local_24 = 0xffffffff;
          do {
            bVar3 = (byte)uVar4 & 0x1f;
            uVar9 = 1 << ((byte)uVar4 & 0x1f);
            uVar13 = uVar9;
            uVar14 = 0 << bVar3 | 1U >> 0x20 - bVar3;
            if ((uVar4 & 0x20) != 0) {
              uVar13 = 0;
              uVar14 = uVar9;
            }
            if ((uVar13 & local_1c) == 0 && (uVar14 & uVar7) == 0) {
              sVar1 = *(short *)(*(int *)(param_1 + 0x10) + iVar10);
              if ((sVar1 != -1) &&
                 ((local_24 == 0xffffffff ||
                  (sVar1 < *(short *)(*(int *)(param_1 + 0x10) + 0x5e + local_24 * 0x74))))) {
                local_24 = uVar4;
              }
            }
            uVar4 = uVar4 + 1;
            iVar10 = iVar10 + 0x74;
          } while (*(uint *)(param_1 + 0x40) != uVar4);
        }
        *(short *)(*(int *)(param_1 + 0x10) + 0x5e + local_24 * 0x74) = (short)uVar12;
        if (bVar15) {
          iVar10 = *(int *)(param_1 + 0x40);
          if (0 < iVar10) {
            uVar8 = 0;
            iVar11 = 0x5e;
            do {
              if (local_24 != uVar8) {
                *(undefined2 *)(*(int *)(param_1 + 0x10) + iVar11) = 0xffff;
                iVar10 = *(int *)(param_1 + 0x40);
              }
              uVar8 = uVar8 + 1;
              iVar11 = iVar11 + 0x74;
            } while ((int)uVar8 < iVar10);
            uVar8 = 1;
            break;
          }
          goto LAB_10165e38;
        }
        bVar3 = (byte)local_24 & 0x1f;
        uVar12 = uVar12 + 1;
        uVar13 = 1 << ((byte)local_24 & 0x1f);
        uVar14 = uVar13;
        uVar4 = 0 << bVar3 | 1U >> 0x20 - bVar3;
        if ((local_24 & 0x20) != 0) {
          uVar14 = 0;
          uVar4 = uVar13;
        }
        uVar7 = uVar7 | uVar4;
        local_1c = local_1c | uVar14;
      } while (uVar12 != uVar8);
      goto LAB_10165e3b;
    }
    if (uVar8 != 0) goto LAB_10165e3b;
  }
  uVar8 = 0;
  if (((*(byte *)(param_1 + 7) & 8) == 0) && (iVar10 = *(int *)(param_1 + 0x40), 0 < iVar10)) {
    pbVar5 = (byte *)(*(int *)(param_1 + 0x10) + 0x72);
    do {
      if ((pbVar5[-0xc] == 1) && ((pbVar5[-0x71] & 2) == 0)) {
        pbVar5[-0xffffffff00000014] = 0;
        pbVar5[-0xffffffff00000013] = 0;
        pbVar5[-1] = pbVar5[-1] & 0xfc | *pbVar5 & 3;
LAB_10165e38:
        uVar8 = 1;
        break;
      }
      pbVar5 = pbVar5 + 0x74;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
LAB_10165e3b:
  *(short *)(param_1 + 0x1b4) = (short)uVar8;
  return;
}


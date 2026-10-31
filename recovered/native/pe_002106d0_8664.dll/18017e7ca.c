/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017e7ca */

undefined8 FUN_18017e7ca(longlong param_1,short *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)(param_1 + 0x4838) == 0) {
    if (*(int *)(param_1 + 0x4824) < 0x10) {
      FUN_18017e6a8(param_1);
    }
    if (*(int *)(param_1 + 0x483c) != 0) {
      iVar8 = *(int *)(param_1 + 0x4824);
      if (iVar8 < 1) {
        FUN_18017e6a8(param_1);
        iVar8 = *(int *)(param_1 + 0x4824);
        if (iVar8 < 1) {
          return 1;
        }
      }
      iVar9 = *(int *)(param_1 + 0x4820);
      *(int *)(param_1 + 0x4820) = iVar9 * 2;
      *(int *)(param_1 + 0x4824) = iVar8 + -1;
      if (-1 < iVar9) {
        return 1;
      }
      *param_2 = *param_2 + (short)(1 << (*(byte *)(param_1 + 0x4840) & 0x1f));
      return 1;
    }
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
    param_2[0x3c] = 0;
    param_2[0x3d] = 0;
    param_2[0x3e] = 0;
    param_2[0x3f] = 0;
    param_2[0x30] = 0;
    param_2[0x31] = 0;
    param_2[0x32] = 0;
    param_2[0x33] = 0;
    param_2[0x34] = 0;
    param_2[0x35] = 0;
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    param_2[0x28] = 0;
    param_2[0x29] = 0;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
    param_2[0x2c] = 0;
    param_2[0x2d] = 0;
    param_2[0x2e] = 0;
    param_2[0x2f] = 0;
    param_2[0x20] = 0;
    param_2[0x21] = 0;
    param_2[0x22] = 0;
    param_2[0x23] = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    if (*(int *)(param_1 + 0x4824) < 0x10) {
      FUN_18017e6a8(param_1);
    }
    uVar2 = *(uint *)(param_1 + 0x4820);
    uVar5 = (ulonglong)*(byte *)(param_3 + (ulonglong)(uVar2 >> 0x17));
    if (uVar5 == 0xff) {
      lVar1 = 0;
      do {
        lVar10 = lVar1;
        lVar1 = lVar10 + 1;
      } while (*(uint *)(param_3 + 0x62c + lVar10 * 4) <= uVar2 >> 0x10);
      iVar8 = *(int *)(param_1 + 0x4824);
      if (lVar1 == 8) {
        *(int *)(param_1 + 0x4824) = iVar8 + -0x10;
      }
      else if (((int)(lVar10 + 10) <= iVar8) &&
              (uVar11 = (uVar2 >> (0x17U - (char)lVar1 & 0x1f) &
                        *(uint *)(&UNK_1802e0d84 + lVar1 * 4)) +
                        *(int *)(param_3 + 0x670 + lVar1 * 4), uVar11 < 0x100)) {
        iVar8 = (iVar8 - (int)lVar1) + -9;
        *(int *)(param_1 + 0x4824) = iVar8;
        *(uint *)(param_1 + 0x4820) = uVar2 << ((byte)(lVar10 + 10) & 0x1f);
        uVar5 = (ulonglong)uVar11;
        goto LAB_18017e8eb;
      }
    }
    else {
      bVar6 = *(byte *)(param_3 + 0x500 + uVar5);
      iVar8 = *(int *)(param_1 + 0x4824) - (uint)bVar6;
      if ((int)(uint)bVar6 <= *(int *)(param_1 + 0x4824)) {
        *(uint *)(param_1 + 0x4820) = uVar2 << (bVar6 & 0x1f);
        *(int *)(param_1 + 0x4824) = iVar8;
LAB_18017e8eb:
        bVar6 = *(byte *)(uVar5 + param_3 + 0x400);
        if (bVar6 < 0x10) {
          iVar9 = 0;
          if (bVar6 != 0) {
            if (iVar8 < (int)(uint)bVar6) {
              FUN_18017e6a8(param_1);
              iVar8 = *(int *)(param_1 + 0x4824);
            }
            iVar9 = 0;
            if ((int)(uint)bVar6 <= iVar8) {
              uVar2 = *(uint *)(param_1 + 0x4820);
              uVar3 = uVar2 << (bVar6 & 0x1f) | uVar2 >> 0x20 - (bVar6 & 0x1f);
              uVar11 = *(uint *)(&DAT_1802e0d60 + (ulonglong)bVar6 * 4);
              *(uint *)(param_1 + 0x4820) = ~uVar11 & uVar3;
              *(uint *)(param_1 + 0x4824) = iVar8 - (uint)bVar6;
              iVar9 = 0;
              if (-1 < (int)uVar2) {
                iVar9 = *(int *)(&DAT_1802e0db0 + (ulonglong)bVar6 * 4);
              }
              iVar9 = iVar9 + (uVar3 & uVar11);
            }
          }
          iVar8 = *(int *)(param_1 + 0x46b8 + (longlong)param_4 * 0x60);
          iVar4 = FUN_18017f0cf(iVar8,iVar9);
          if (iVar4 == 0) {
            pcVar7 = "bad delta";
            goto LAB_18017e7e4;
          }
          iVar8 = iVar8 + iVar9;
          *(int *)((longlong)param_4 * 0x60 + param_1 + 0x46b8) = iVar8;
          bVar6 = (byte)*(undefined4 *)(param_1 + 0x4840);
          iVar9 = FUN_18017f0fa(iVar8,1 << (bVar6 & 0x1f));
          if (iVar9 != 0) {
            *param_2 = (short)(iVar8 << (bVar6 & 0x1f));
            return 1;
          }
        }
      }
    }
  }
  pcVar7 = "can\'t merge dc and ac";
LAB_18017e7e4:
  FUN_1801765d0(pcVar7);
  return 0;
}


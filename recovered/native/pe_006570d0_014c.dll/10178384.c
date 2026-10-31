/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10178384 */

undefined4 __fastcall FUN_10178384(int param_1,short *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0x47d4) != 0) goto LAB_10178399;
  if (*(int *)(param_1 + 0x47c0) < 0x10) {
    FUN_10178283();
  }
  if (*(int *)(param_1 + 0x47d8) != 0) {
    iVar7 = *(int *)(param_1 + 0x47c0);
    if (iVar7 < 1) {
      FUN_10178283();
      iVar7 = *(int *)(param_1 + 0x47c0);
      if (iVar7 < 1) {
        return 1;
      }
    }
    iVar4 = *(int *)(param_1 + 0x47bc);
    *(int *)(param_1 + 0x47bc) = iVar4 * 2;
    *(int *)(param_1 + 0x47c0) = iVar7 + -1;
    if (-1 < iVar4) {
      return 1;
    }
    *param_2 = *param_2 + (short)(1 << (*(byte *)(param_1 + 0x47dc) & 0x1f));
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
  if (*(int *)(param_1 + 0x47c0) < 0x10) {
    FUN_10178283();
  }
  uVar8 = *(uint *)(param_1 + 0x47bc);
  uVar9 = (uint)*(byte *)(param_3 + (uVar8 >> 0x17));
  if (uVar9 == 0xff) {
    iVar7 = 0;
    do {
      iVar4 = iVar7;
      iVar7 = iVar4 + 1;
    } while (*(uint *)(param_3 + 0x62c + iVar4 * 4) <= uVar8 >> 0x10);
    iVar6 = *(int *)(param_1 + 0x47c0);
    if (iVar7 == 8) {
      *(int *)(param_1 + 0x47c0) = iVar6 + -0x10;
      goto LAB_10178399;
    }
    if ((iVar6 < iVar4 + 10) ||
       (uVar9 = (uVar8 >> (0x17U - (char)iVar7 & 0x1f) & *(uint *)(&UNK_102bb078 + iVar7 * 4)) +
                *(int *)(param_3 + 0x670 + iVar7 * 4), 0xff < uVar9)) goto LAB_10178399;
    iVar7 = (iVar6 - iVar7) + -9;
    *(int *)(param_1 + 0x47c0) = iVar7;
    *(uint *)(param_1 + 0x47bc) = uVar8 << ((char)iVar4 + 10U & 0x1f);
  }
  else {
    bVar1 = *(byte *)(param_3 + 0x500 + uVar9);
    iVar7 = *(int *)(param_1 + 0x47c0) - (uint)bVar1;
    if (*(int *)(param_1 + 0x47c0) < (int)(uint)bVar1) goto LAB_10178399;
    *(uint *)(param_1 + 0x47bc) = uVar8 << (bVar1 & 0x1f);
    *(int *)(param_1 + 0x47c0) = iVar7;
  }
  bVar1 = *(byte *)(param_3 + 0x400 + uVar9);
  uVar8 = (uint)bVar1;
  if (uVar8 < 0x10) {
    iVar4 = 0;
    if (uVar8 != 0) {
      if (iVar7 < (int)uVar8) {
        FUN_10178283();
        iVar7 = *(int *)(param_1 + 0x47c0);
      }
      iVar4 = 0;
      if ((int)uVar8 <= iVar7) {
        uVar9 = *(uint *)(param_1 + 0x47bc);
        bVar1 = bVar1 & 0x1f;
        uVar5 = uVar9 << bVar1 | uVar9 >> 0x20 - bVar1;
        uVar2 = *(uint *)(&DAT_102bb054 + uVar8 * 4);
        *(uint *)(param_1 + 0x47bc) = ~uVar2 & uVar5;
        *(uint *)(param_1 + 0x47c0) = iVar7 - uVar8;
        iVar4 = 0;
        if (-1 < (int)uVar9) {
          iVar4 = *(int *)(&DAT_102bb098 + uVar8 * 4);
        }
        iVar4 = iVar4 + (uVar5 & uVar2);
      }
    }
    iVar7 = *(int *)(param_1 + 0x46b4 + param_4 * 0x48);
    iVar6 = FUN_10178bdc();
    if (iVar6 != 0) {
      iVar7 = iVar7 + iVar4;
      *(int *)(param_1 + param_4 * 0x48 + 0x46b4) = iVar7;
      uVar3 = *(undefined4 *)(param_1 + 0x47dc);
      iVar4 = FUN_10178c07();
      if (iVar4 != 0) {
        *param_2 = (short)(iVar7 << ((byte)uVar3 & 0x1f));
        return 1;
      }
    }
  }
LAB_10178399:
  FUN_10170e07();
  return 0;
}


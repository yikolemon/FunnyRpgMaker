/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10177ea0 */

undefined4 __fastcall
FUN_10177ea0(int param_1,short *param_2,int param_3,int param_4,int param_5,int param_6,
            short *param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  
  if ((*(int *)(param_1 + 0x47c0) < 0x10) && (FUN_10178283(), *(int *)(param_1 + 0x47c0) < 0x10)) {
    FUN_10178283();
  }
  uVar9 = *(uint *)(param_1 + 0x47bc);
  uVar12 = (uint)*(byte *)(param_3 + (uVar9 >> 0x17));
  if (uVar12 == 0xff) {
    iVar13 = 0;
    do {
      iVar10 = iVar13;
      iVar13 = iVar10 + 1;
    } while (*(uint *)(param_3 + 0x62c + iVar10 * 4) <= uVar9 >> 0x10);
    iVar6 = *(int *)(param_1 + 0x47c0);
    if (iVar13 == 8) {
LAB_1017820e:
      *(int *)(param_1 + 0x47c0) = iVar6 + -0x10;
      goto LAB_10178225;
    }
    if ((iVar6 < iVar10 + 10) ||
       (uVar12 = (uVar9 >> (0x17U - (char)iVar13 & 0x1f) & *(uint *)(&UNK_102bb078 + iVar13 * 4)) +
                 *(int *)(param_3 + 0x670 + iVar13 * 4), 0xff < uVar12)) goto LAB_10178225;
    *(int *)(param_1 + 0x47c0) = (iVar6 - iVar13) + -9;
    *(uint *)(param_1 + 0x47bc) = uVar9 << ((byte)(iVar10 + 10) & 0x1f);
  }
  else {
    bVar1 = *(byte *)(param_3 + 0x500 + uVar12);
    if (*(int *)(param_1 + 0x47c0) < (int)(uint)bVar1) goto LAB_10178225;
    *(uint *)(param_1 + 0x47bc) = uVar9 << (bVar1 & 0x1f);
    *(uint *)(param_1 + 0x47c0) = *(int *)(param_1 + 0x47c0) - (uint)bVar1;
  }
  bVar1 = *(byte *)(param_3 + 0x400 + uVar12);
  uVar9 = (uint)bVar1;
  if (uVar9 < 0x10) {
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
    iVar13 = 0;
    if (uVar9 != 0) {
      iVar10 = *(int *)(param_1 + 0x47c0);
      if (iVar10 < (int)uVar9) {
        FUN_10178283();
        iVar10 = *(int *)(param_1 + 0x47c0);
      }
      if ((int)uVar9 <= iVar10) {
        uVar12 = *(uint *)(param_1 + 0x47bc);
        bVar1 = bVar1 & 0x1f;
        uVar8 = uVar12 << bVar1 | uVar12 >> 0x20 - bVar1;
        uVar4 = *(uint *)(&DAT_102bb054 + uVar9 * 4);
        *(uint *)(param_1 + 0x47bc) = ~uVar4 & uVar8;
        *(uint *)(param_1 + 0x47c0) = iVar10 - uVar9;
        iVar13 = 0;
        if (-1 < (int)uVar12) {
          iVar13 = *(int *)(&DAT_102bb098 + uVar9 * 4);
        }
        iVar13 = iVar13 + (uVar8 & uVar4);
      }
    }
    iVar10 = *(int *)(param_1 + 0x46b4 + param_6 * 0x48);
    iVar6 = FUN_10178bdc();
    if (iVar6 != 0) {
      iVar10 = iVar10 + iVar13;
      *(int *)(param_1 + param_6 * 0x48 + 0x46b4) = iVar10;
      sVar11 = *param_7;
      iVar13 = FUN_10178c07();
      if (iVar13 != 0) {
        *param_2 = sVar11 * (short)iVar10;
        iVar13 = 1;
        do {
          if (*(int *)(param_1 + 0x47c0) < 0x10) {
            FUN_10178283();
          }
          uVar9 = *(uint *)(param_1 + 0x47bc);
          uVar12 = uVar9 >> 0x17;
          uVar3 = *(ushort *)(param_5 + uVar12 * 2);
          if (uVar3 == 0) {
            if (*(int *)(param_1 + 0x47c0) < 0x10) {
              FUN_10178283();
              uVar9 = *(uint *)(param_1 + 0x47bc);
              uVar12 = uVar9 >> 0x17;
            }
            uVar12 = (uint)*(byte *)(param_4 + uVar12);
            if (uVar12 == 0xff) {
              iVar10 = 0;
              do {
                iVar7 = iVar10;
                iVar10 = iVar7 + 1;
              } while (*(uint *)(param_4 + 0x62c + iVar7 * 4) <= uVar9 >> 0x10);
              iVar6 = *(int *)(param_1 + 0x47c0);
              if (iVar10 == 8) goto LAB_1017820e;
              if ((iVar6 < iVar7 + 10) ||
                 (uVar12 = (uVar9 >> (0x17U - (char)iVar10 & 0x1f) &
                           *(uint *)(&UNK_102bb078 + iVar10 * 4)) +
                           *(int *)(param_4 + 0x670 + iVar10 * 4), 0xff < uVar12)) break;
              iVar10 = (iVar6 - iVar10) + -9;
              *(int *)(param_1 + 0x47c0) = iVar10;
              *(uint *)(param_1 + 0x47bc) = uVar9 << ((byte)(iVar7 + 10) & 0x1f);
            }
            else {
              bVar1 = *(byte *)(param_4 + 0x500 + uVar12);
              iVar10 = *(int *)(param_1 + 0x47c0) - (uint)bVar1;
              if (*(int *)(param_1 + 0x47c0) < (int)(uint)bVar1) break;
              *(uint *)(param_1 + 0x47bc) = uVar9 << (bVar1 & 0x1f);
              *(int *)(param_1 + 0x47c0) = iVar10;
            }
            bVar1 = *(byte *)(param_4 + 0x400 + uVar12);
            uVar9 = bVar1 & 0xf;
            if ((bVar1 & 0xf) == 0) {
              if (bVar1 != 0xf0) {
                return 1;
              }
              iVar13 = iVar13 + 0x10;
            }
            else {
              bVar2 = (&DAT_102baff4)[iVar13 + (uint)(bVar1 >> 4)];
              if (iVar10 < (int)uVar9) {
                FUN_10178283();
                iVar10 = *(int *)(param_1 + 0x47c0);
              }
              sVar11 = 0;
              sVar5 = 0;
              if ((int)uVar9 <= iVar10) {
                uVar12 = *(uint *)(param_1 + 0x47bc);
                uVar8 = uVar12 << (sbyte)uVar9 | uVar12 >> 0x20 - (sbyte)uVar9;
                uVar4 = *(uint *)(&DAT_102bb054 + uVar9 * 4);
                *(uint *)(param_1 + 0x47bc) = ~uVar4 & uVar8;
                *(uint *)(param_1 + 0x47c0) = iVar10 - uVar9;
                if (-1 < (int)uVar12) {
                  sVar11 = (short)*(undefined4 *)(&DAT_102bb098 + uVar9 * 4);
                }
                sVar5 = ((ushort)uVar8 & (ushort)uVar4) + sVar11;
              }
              iVar13 = iVar13 + (uint)(bVar1 >> 4) + 1;
              param_2[bVar2] = sVar5 * param_7[bVar2];
            }
          }
          else {
            uVar12 = uVar3 & 0xf;
            if (*(int *)(param_1 + 0x47c0) < (int)uVar12) break;
            *(uint *)(param_1 + 0x47bc) = uVar9 << (sbyte)uVar12;
            uVar9 = uVar3 >> 4 & 0xf;
            *(uint *)(param_1 + 0x47c0) = *(int *)(param_1 + 0x47c0) - uVar12;
            param_2[(byte)(&DAT_102baff4)[iVar13 + uVar9]] =
                 (short)(char)(uVar3 >> 8) * param_7[(byte)(&DAT_102baff4)[iVar13 + uVar9]];
            iVar13 = uVar9 + iVar13 + 1;
          }
          if (0x3f < iVar13) {
            return 1;
          }
        } while( true );
      }
    }
  }
LAB_10178225:
  FUN_10170e07();
  return 0;
}


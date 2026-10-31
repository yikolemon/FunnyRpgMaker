/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006f9c0 */

undefined8 FUN_14006f9c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  int local_68;
  
  pbVar19 = (byte *)(param_1 + 10);
  if ((byte *)param_2[0x21] < pbVar19) {
    FUN_14001cef1(param_2,8);
  }
  uVar8 = *(uint *)(param_1 + 2);
  uVar10 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  uVar9 = (uint)*(byte *)(param_1 + 6) * 0x1000000;
  uVar8 = (uint)*(byte *)(param_1 + 7) * 0x10000;
  bVar2 = *(byte *)(param_1 + 8);
  bVar3 = *(byte *)(param_1 + 9);
  uVar12 = uVar8 + uVar9 | (uint)bVar2 << 8 | (uint)bVar3;
  if (((uVar10 < 10) || (local_68 = (int)param_1, (uint)((int)param_2[0x21] - local_68) < uVar10))
     || ((uVar10 - 10) / 0xb < uVar12)) {
    FUN_14001cef1(param_2,8);
  }
  if (uVar12 != 0) {
    uVar15 = 1;
    uVar12 = 0;
    do {
      bVar4 = *pbVar19;
      bVar5 = pbVar19[1];
      bVar6 = pbVar19[2];
      uVar13 = *(uint *)(pbVar19 + 3);
      uVar20 = *(uint *)(pbVar19 + 7);
      uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
      uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
      if ((uVar10 <= uVar13) || (uVar10 <= uVar20)) {
        FUN_14001cef1(param_2,8);
      }
      uVar21 = (uint)bVar5 << 8 | (uint)bVar4 << 0x10 | (uint)bVar6;
      if (uVar21 < uVar15) {
        FUN_14001cef1(param_2,8);
      }
      if (uVar13 != 0) {
        lVar1 = param_1 + (ulonglong)uVar13;
        uVar14 = lVar1 + 4;
        if ((ulonglong)param_2[0x21] < uVar14) {
          FUN_14001cef1(param_2,8);
        }
        uVar15 = *(uint *)((ulonglong)uVar13 + param_1);
        uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18
        ;
        if ((uint)((int)param_2[0x21] - (int)uVar14) >> 2 < uVar15) {
          FUN_14001cef1(param_2,8);
        }
        else if (uVar15 == 0) goto LAB_14006fb9e;
        uVar13 = 0;
        lVar16 = 0;
        do {
          uVar17 = (uint)*(byte *)(lVar1 + 6 + lVar16 * 4) |
                   (uint)*(byte *)(lVar1 + 5 + lVar16 * 4) << 8 |
                   (uint)*(byte *)(uVar14 + lVar16 * 4) << 0x10;
          uVar11 = *(byte *)(lVar1 + 7 + lVar16 * 4) + uVar17;
          if (0x10ffff < uVar11) {
            FUN_14001cef1(param_2,8);
          }
          if (uVar17 < uVar13) {
            FUN_14001cef1(param_2,8);
          }
          uVar13 = uVar11 + 1;
          lVar16 = lVar16 + 1;
        } while (uVar15 != (uint)lVar16);
      }
LAB_14006fb9e:
      if (uVar20 != 0) {
        pbVar18 = (byte *)(param_1 + (ulonglong)uVar20 + 4);
        if ((byte *)param_2[0x21] < pbVar18) {
          FUN_14001cef1(param_2,8);
        }
        uVar15 = *(uint *)((ulonglong)uVar20 + param_1);
        uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18
        ;
        if ((uint)((int)param_2[0x21] - (int)pbVar18) / 5 < uVar15) {
          FUN_14001cef1(param_2,8);
        }
        else if (uVar15 == 0) goto LAB_14006fc82;
        uVar13 = 0;
        do {
          bVar4 = *pbVar18;
          bVar5 = pbVar18[1];
          bVar6 = pbVar18[2];
          uVar7 = *(ushort *)(pbVar18 + 3);
          if (0x10 < bVar4) {
            FUN_14001cef1(param_2,8);
          }
          uVar20 = (uint)bVar5 << 8 | (uint)bVar4 << 0x10 | (uint)bVar6;
          if (uVar20 < uVar13) {
            FUN_14001cef1(param_2,8);
          }
          if ((0 < (int)param_2[0x22]) &&
             (*(uint *)(param_2 + 0x24) <= (uint)(ushort)(uVar7 << 8 | uVar7 >> 8))) {
            FUN_14001cef1(param_2,0x10);
          }
          uVar13 = uVar20 + 1;
          pbVar18 = pbVar18 + 5;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
LAB_14006fc82:
      pbVar19 = pbVar19 + 0xb;
      uVar15 = uVar21 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != ((uint)CONCAT11(bVar2,bVar3) | uVar9 | uVar8));
  }
  return 0;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e4dd4 */

void FUN_1400e4dd4(byte *param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  longlong lVar13;
  byte *pbVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  undefined1 auStack_b8 [39];
  char local_91;
  longlong local_90;
  byte *local_88;
  byte *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  if ((*param_1 & 4) == 0) {
    local_90 = *(longlong *)(param_1 + 0x38);
    lVar10 = *(longlong *)(param_1 + 0x2b0);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_91 = FUN_1400e2f24(0,*(undefined4 *)(lVar10 + 0xf0));
    if (local_91 == '\0') {
      uVar4 = FUN_1400e2bca(param_1,0x22,0x21,&local_78);
      *(undefined4 *)(lVar10 + 0xf0) = uVar4;
    }
    fVar3 = DAT_1401c86a0;
    pbVar14 = param_1 + 0x88;
    lVar15 = 0;
    iVar8 = 0;
    lVar10 = 0;
    lVar11 = local_90;
    local_88 = param_1;
    local_80 = pbVar14;
    cVar12 = local_91;
    do {
      uVar16 = (uint)local_78._4_2_;
      iVar9 = (int)lVar10;
      iVar5 = uVar16 - iVar9;
      uVar7 = iVar5 / 2;
      if (cVar12 == '\0') {
        iVar18 = (local_78._4_2_ - uVar7) - iVar9;
        if (*(int *)(lVar11 + 0x18) == 0) {
          uVar6 = local_78 & 0xffff;
          lVar2 = *(longlong *)(lVar11 + 0x28);
          lVar13 = (longlong)
                   (int)((((uint)local_78._2_2_ + iVar9) * *(int *)(lVar11 + 0x1c) +
                         (uint)(ushort)local_78) * *(int *)(lVar11 + 0x24));
          lVar17 = lVar2 + lVar13;
          if (1 < iVar5) {
            uVar6 = 0;
            do {
              *(undefined4 *)(lVar17 + uVar6 * 4) = 0xffffff;
              uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
          }
          if (lVar10 != 0) {
            FUN_1401c5830(lVar17 + (longlong)(int)uVar7 * 4,CONCAT71((int7)(uVar6 >> 8),0xff),
                          lVar10 * 4);
            param_1 = local_88;
            lVar11 = local_90;
            pbVar14 = local_80;
            cVar12 = local_91;
          }
          if (0 < iVar18) {
            uVar6 = 0;
            do {
              *(undefined4 *)(lVar2 + (longlong)(int)uVar7 * 4 + lVar15 + lVar13 + uVar6 * 4) =
                   0xffffff;
              uVar6 = uVar6 + 1;
            } while ((uVar16 + iVar8) - uVar7 != uVar6);
          }
        }
        else if (*(int *)(lVar11 + 0x18) == 1) {
          lVar17 = (longlong)
                   (int)((((uint)local_78._2_2_ + iVar9) * *(int *)(lVar11 + 0x1c) +
                         (uint)(ushort)local_78) * *(int *)(lVar11 + 0x24)) +
                   *(longlong *)(lVar11 + 0x28);
          if (1 < iVar5) {
            FUN_1401c5830(lVar17,0,(ulonglong)(uVar7 - 1) + 1);
            param_1 = local_88;
            lVar11 = local_90;
            cVar12 = local_91;
          }
          if (lVar10 != 0) {
            FUN_1401c5830(lVar17 + (int)uVar7,0xff,lVar10);
            param_1 = local_88;
            lVar11 = local_90;
            cVar12 = local_91;
          }
          if (0 < iVar18) {
            FUN_1401c5830(lVar17 + (int)uVar7 + lVar10,0,iVar18);
            param_1 = local_88;
            lVar11 = local_90;
            cVar12 = local_91;
          }
        }
      }
      fVar1 = *(float *)(param_1 + 0x54);
      lVar17 = lVar10 + 1;
      fVar19 = ((float)(int)(iVar9 + 1 + (uint)local_78._2_2_) * *(float *)(param_1 + 0x58) +
               (float)(int)(iVar9 + (uint)local_78._2_2_) * *(float *)(param_1 + 0x58)) * fVar3;
      lVar10 = lVar10 * 0x10;
      *(float *)(pbVar14 + lVar10) = (float)(int)((uVar7 - 1) + (uint)(ushort)local_78) * fVar1;
      *(float *)(pbVar14 + lVar10 + 4) = fVar19;
      *(float *)(pbVar14 + lVar10 + 8) =
           (float)(int)((uint)(ushort)local_78 + (int)lVar17 + uVar7) * fVar1;
      *(float *)(pbVar14 + lVar10 + 0xc) = fVar19;
      iVar8 = iVar8 + -1;
      lVar15 = lVar15 + 4;
      lVar10 = lVar17;
    } while (lVar17 != 0x21);
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_b8);
}


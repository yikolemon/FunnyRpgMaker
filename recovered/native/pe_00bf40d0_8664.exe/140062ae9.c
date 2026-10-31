/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140062ae9 */

uint FUN_140062ae9(ulonglong *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_88 [47];
  char local_59;
  ulonglong local_58;
  byte *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  pbVar11 = (byte *)*param_1;
  uVar3 = 0;
  local_50 = pbVar11;
  if (param_2 <= pbVar11) goto LAB_140062cf9;
  bVar4 = *pbVar11;
  if ((bVar4 == 0x2d) || (bVar13 = true, bVar4 == 0x2b)) {
    pbVar11 = pbVar11 + 1;
    local_50 = pbVar11;
    if (pbVar11 == param_2) goto LAB_140062cf9;
    bVar13 = bVar4 != 0x2d;
    bVar4 = *pbVar11;
    if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) goto LAB_140062cf9;
  }
  local_50 = pbVar11;
  if (bVar4 == 0x2e) {
    bVar1 = false;
    uVar12 = 0;
LAB_140062bb1:
    uVar6 = 1;
    uVar8 = 0;
    if ((local_50 < param_2) && (uVar8 = 0, *local_50 == 0x2e)) {
      pbVar11 = local_50 + 1;
      if (pbVar11 < param_2) {
        uVar8 = 0;
        uVar6 = 1;
        do {
          bVar4 = *pbVar11;
          uVar9 = (ulonglong)bVar4;
          local_50 = pbVar11;
          if ((((uVar9 < 0x21) && ((0x100003601U >> (uVar9 & 0x3f) & 1) != 0)) ||
              ((char)bVar4 < '\0')) || ((byte)(bVar4 - 0x3a) < 0xf6)) break;
          if (((int)uVar6 < 0xccccccc) && ((int)uVar8 < 0xccccccc)) {
            uVar8 = (int)(char)(&DAT_1400f9e70)[uVar9] + uVar8 * 10;
            if (param_3 < 1 || uVar12 != 0) {
              uVar6 = (ulonglong)(uint)((int)uVar6 * 10);
            }
            else {
              param_3 = param_3 + -1;
            }
          }
          pbVar11 = pbVar11 + 1;
          local_50 = param_2;
        } while (pbVar11 != param_2);
      }
      else {
        uVar6 = 1;
        uVar8 = 0;
        local_50 = pbVar11;
      }
    }
    pbVar11 = local_50 + 1;
    bVar2 = true;
    local_59 = bVar13;
    if ((pbVar11 < param_2) && ((*local_50 | 0x20) == 0x65)) {
      local_58 = uVar6;
      local_50 = pbVar11;
      uVar3 = FUN_140062df4(&local_50,param_2);
      if (pbVar11 == local_50) goto LAB_140062cf7;
      bVar2 = -0x3e9 < (int)uVar3;
      bVar13 = true;
      if ((int)uVar3 < 0x3e9) {
        bVar13 = bVar1;
      }
      bVar1 = bVar13;
      uVar10 = 0;
      if (uVar3 + 1000 < 0x7d1) {
        uVar10 = uVar3;
      }
      param_3 = param_3 + uVar10;
      uVar6 = local_58;
    }
    uVar10 = (uint)uVar6;
    *param_1 = (ulonglong)local_50;
    uVar3 = 0;
    if (uVar12 != 0 || uVar8 != 0) {
      uVar5 = 0x7fffffff;
      if (!bVar1) {
        if (!bVar2) goto LAB_140062cf9;
        if (param_3 < 1) {
          if (param_3 < 0) {
            do {
              if ((int)uVar6 < 0xccccccc) {
                uVar6 = (ulonglong)(uint)((int)uVar6 * 10);
              }
              else {
                uVar8 = (int)uVar8 / 10;
              }
              uVar10 = (uint)uVar6;
              if ((0xffffffec < uVar12 - 10) && (uVar8 == 0)) goto LAB_140062cf9;
              uVar12 = (int)uVar12 / 10;
              param_3 = param_3 + 1;
            } while (param_3 != 0);
          }
        }
        else {
          iVar7 = param_3 + 1;
          do {
            if (0xccccccb < (int)uVar12) goto LAB_140062ce9;
            if ((int)uVar8 < 0xccccccc) {
              uVar8 = uVar8 * 10;
            }
            else {
              if ((int)uVar6 == 1) goto LAB_140062ce9;
              uVar6 = (ulonglong)(uint)((int)uVar6 / 10);
            }
            uVar10 = (uint)uVar6;
            uVar12 = uVar12 * 10;
            iVar7 = iVar7 + -1;
          } while (1 < iVar7);
        }
        uVar5 = uVar12;
        if (uVar8 != 0) {
          iVar7 = FUN_14001ecff(uVar8,uVar10);
          uVar5 = iVar7 + uVar5;
        }
      }
LAB_140062ce9:
      uVar3 = -uVar5;
      if (local_59 != '\0') {
        uVar3 = uVar5;
      }
    }
  }
  else {
    uVar3 = FUN_140062df4(&local_50,param_2);
    if (local_50 != pbVar11) {
      bVar1 = 0x7fff < (int)uVar3;
      uVar12 = uVar3 << 0x10;
      if (0x7fff < (int)uVar3) {
        uVar12 = uVar3;
      }
      goto LAB_140062bb1;
    }
LAB_140062cf7:
    uVar3 = 0;
  }
LAB_140062cf9:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_88);
  }
  return uVar3;
}


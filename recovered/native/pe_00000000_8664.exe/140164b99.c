/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140164b99 */

int FUN_140164b99(ulonglong *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_88 [47];
  char local_59;
  ulonglong local_58;
  byte *local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  pbVar9 = (byte *)*param_1;
  iVar3 = 0;
  local_50 = pbVar9;
  if (param_2 <= pbVar9) goto LAB_140164da9;
  bVar4 = *pbVar9;
  if ((bVar4 == 0x2d) || (bVar11 = true, bVar4 == 0x2b)) {
    pbVar9 = pbVar9 + 1;
    local_50 = pbVar9;
    if (pbVar9 == param_2) goto LAB_140164da9;
    bVar11 = bVar4 != 0x2d;
    bVar4 = *pbVar9;
    if ((bVar4 == 0x2b) || (iVar3 = 0, bVar4 == 0x2d)) goto LAB_140164da9;
  }
  local_50 = pbVar9;
  if (bVar4 == 0x2e) {
    bVar1 = false;
    iVar10 = 0;
LAB_140164c61:
    uVar6 = 1;
    iVar7 = 0;
    if ((local_50 < param_2) && (iVar7 = 0, *local_50 == 0x2e)) {
      pbVar9 = local_50 + 1;
      if (pbVar9 < param_2) {
        iVar7 = 0;
        uVar6 = 1;
        do {
          bVar4 = *pbVar9;
          uVar8 = (ulonglong)bVar4;
          local_50 = pbVar9;
          if ((((uVar8 < 0x21) && ((0x100003601U >> (uVar8 & 0x3f) & 1) != 0)) ||
              ((char)bVar4 < '\0')) || ((byte)(bVar4 - 0x3a) < 0xf6)) break;
          if (((int)uVar6 < 0xccccccc) && (iVar7 < 0xccccccc)) {
            iVar7 = (int)(char)(&DAT_140ea10b0)[uVar8] + iVar7 * 10;
            if (param_3 < 1 || iVar10 != 0) {
              uVar6 = (ulonglong)(uint)((int)uVar6 * 10);
            }
            else {
              param_3 = param_3 + -1;
            }
          }
          pbVar9 = pbVar9 + 1;
          local_50 = param_2;
        } while (pbVar9 != param_2);
      }
      else {
        uVar6 = 1;
        iVar7 = 0;
        local_50 = pbVar9;
      }
    }
    pbVar9 = local_50 + 1;
    bVar2 = true;
    local_59 = bVar11;
    if ((pbVar9 < param_2) && ((*local_50 | 0x20) == 0x65)) {
      local_58 = uVar6;
      local_50 = pbVar9;
      iVar3 = FUN_140164ea4(&local_50,param_2);
      if (pbVar9 == local_50) goto LAB_140164da7;
      bVar2 = -0x3e9 < iVar3;
      bVar11 = true;
      if (iVar3 < 0x3e9) {
        bVar11 = bVar1;
      }
      bVar1 = bVar11;
      iVar5 = 0;
      if (iVar3 + 1000U < 0x7d1) {
        iVar5 = iVar3;
      }
      param_3 = param_3 + iVar5;
      uVar6 = local_58;
    }
    *param_1 = (ulonglong)local_50;
    iVar3 = 0;
    if (iVar10 != 0 || iVar7 != 0) {
      iVar5 = 0x7fffffff;
      if (!bVar1) {
        if (!bVar2) goto LAB_140164da9;
        if (param_3 < 1) {
          if (param_3 < 0) {
            do {
              if ((int)uVar6 < 0xccccccc) {
                uVar6 = (ulonglong)(uint)((int)uVar6 * 10);
              }
              else {
                iVar7 = iVar7 / 10;
              }
              if ((0xffffffec < iVar10 - 10U) && (iVar7 == 0)) goto LAB_140164da9;
              iVar10 = iVar10 / 10;
              param_3 = param_3 + 1;
            } while (param_3 != 0);
          }
        }
        else {
          param_3 = param_3 + 1;
          do {
            if (0xccccccb < iVar10) goto LAB_140164d99;
            if (iVar7 < 0xccccccc) {
              iVar7 = iVar7 * 10;
            }
            else {
              if ((int)uVar6 == 1) goto LAB_140164d99;
              uVar6 = (ulonglong)(uint)((int)uVar6 / 10);
            }
            iVar10 = iVar10 * 10;
            param_3 = param_3 + -1;
          } while (1 < param_3);
        }
        iVar5 = iVar10;
        if (iVar7 != 0) {
          iVar3 = FUN_14012b378(iVar7);
          iVar5 = iVar3 + iVar5;
        }
      }
LAB_140164d99:
      iVar3 = -iVar5;
      if (local_59 != '\0') {
        iVar3 = iVar5;
      }
    }
  }
  else {
    iVar3 = FUN_140164ea4(&local_50,param_2);
    if (local_50 != pbVar9) {
      bVar1 = 0x7fff < iVar3;
      iVar10 = iVar3 << 0x10;
      if (0x7fff < iVar3) {
        iVar10 = iVar3;
      }
      goto LAB_140164c61;
    }
LAB_140164da7:
    iVar3 = 0;
  }
LAB_140164da9:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar3;
}


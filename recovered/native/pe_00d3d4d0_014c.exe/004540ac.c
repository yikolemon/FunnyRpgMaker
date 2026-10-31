/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004540ac */

void __fastcall
FUN_004540ac(byte *param_1,byte *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6,
            uint *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint local_14;
  
  uVar3 = *param_4;
  uVar10 = uVar3 & 1;
  iVar11 = uVar10 + 5;
  if ((uVar3 & 2) == 0) {
    iVar11 = uVar10 + 4;
  }
  iVar11 = iVar11 + (uint)((uVar3 >> 2 & 1) != 0);
  local_14 = param_3;
  if ((uVar3 & 0x40) == 0) {
    uVar2 = uVar3 | 0x80;
    *param_4 = uVar2;
    if (param_2 < param_1 + iVar11 * param_3) {
      uVar2 = uVar3 & 0xffffff3f;
    }
    else if (iVar11 * param_3 != 0) {
      pbVar4 = param_1;
      uVar7 = 0xffffffff;
      do {
        uVar9 = (uint)*pbVar4;
        if (uVar10 != 0) {
          uVar9 = (uint)CONCAT11(*pbVar4,pbVar4[1]);
        }
        if ((int)uVar9 <= (int)uVar7) {
          uVar2 = uVar3 & 0xffffff3f;
          break;
        }
        pbVar4 = pbVar4 + iVar11;
        uVar7 = uVar9;
      } while (pbVar4 < param_1 + iVar11 * param_3);
    }
    uVar3 = uVar2 | 0x40;
    *param_4 = uVar3;
  }
  if (param_3 != 0 && (char)uVar3 < '\0') {
    uVar7 = param_3 >> 1;
    uVar2 = 0;
    do {
      iVar8 = uVar7 * iVar11;
      uVar9 = (uint)param_1[iVar8];
      if (uVar10 == 0) {
        iVar1 = iVar8 + 1;
      }
      else {
        iVar1 = iVar8 + 2;
        uVar9 = (uint)CONCAT11(param_1[iVar8],param_1[iVar8 + 1]);
      }
      pbVar4 = param_1 + iVar1;
      uVar12 = uVar7;
      if (uVar9 <= param_5) {
        if (param_5 - uVar9 == 0) {
          uVar10 = (uint)*pbVar4;
          if ((uVar3 & 2) == 0) {
            pbVar5 = pbVar4 + 1;
          }
          else {
            pbVar5 = pbVar4 + 2;
            uVar10 = (uint)CONCAT11(*pbVar4,pbVar4[1]);
          }
          *param_7 = uVar10;
          uVar3 = (uint)pbVar5[1];
          if ((*param_4 & 4) == 0) {
            uVar10 = (uint)*pbVar5 << 8;
          }
          else {
            uVar3 = uVar3 << 8 | (uint)*pbVar5 << 0x10;
            uVar10 = (uint)pbVar5[2];
          }
          uVar10 = uVar10 | uVar3;
          goto LAB_004541cf;
        }
        uVar2 = uVar7 + 1;
        uVar12 = local_14;
      }
      uVar6 = (param_5 - uVar9) + uVar7;
      uVar9 = (uVar12 - uVar2 >> 1) + uVar2;
      uVar7 = uVar6;
      if (uVar6 < uVar2) {
        uVar7 = uVar9;
      }
      if (uVar12 <= uVar6) {
        uVar7 = uVar9;
      }
      local_14 = uVar12;
    } while (uVar2 < uVar12);
  }
  *param_7 = 0;
  uVar10 = 0;
LAB_004541cf:
  *param_6 = uVar10;
  return;
}


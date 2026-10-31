/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400576eb */

void FUN_1400576eb(byte *param_1,byte *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6
                  ,uint *param_7)

{
  longlong lVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar7 = *param_4;
  uVar2 = uVar7 & 1;
  iVar9 = uVar2 + 5;
  if ((uVar7 & 2) == 0) {
    iVar9 = uVar2 + 4;
  }
  uVar10 = iVar9 + (uint)((uVar7 >> 2 & 1) != 0);
  if ((uVar7 & 0x40) == 0) {
    uVar6 = uVar7 | 0x80;
    *param_4 = uVar6;
    if (param_2 < param_1 + uVar10 * param_3) {
LAB_14005773a:
      uVar6 = uVar7 & 0xffffff3f;
    }
    else if (uVar10 * param_3 != 0) {
      pbVar3 = param_1;
      uVar5 = 0xffffffff;
      do {
        uVar8 = (uint)*pbVar3;
        if (uVar2 != 0) {
          uVar8 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
        }
        if ((int)uVar8 <= (int)uVar5) goto LAB_14005773a;
        pbVar3 = pbVar3 + uVar10;
        uVar5 = uVar8;
      } while (pbVar3 < param_1 + uVar10 * param_3);
    }
    uVar7 = uVar6 | 0x40;
    *param_4 = uVar7;
  }
  if (param_3 != 0 && (char)uVar7 < '\0') {
    uVar6 = param_3 >> 1;
    uVar5 = 0;
    do {
      uVar12 = (ulonglong)(uVar6 * uVar10);
      uVar8 = (uint)param_1[uVar12];
      if (uVar2 == 0) {
        lVar1 = uVar12 + 1;
      }
      else {
        lVar1 = uVar12 + 2;
        uVar8 = (uint)CONCAT11(param_1[uVar12],param_1[uVar12 + 1]);
      }
      pbVar3 = param_1 + lVar1;
      uVar11 = uVar6;
      if (uVar8 <= param_5) {
        if (param_5 - uVar8 == 0) {
          uVar2 = (uint)*pbVar3;
          if ((uVar7 & 2) == 0) {
            pbVar4 = pbVar3 + 1;
          }
          else {
            pbVar4 = pbVar3 + 2;
            uVar2 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
          }
          *param_7 = uVar2;
          uVar7 = (uint)pbVar4[1];
          if ((*param_4 & 4) == 0) {
            uVar2 = (uint)*pbVar4 << 8;
          }
          else {
            uVar7 = (uint)pbVar4[1] << 8 | (uint)*pbVar4 << 0x10;
            uVar2 = (uint)pbVar4[2];
          }
          uVar2 = uVar2 | uVar7;
          goto LAB_140057817;
        }
        uVar5 = uVar6 + 1;
        uVar11 = param_3;
      }
      param_3 = uVar11;
      uVar11 = (param_5 - uVar8) + uVar6;
      uVar8 = (param_3 - uVar5 >> 1) + uVar5;
      uVar6 = uVar11;
      if (uVar11 < uVar5) {
        uVar6 = uVar8;
      }
      if (param_3 <= uVar11) {
        uVar6 = uVar8;
      }
    } while (uVar5 < param_3);
  }
  *param_7 = 0;
  uVar2 = 0;
LAB_140057817:
  *param_6 = uVar2;
  return;
}


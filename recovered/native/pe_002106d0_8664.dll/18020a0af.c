/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020a0af */

void FUN_18020a0af(byte *param_1,byte *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6
                  ,uint *param_7)

{
  longlong lVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar6 = *param_4;
  uVar2 = uVar6 & 1;
  iVar8 = uVar2 + 5;
  if ((uVar6 & 2) == 0) {
    iVar8 = uVar2 + 4;
  }
  uVar9 = iVar8 + (uint)((uVar6 >> 2 & 1) != 0);
  if ((uVar6 & 0x40) == 0) {
    uVar5 = uVar6 | 0x80;
    *param_4 = uVar5;
    if (param_2 < param_1 + uVar9 * param_3) {
LAB_18020a0fe:
      uVar5 = uVar6 & 0xffffff3f;
    }
    else if (uVar9 * param_3 != 0) {
      pbVar3 = param_1;
      uVar10 = 0xffffffff;
      do {
        uVar7 = (uint)*pbVar3;
        if (uVar2 != 0) {
          uVar7 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
        }
        if ((int)uVar7 <= (int)uVar10) goto LAB_18020a0fe;
        pbVar3 = pbVar3 + uVar9;
        uVar10 = uVar7;
      } while (pbVar3 < param_1 + uVar9 * param_3);
    }
    uVar6 = uVar5 | 0x40;
    *param_4 = uVar6;
  }
  if (param_3 != 0 && (char)uVar6 < '\0') {
    uVar10 = param_3 >> 1;
    uVar5 = 0;
    do {
      uVar12 = (ulonglong)(uVar10 * uVar9);
      uVar7 = (uint)param_1[uVar12];
      if (uVar2 == 0) {
        lVar1 = uVar12 + 1;
      }
      else {
        lVar1 = uVar12 + 2;
        uVar7 = (uint)CONCAT11(param_1[uVar12],param_1[uVar12 + 1]);
      }
      pbVar3 = param_1 + lVar1;
      uVar11 = uVar10;
      if (uVar7 <= param_5) {
        if (param_5 - uVar7 == 0) {
          uVar2 = (uint)*pbVar3;
          if ((uVar6 & 2) == 0) {
            pbVar4 = pbVar3 + 1;
          }
          else {
            pbVar4 = pbVar3 + 2;
            uVar2 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
          }
          *param_7 = uVar2;
          uVar6 = (uint)pbVar4[1];
          if ((*param_4 & 4) == 0) {
            uVar2 = (uint)*pbVar4 << 8;
          }
          else {
            uVar6 = (uint)pbVar4[1] << 8 | (uint)*pbVar4 << 0x10;
            uVar2 = (uint)pbVar4[2];
          }
          uVar2 = uVar2 | uVar6;
          goto LAB_18020a1db;
        }
        uVar5 = uVar10 + 1;
        uVar11 = param_3;
      }
      param_3 = uVar11;
      uVar11 = (param_5 - uVar7) + uVar10;
      uVar7 = (param_3 - uVar5 >> 1) + uVar5;
      uVar10 = uVar11;
      if (uVar11 < uVar5) {
        uVar10 = uVar7;
      }
      if (param_3 <= uVar11) {
        uVar10 = uVar7;
      }
    } while (uVar5 < param_3);
  }
  *param_7 = 0;
  uVar2 = 0;
LAB_18020a1db:
  *param_6 = uVar2;
  return;
}


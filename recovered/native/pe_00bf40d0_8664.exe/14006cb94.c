/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006cb94 */

void FUN_14006cb94(uint *param_1,uint param_2,short *param_3,uint param_4,short *param_5,int param_6
                  ,int param_7)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  puVar7 = param_1 + 0x102;
  puVar2 = param_1 + 0x183;
  if (param_7 == 0) {
    puVar7 = param_1;
    puVar2 = param_1 + 0x81;
  }
  *puVar7 = 0;
  *puVar2 = 0;
  FUN_14006cd45('\0',param_2,param_3,puVar7,puVar2);
  FUN_14006cd45('\x01',param_4,param_5,puVar7,puVar2);
  uVar3 = *puVar7;
  uVar1 = *puVar2;
  if (uVar3 != 0) {
    puVar5 = puVar7 + 1;
    uVar9 = uVar3;
    do {
      if (uVar9 == 1) {
        uVar11 = *puVar5;
        uVar8 = puVar5[1];
      }
      else {
        if (uVar9 == 0) break;
        uVar11 = *puVar5;
        uVar8 = puVar5[1];
        uVar12 = puVar5[8] - uVar11;
        if ((int)uVar12 < (int)uVar8) {
          puVar5[1] = uVar12;
          uVar8 = uVar12;
        }
      }
      puVar5[3] = uVar11;
      puVar5[2] = uVar8 + uVar11;
      uVar9 = uVar9 - 1;
      puVar5 = puVar5 + 8;
    } while( true );
  }
  if (uVar1 != 0) {
    puVar5 = puVar2 + 1;
    uVar9 = uVar1;
    do {
      if (uVar9 == 1) {
        uVar11 = *puVar5;
        uVar8 = puVar5[1];
      }
      else {
        if (uVar9 == 0) break;
        uVar11 = *puVar5;
        uVar8 = puVar5[1];
        uVar12 = uVar11 - puVar5[8];
        if ((int)uVar8 < (int)uVar12) {
          puVar5[1] = uVar12;
          uVar8 = uVar12;
        }
      }
      puVar5[2] = uVar11;
      puVar5[3] = uVar8 + uVar11;
      uVar9 = uVar9 - 1;
      puVar5 = puVar5 + 8;
    } while( true );
  }
  iVar10 = 1;
  do {
    if (uVar3 != 0) {
      puVar7[4] = puVar7[4] - param_6;
      uVar9 = puVar7[3];
      iVar4 = uVar3 - 1;
      if (iVar4 == 0) {
        puVar7 = puVar7 + 1;
      }
      else {
        puVar5 = puVar7 + 0xc;
        uVar3 = uVar9;
        do {
          puVar7 = puVar5;
          uVar9 = puVar7[-1];
          iVar6 = (int)(*puVar7 - uVar3) / 2;
          uVar8 = iVar6 + uVar3;
          uVar3 = uVar3 + param_6;
          uVar11 = *puVar7 - param_6;
          if (iVar6 < param_6) {
            uVar3 = uVar8;
            uVar11 = uVar8;
          }
          *puVar7 = uVar11;
          puVar7[-9] = uVar3;
          iVar4 = iVar4 + -1;
          puVar5 = puVar7 + 8;
          uVar3 = uVar9;
        } while (iVar4 != 0);
        puVar7 = puVar7 + -3;
      }
      puVar7[2] = uVar9 + param_6;
    }
    bVar13 = iVar10 != 0;
    iVar10 = iVar10 + -1;
    puVar7 = puVar2;
    uVar3 = uVar1;
  } while (bVar13);
  return;
}


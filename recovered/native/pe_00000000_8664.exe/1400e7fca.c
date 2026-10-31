/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e7fca */

void FUN_1400e7fca(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  float param_5,undefined8 param_6,undefined4 param_7,uint param_8)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  uint local_110;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_140f17b40 ^ (ulonglong)auStack_138;
  uVar10 = 0xf0;
  if ((param_8 & 0x1f0) != 0) {
    uVar10 = param_8;
  }
  local_110 = uVar10;
  local_f0 = param_3;
  local_e8 = param_2;
  if (param_4 < 0xff000000) {
    fVar1 = (float)((ulonglong)param_2 >> 0x20);
    fVar6 = (float)((ulonglong)param_3 >> 0x20);
    uVar2 = FUN_1400785a2(0xffcccccc,param_4);
    uVar4 = DAT_1401c86c8;
    uVar2 = FUN_14007a641(uVar2,DAT_1401c86c8);
    uVar3 = FUN_1400785a2(0xff808080,param_4);
    uVar4 = FUN_14007a641(uVar3,uVar4);
    local_118 = param_7;
    FUN_1400de294(param_1,&local_e8,&local_f0,uVar2);
    fVar15 = (float)((ulonglong)param_6 >> 0x20) + fVar1;
    if (fVar15 < fVar6) {
      fVar9 = (float)param_2;
      fVar7 = (float)param_3;
      local_104 = (float)param_6 + fVar9;
      bVar8 = 0;
      do {
        fVar11 = (float)FUN_140090d06();
        fVar15 = fVar15 + param_5;
        fVar12 = (float)FUN_14004863e();
        if (fVar11 < fVar12) {
          for (fVar16 = (float)bVar8 * param_5 + local_104; fVar16 < fVar7;
              fVar16 = fVar16 + param_5 + param_5) {
            fVar13 = (float)FUN_140090d06();
            fVar14 = (float)FUN_14004863e(param_5 + fVar16,fVar7);
            if (fVar13 < fVar14) {
              uVar5 = 0x100;
              if ((fVar11 <= fVar1) && (uVar5 = (fVar13 <= fVar9 | 0x10) << 4, fVar7 <= fVar14)) {
                uVar5 = uVar5 | 0x20;
              }
              if (fVar6 <= fVar12) {
                if (fVar13 <= fVar9) {
                  uVar5 = uVar5 | 0x40;
                }
                if (fVar7 <= fVar14) {
                  uVar5 = uVar5 | 0x80;
                }
              }
              local_110 = uVar5 & uVar10;
              if (uVar5 == 0x100) {
                local_110 = 0x100;
              }
              if (uVar10 == 0x100) {
                local_110 = uVar10;
              }
              local_118 = param_7;
              local_100 = fVar13;
              local_fc = fVar11;
              local_f8 = fVar14;
              local_f4 = fVar12;
              FUN_1400de294(param_1,&local_100,&local_f8,uVar4);
            }
          }
        }
        bVar8 = bVar8 ^ 1;
      } while (fVar15 < fVar6);
    }
  }
  else {
    local_118 = param_7;
    FUN_1400de294(param_1,&local_e8,&local_f0,param_4);
  }
  if (DAT_140f17b40 == (local_e0 ^ (ulonglong)auStack_138)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_e0 ^ (ulonglong)auStack_138);
}


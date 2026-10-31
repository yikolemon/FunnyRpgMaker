/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140349992 */

void FUN_140349992(longlong param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      if (0.0 <= *(float *)(param_1 + 4)) {
        uVar7 = FUN_140313933(*(float *)(param_1 + 4) - param_3,param_4);
        *(undefined4 *)(param_1 + 4) = uVar7;
      }
    }
    else {
      FUN_14049aa40(param_1,(longlong)(int)param_2,0xc,&DAT_140349bda);
      fVar9 = DAT_1404f0000;
      fVar11 = DAT_1404ccdb0;
      uVar3 = (ulonglong)param_2;
      if ((1 < (int)param_2) && (DAT_1404f0000 < param_3)) {
        lVar2 = param_1 + 4;
        uVar6 = 1;
        do {
          fVar8 = *(float *)(param_1 + 4);
          uVar6 = (ulonglong)(int)uVar6;
          pfVar1 = (float *)(lVar2 + uVar6 * 0xc);
          do {
            fVar10 = *pfVar1;
            if (fVar10 < fVar8) {
              if (0.0 <= fVar10) {
                fVar10 = fVar8 - fVar10;
                goto LAB_140349a93;
              }
              break;
            }
            uVar6 = uVar6 + 1;
            pfVar1 = pfVar1 + 3;
          } while ((longlong)uVar6 < (longlong)uVar3);
          fVar10 = fVar8 + fVar11;
LAB_140349a93:
          fVar8 = (float)FUN_1403000b2(fVar8 - param_4,fVar10);
          if (fVar8 <= 0.0) break;
          iVar5 = (int)uVar6;
          uVar7 = FUN_1403000b2(param_3 / (float)iVar5,fVar8);
          if (0 < iVar5) {
            lVar4 = 0;
            do {
              fVar8 = (float)FUN_1403000b2(uVar7,*(float *)(lVar2 + lVar4) - param_4);
              *(float *)(lVar2 + lVar4) = *(float *)(lVar2 + lVar4) - fVar8;
              param_3 = param_3 - fVar8;
              lVar4 = lVar4 + 0xc;
            } while ((uVar6 & 0xffffffff) * 0xc != lVar4);
          }
          if (((int)param_2 <= iVar5) || (param_3 <= fVar9)) break;
        } while( true );
      }
      if (0 < (int)param_2) {
        fVar11 = 0.0;
        lVar2 = 0;
        do {
          fVar9 = *(float *)(param_1 + 4 + lVar2);
          fVar8 = (float)(int)fVar9;
          fVar11 = fVar11 + (fVar9 - fVar8);
          *(float *)(param_1 + 4 + lVar2) = fVar8;
          uVar7 = DAT_1404bda40;
          lVar2 = lVar2 + 0xc;
        } while (uVar3 * 0xc != lVar2);
        if (0.0 < fVar11) {
          uVar6 = 0;
LAB_140349b60:
          do {
            fVar9 = (float)FUN_1403000b2(*(float *)(param_1 + 8 + uVar6 * 0xc) -
                                         *(float *)(param_1 + 4 + uVar6 * 0xc),uVar7);
            fVar11 = fVar11 - fVar9;
            *(float *)(param_1 + 4 + uVar6 * 0xc) = fVar9 + *(float *)(param_1 + 4 + uVar6 * 0xc);
            uVar6 = uVar6 + 1;
            if (uVar6 < uVar3) {
              if (0.0 < fVar11) goto LAB_140349b60;
            }
            uVar6 = 0;
          } while (0.0 < fVar11);
        }
      }
    }
  }
  return;
}


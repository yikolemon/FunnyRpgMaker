/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101329c9 */

void FUN_101329c9(int param_1,int param_2,float param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      if (0.0 <= *(float *)(param_1 + 4)) {
        fVar4 = (float10)FUN_100fdbca(*(float *)(param_1 + 4) - param_3,param_4);
        *(float *)(param_1 + 4) = (float)fVar4;
      }
    }
    else {
      FUN_1026fb00(param_1,param_2,0xc,&LAB_10132c28);
      if ((1 < param_2) && (DAT_102b9130 < param_3)) {
        iVar3 = 1;
        do {
          fVar7 = *(float *)(param_1 + 4);
          iVar2 = iVar3 + 1;
          if (iVar3 + 1 < param_2) {
            iVar2 = param_2;
          }
          pfVar1 = (float *)(param_1 + 4) + iVar3 * 3;
          do {
            fVar6 = *pfVar1;
            if (fVar6 < fVar7) {
              iVar2 = iVar3;
              if (0.0 <= fVar6) {
                fVar6 = fVar7 - fVar6;
                goto LAB_10132aaa;
              }
              break;
            }
            iVar3 = iVar3 + 1;
            pfVar1 = pfVar1 + 3;
          } while (iVar3 < param_2);
          fVar6 = fVar7 + DAT_102b8a50;
          iVar3 = iVar2;
LAB_10132aaa:
          fVar4 = (float10)FUN_100ea38a(fVar7 - param_4,fVar6);
          if ((float)fVar4 <= 0.0) break;
          fVar4 = (float10)FUN_100ea38a(param_3 / (float)iVar3,(float)fVar4);
          pfVar1 = (float *)(param_1 + 4);
          iVar2 = iVar3;
          if (0 < iVar3) {
            do {
              fVar5 = (float10)FUN_100ea38a((float)fVar4,*pfVar1 - param_4);
              *pfVar1 = *pfVar1 - (float)fVar5;
              param_3 = param_3 - (float)fVar5;
              iVar2 = iVar2 + -1;
              pfVar1 = pfVar1 + 3;
            } while (iVar2 != 0);
          }
          if ((param_2 <= iVar3) || (param_3 <= DAT_102b9130)) break;
        } while( true );
      }
      if (0 < param_2) {
        pfVar1 = (float *)(param_1 + 4);
        fVar7 = 0.0;
        iVar3 = param_2;
        do {
          fVar6 = (float)(int)*pfVar1;
          fVar7 = fVar7 + (*pfVar1 - fVar6);
          *pfVar1 = fVar6;
          pfVar1 = pfVar1 + 3;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (0.0 < fVar7) {
          iVar3 = 0;
LAB_10132bbb:
          do {
            fVar4 = (float10)FUN_100ea38a(*(float *)(param_1 + 8 + iVar3 * 0xc) -
                                          *(float *)(param_1 + 4 + iVar3 * 0xc),0x3f800000);
            *(float *)(param_1 + 4 + iVar3 * 0xc) =
                 *(float *)(param_1 + 4 + iVar3 * 0xc) + (float)fVar4;
            fVar7 = fVar7 - (float)fVar4;
            iVar3 = iVar3 + 1;
            if (iVar3 < param_2) {
              if (0.0 < fVar7) goto LAB_10132bbb;
            }
            iVar3 = 0;
          } while (0.0 < fVar7);
        }
      }
    }
  }
  return;
}


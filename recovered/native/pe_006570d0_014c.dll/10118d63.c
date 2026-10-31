/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118d63 */

void FUN_10118d63(int param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  uVar1 = *(uint *)(DAT_1039d74c + 0x1210);
  uVar2 = *(uint *)(DAT_1039d74c + 0x120c);
  fVar8 = (float)*param_2;
  fVar9 = (float)((ulonglong)*param_2 >> 0x20);
  local_1c = CONCAT44((float)((ulonglong)*param_3 >> 0x20) - fVar9,(float)*param_3 - fVar8);
  iVar3 = *(int *)(DAT_1039d74c + 0x1484);
  if (iVar3 != 0) {
    iVar4 = *(int *)(DAT_1039d74c + 0x148c);
    local_2c = (float)*(undefined8 *)param_4 + fVar8;
    fStack_28 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20) + fVar9;
    iVar7 = 0;
    fStack_24 = fVar8;
    fStack_20 = fVar9;
    do {
      iVar6 = *(int *)(iVar4 + iVar7);
      if (((uVar1 ^ uVar2) >> 10 & 1) == 0) {
        if (*(int *)(iVar6 + 0x3c) == param_1) {
          if ((*param_4 == *param_5) && (!NAN(*param_4) && !NAN(*param_5))) {
            if ((param_4[1] == param_5[1]) && (!NAN(param_4[1]) && !NAN(param_5[1])))
            goto LAB_10118e2e;
          }
          fVar8 = (float)*(undefined8 *)(iVar6 + 0x50);
          fVar9 = (float)((ulonglong)*(undefined8 *)(iVar6 + 0x50) >> 0x20);
          auVar5._4_4_ = -(uint)((float)((ulonglong)*(undefined8 *)(iVar6 + 0x58) >> 0x20) + fVar9
                                <= fStack_28);
          auVar5._0_4_ = -(uint)((float)*(undefined8 *)(iVar6 + 0x58) + fVar8 <= local_2c);
          auVar5._8_4_ = -(uint)(fStack_24 <= fVar8);
          auVar5._12_4_ = -(uint)(fStack_20 <= fVar9);
          iVar6 = movmskps(param_5,auVar5);
          if (iVar6 == 0xf) goto LAB_10118e2e;
        }
      }
      else {
LAB_10118e2e:
        FUN_10118e61();
      }
      iVar7 = iVar7 + 4;
    } while (iVar3 << 2 != iVar7);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


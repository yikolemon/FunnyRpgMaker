/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011dd87 */

void FUN_18011dd87(longlong param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
                  float *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar2 = *(uint *)(DAT_180419160 + 0x12f8);
  uVar3 = *(uint *)(DAT_180419160 + 0x12f4);
  uVar1 = *(undefined8 *)param_4;
  fVar11 = (float)*param_2;
  fVar13 = (float)((ulonglong)*param_2 >> 0x20);
  local_68 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) - fVar13,(float)*param_3 - fVar11);
  iVar4 = *(int *)(DAT_180419160 + 0x15a8);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(DAT_180419160 + 0x15b0);
    lVar10 = 0;
    uVar9 = DAT_180419160;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar10);
      if (((uVar2 ^ uVar3) >> 10 & 1) == 0) {
        if (*(longlong *)(lVar6 + 0x48) == param_1) {
          if ((*param_4 == *param_5) && (!NAN(*param_4) && !NAN(*param_5))) {
            if ((param_4[1] == param_5[1]) && (!NAN(param_4[1]) && !NAN(param_5[1])))
            goto LAB_18011de5c;
          }
          fVar12 = (float)*(undefined8 *)(lVar6 + 0x60);
          fVar14 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x60) >> 0x20);
          auVar7._4_4_ = -(uint)((float)((ulonglong)*(undefined8 *)(lVar6 + 0x68) >> 0x20) + fVar14
                                <= (float)((ulonglong)uVar1 >> 0x20) + fVar13);
          auVar7._0_4_ = -(uint)((float)*(undefined8 *)(lVar6 + 0x68) + fVar12 <=
                                (float)uVar1 + fVar11);
          auVar7._8_4_ = -(uint)(fVar11 <= fVar12);
          auVar7._12_4_ = -(uint)(fVar13 <= fVar14);
          uVar8 = movmskps((int)uVar9,auVar7);
          uVar9 = (ulonglong)uVar8;
          if (uVar8 == 0xf) goto LAB_18011de5c;
        }
      }
      else {
LAB_18011de5c:
        uVar9 = FUN_18011dea5(lVar6,&local_68);
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar4 * 8 != lVar10);
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_88);
}


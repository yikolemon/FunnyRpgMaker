/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a53fb */

void FUN_1400a53fb(longlong param_1,undefined8 *param_2,float *param_3,float *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_c8 [40];
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
  uVar1 = *param_2;
  fVar6 = (float)uVar1;
  fVar11 = (float)((ulonglong)uVar1 >> 0x20);
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x408);
    uVar2 = *(uint *)(lVar3 + 0x14);
    fVar7 = *(float *)(lVar3 + 0x278);
    fVar8 = *(float *)(lVar3 + 0x27c);
    fVar9 = *(float *)(lVar3 + 0x280);
    fVar10 = *(float *)(lVar3 + 0x284);
    fVar4 = (float)FUN_14007b71f(*(undefined4 *)(lVar3 + 0x94),*(undefined4 *)(lVar3 + 0x9c));
    fVar5 = (float)FUN_14007b71f(*(undefined4 *)(lVar3 + 0x90),*(undefined4 *)(lVar3 + 0x9c));
    if (((uVar2 & 0x8800) == 0 || (uVar2 & 8) != 0) &&
       (fVar6 = (float)FUN_140090d06(uVar1,fVar7 + fVar5,fVar9 - fVar5), (uVar2 & 8) != 0)) {
      fVar11 = (float)FUN_140090d06(CONCAT44(fVar11,fVar11),fVar8 + fVar4,fVar10 - fVar4);
    }
  }
  fVar4 = (float)*(undefined8 *)(param_1 + 0x60);
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  fVar7 = (float)*(undefined8 *)(param_1 + 0x68) + fVar4;
  fVar8 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20) + fVar5;
  fVar9 = (float)*(undefined8 *)param_3;
  fVar10 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  fVar4 = (fVar4 - fVar6) * fVar9 + fVar6;
  fVar5 = (fVar5 - fVar11) * fVar10 + fVar11;
  fVar6 = ((fVar6 - fVar7) * fVar9 + fVar7) - fVar4;
  fVar11 = ((fVar11 - fVar8) * fVar10 + fVar8) - fVar5;
  local_98 = CONCAT44(fVar11,fVar6);
  FUN_14008b19e(&local_a0,param_1);
  *(ulonglong *)param_4 = CONCAT44(fVar5,fVar4);
  if ((*param_3 == 0.0) && (!NAN(*param_3))) {
    *param_4 = fVar4 - (local_a0 - fVar6);
  }
  if ((param_3[1] == 0.0) && (!NAN(param_3[1]))) {
    param_4[1] = fVar5 - (fStack_9c - fVar11);
  }
  *param_5 = CONCAT44(fStack_9c,local_a0);
  if (DAT_140f17b40 != (local_90 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_90 ^ (ulonglong)auStack_c8);
  }
  return;
}


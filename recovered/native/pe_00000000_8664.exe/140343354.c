/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140343354 */

void FUN_140343354(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
                  ulonglong param_6)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  ulonglong uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *(float *)(DAT_14062a630 + 0xe0c);
  bVar7 = param_5 < 2;
  bVar2 = !bVar7;
  uVar6 = param_6 >> 0x20;
  if (bVar7) {
    uVar6 = param_6;
  }
  lVar3 = (ulonglong)bVar7 * 4;
  *(undefined4 *)(param_3 + lVar3) = *(undefined4 *)(param_1 + lVar3);
  *(undefined4 *)(param_4 + lVar3) = *(undefined4 *)(param_2 + lVar3);
  uVar4 = (ulonglong)((uint)bVar2 * 4);
  fVar8 = *(float *)(param_2 + uVar4) - fVar1;
  fVar5 = (float)uVar6;
  fVar10 = DAT_1404ecffc * fVar8;
  fVar9 = (float)(int)fVar10;
  if (fVar5 <= fVar10 && 0.0 < fVar5) {
    fVar9 = fVar5;
  }
  *(float *)(param_4 + uVar4) = fVar9;
  fVar9 = (float)(int)(fVar8 - fVar9);
  *(float *)(param_2 + uVar4) = fVar9;
  if ((param_5 & 0xfffffffd) == 0) {
    lVar3 = (ulonglong)bVar2 * 4;
    fVar9 = *(float *)(param_1 + lVar3);
    *(float *)(param_3 + lVar3) = fVar9;
    *(float *)(param_1 + lVar3) = fVar1 + fVar9 + *(float *)(param_4 + lVar3);
  }
  else if ((param_5 & 0xfffffffd) == 1) {
    *(float *)(param_3 + (ulonglong)bVar2 * 4) =
         fVar1 + fVar9 + *(float *)(param_1 + (ulonglong)bVar2 * 4);
  }
  return;
}


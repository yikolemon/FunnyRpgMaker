/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008db73 */

undefined8 * FUN_14008db73(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float *pfVar6;
  bool bVar7;
  longlong lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 local_80;
  
  *param_1 = *(undefined8 *)(param_2 + 0xd4);
  fVar4 = DAT_1402112e4;
  fVar3 = DAT_1401c86a0;
  local_80 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 0xb8) >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)(param_2 + 0xa8) >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)(param_2 + 0xb0) >> 0x20),
                      (float)*(undefined8 *)(param_2 + 0xb8) +
                      (float)*(undefined8 *)(param_2 + 0xa8) +
                      (float)*(undefined8 *)(param_2 + 0xb0));
  lVar8 = 0;
  pfVar6 = (float *)&local_80;
  bVar5 = true;
  do {
    bVar7 = bVar5;
    fVar9 = *(float *)(param_2 + 0xe4 + lVar8 * 4);
    if (fVar4 <= fVar9) {
      fVar9 = *(float *)((longlong)param_1 + lVar8 * 4);
    }
    else {
      fVar1 = *(float *)(param_2 + 0xec + lVar8 * 4);
      fVar2 = *(float *)(param_2 + 0xf4 + lVar8 * 4);
      if (fVar2 <= 0.0) {
        fVar11 = *pfVar6;
      }
      else {
        fVar11 = *pfVar6;
        fVar9 = (float)FUN_1400a5f99(fVar9,(*(float *)(param_2 + 0xdc + lVar8 * 4) +
                                           *(float *)(param_2 + 0x70 + lVar8 * 4)) - fVar11,fVar2,
                                     fVar1);
      }
      fVar9 = fVar9 - fVar1 * (*(float *)(param_2 + 0x70 + lVar8 * 4) - fVar11);
    }
    fVar9 = (float)FUN_14007b71f(fVar9,0);
    *(float *)((longlong)param_1 + lVar8 * 4) = (float)(longlong)(fVar9 + fVar3);
    if ((*(char *)(param_2 + 0x10c) == '\0') && (*(char *)(param_2 + 0x10e) == '\0')) {
      uVar10 = FUN_14004863e();
      *(undefined4 *)((longlong)param_1 + lVar8 * 4) = uVar10;
    }
    lVar8 = 1;
    pfVar6 = (float *)((longlong)&local_80 + 4);
    bVar5 = false;
  } while (bVar7);
  return param_1;
}


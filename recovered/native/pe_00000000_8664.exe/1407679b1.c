/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407679b1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407679b1(undefined8 *param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  pfVar4 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x48);
  uVar5 = param_2 & 0xffffffff;
  *param_1 = *(undefined8 *)(param_2 + 0xc4);
  *(ulonglong *)(((ulonglong)(pfVar4 + 0xd) & 0xffffffff) - 4) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 0xa0) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(param_2 + 0x98) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(param_2 + 0xa8) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0xa0) +
                (float)*(undefined8 *)(param_2 + 0x98) + (float)*(undefined8 *)(param_2 + 0xa8));
  fVar3 = (float)CONCAT31((int3)((ulonglong)param_1 >> 8),1);
  pfVar4[3] = SUB84(param_1,0);
  fVar7 = _DAT_150a203c4;
  fVar6 = *(float *)(uVar5 + 0xd4);
  pfVar4[9] = fVar3;
  if (fVar7 <= fVar6) {
    fVar6 = *(float *)((ulonglong)param_1 & 0xffffffff);
  }
  else {
    fVar7 = *(float *)(uVar5 + 0xdc);
    if (*(float *)(uVar5 + 0xe4) <= 0.0) {
      fVar3 = *(float *)((ulonglong)(pfVar4 + 0xc) & 0xffffffff);
    }
    else {
      fVar6 = *(float *)(uVar5 + 0xcc);
      fVar1 = *(float *)(uVar5 + 0x60);
      fVar2 = *(float *)((ulonglong)(pfVar4 + 0xc) & 0xffffffff);
      pfVar4[7] = fVar2;
      *pfVar4 = fVar7;
      pfVar4[8] = fVar7;
      pfVar4[-2] = 3.8512192;
      pfVar4[-1] = 1.4013e-45;
      fVar6 = (float)FUN_14077ef9c(fVar3,(fVar6 + fVar1) - fVar2);
      fVar3 = pfVar4[7];
      fVar7 = pfVar4[8];
    }
    fVar6 = fVar6 - fVar7 * (*(float *)(uVar5 + 0x60) - fVar3);
  }
  *pfVar4 = fVar6;
  pfVar4[1] = 0.0;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pfVar4 + -2) = &UNK_140767aa1;
  FUN_140755a9a();
}


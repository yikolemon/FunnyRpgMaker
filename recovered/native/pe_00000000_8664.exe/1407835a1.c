/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407835a1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407835a1(ulonglong param_1,uint param_2)

{
  code *pcVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  float *pfVar5;
  ulonglong uVar6;
  undefined1 *puVar8;
  float10 in_ST0;
  undefined1 *puVar7;
  
  pfVar5 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x20);
  param_1 = param_1 & 0xffffffff;
  uVar3 = (ulonglong)_DAT_150b20d09;
  if (*(int *)(uVar3 + 0xcf8) == 0) {
    pfVar5[5] = 0.0;
    pfVar5[6] = 0.0;
    *pfVar5 = (float)*(undefined4 *)(param_1 + 0x38);
    pfVar5[-2] = 3.8783019;
    pfVar5[-1] = 1.4013e-45;
    FUN_14076d4c9();
    pfVar5[1] = (float)in_ST0;
    pfVar5[3] = *(float *)(param_1 + 0x34);
    pfVar5[4] = *pfVar5 + pfVar5[1];
  }
  else {
    *(ulonglong *)(pfVar5 + 5) = (ulonglong)_DAT_150a0e9fe;
    pfVar5[-2] = 3.878287;
    pfVar5[-1] = 1.4013e-45;
    FUN_14076d4c9();
    pfVar5[2] = (float)in_ST0;
    *(ulonglong *)(pfVar5 + 3) =
         CONCAT44(pfVar5[2] + (float)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20),
                  *(float *)(param_1 + 0x3c) + (float)*(undefined8 *)(param_1 + 0x34));
  }
  *(float **)(pfVar5 + -2) = pfVar5 + 5;
  pfVar5[-4] = 1.4013e-45;
  pfVar5[-3] = 0.0;
  *(float **)(pfVar5 + -6) = pfVar5 + 3;
  pfVar5[-8] = 3.8783119;
  pfVar5[-7] = 1.4013e-45;
  FUN_140769c26();
  uVar6 = (ulonglong)((int)(pfVar5 + -6) + 0xc);
  *(undefined8 *)(uVar6 - 8) = 0;
  *(undefined8 *)(uVar6 - 0x10) = 0x10330ec7;
  *(undefined8 *)(uVar6 - 0x18) = 0x140783652;
  cVar2 = FUN_14076e606();
  uVar4 = (int)(uVar6 - 0x10) + 8;
  puVar7 = (undefined1 *)(ulonglong)uVar4;
  if (cVar2 == '\0') {
    if (_DAT_150b0c394 == (*(uint *)(puVar7 + 0x1c) ^ uVar4)) {
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) | 2;
    *(ulonglong *)(puVar7 + -8) = (ulonglong)param_2;
    *(ulonglong *)(puVar7 + -0x10) = param_1;
    puVar8 = puVar7 + -0x18;
    *(ulonglong *)(puVar7 + -0x18) = uVar3;
    pcVar1 = *(code **)(uVar3 + 0x26c4);
    *(undefined8 *)(puVar7 + -0x20) = 0x140783669;
    (*pcVar1)();
    puVar7 = (undefined1 *)(ulonglong)((int)puVar8 + 0xcU);
    if (_DAT_150b0c378 == (*(uint *)(puVar7 + 0x1c) ^ (int)puVar8 + 0xcU)) {
      FUN_14076e49b();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar7 + -8) = FUN_1407836ab;
  FUN_1408802b0(*(uint *)(puVar7 + 0x1c) ^ (uint)puVar7);
}


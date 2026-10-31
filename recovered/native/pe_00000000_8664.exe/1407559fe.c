/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407559fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1407559fe(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  float *pfVar7;
  float fVar8;
  
  puVar6 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x1c);
  uVar1 = puVar6[0xb];
  pfVar7 = (float *)(ulonglong)uVar1;
  uVar4 = puVar6[0xd];
  uVar2 = puVar6[0xc];
  uVar5 = (ulonglong)_DAT_150af3162;
  if ((char)puVar6[0xe] != '\0') {
    puVar6[1] = uVar4;
    *puVar6 = uVar2;
    puVar6[-2] = 0x40755a29;
    puVar6[-1] = 1;
    uVar4 = FUN_14075544d();
  }
  fVar8 = *(float *)(uVar5 + 0x1228);
  if (uVar2 == uVar4) {
    pfVar7[1] = fVar8;
    fVar8 = 0.0;
  }
  else {
    uVar3 = *(undefined4 *)(uVar5 + 0x1220);
    puVar6[5] = uVar4;
    puVar6[4] = uVar2;
    puVar6[3] = puVar6[0xf];
    puVar6[1] = (uint)fVar8;
    *puVar6 = uVar1;
    puVar6[6] = 0;
    puVar6[2] = 0x7f7fffff;
    puVar6[-2] = 0x40755a6d;
    puVar6[-1] = 1;
    FUN_1407eb67e(uVar3);
    fVar8 = (float)(int)(*pfVar7 + _DAT_150a0e50c);
  }
  *pfVar7 = fVar8;
  return pfVar7;
}


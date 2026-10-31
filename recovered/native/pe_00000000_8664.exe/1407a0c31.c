/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a0c31 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a0c31(float param_1)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  float in_ECX;
  ulonglong uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong uVar10;
  int iVar11;
  
  pfVar8 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  uVar10 = (ulonglong)_DAT_150b3e38c;
  fVar1 = *(float *)(uVar10 + 0x14cc);
  iVar7 = *(int *)(uVar10 + 0x1fd4) + 1;
  iVar11 = *(int *)(uVar10 + 0x1fd8);
  if (*(int *)(uVar10 + 0x1fd4) < iVar11) {
    uVar4 = *(uint *)(uVar10 + 0x1fdc);
  }
  else {
    pfVar8[1] = in_ECX;
    pfVar8[2] = fVar1;
    *pfVar8 = param_1;
    if (iVar11 == 0) {
      iVar11 = 8;
    }
    else {
      iVar11 = iVar11 / 2 + iVar11;
    }
    if (iVar11 <= iVar7) {
      iVar11 = iVar7;
    }
    *(ulonglong *)(pfVar8 + -2) = (ulonglong)(uint)(iVar11 * 0x28);
    pfVar8[-4] = 3.9070196;
    pfVar8[-3] = 1.4013e-45;
    uVar4 = FUN_1407520ca();
    pfVar9 = (float *)(ulonglong)((int)(pfVar8 + -2) + 4);
    uVar2 = *(uint *)(uVar10 + 0x1fdc);
    if (uVar2 != 0) {
      *(ulonglong *)(pfVar9 + -2) = (ulonglong)(uint)(*(int *)(uVar10 + 0x1fd4) * 0x28);
      *(ulonglong *)(pfVar9 + -4) = (ulonglong)uVar2;
      *(ulonglong *)(pfVar9 + -6) = (ulonglong)uVar4;
      pfVar9[-8] = 3.907028;
      pfVar9[-7] = 1.4013e-45;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(pfVar9 + -6) + 0xc) - 8) = *(undefined8 *)(uVar10 + 0x1fdc);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(pfVar9 + -6) + 0xc) - 0x10) = &UNK_1407a0ccd;
      FUN_14075219b();
    }
    *(uint *)(uVar10 + 0x1fdc) = uVar4;
    *(int *)(uVar10 + 0x1fd8) = iVar11;
    fVar1 = pfVar9[2];
    in_ECX = pfVar9[1];
    param_1 = *pfVar9;
  }
  uVar6 = (ulonglong)(uint)fVar1;
  *(int *)(uVar10 + 0x1fd4) = iVar7;
  uVar5 = (ulonglong)(uVar4 + iVar7 * 0x28);
  *(undefined4 *)(uVar5 - 0x28) = *(undefined4 *)(uVar10 + 0x1e80);
  *(float *)(uVar5 - 0x24) = in_ECX;
  *(undefined4 *)(uVar5 - 0x20) = *(undefined4 *)(uVar10 + 0x1e84);
  uVar3 = *(undefined8 *)(uVar10 + 0x1ea4);
  *(undefined8 *)(uVar5 - 0x1c) = *(undefined8 *)(uVar10 + 0x1e9c);
  *(undefined8 *)(uVar5 - 0x14) = uVar3;
  if (((uint)in_ECX & 0x180000) == 0) {
    *(undefined4 *)(uVar5 - 0xc) = 0x7f7fffff;
  }
  else {
    *(float *)(uVar5 - 0xc) =
         *(float *)(uVar10 + 0x1228) * _DAT_150a57e0d + param_1 + *(float *)(uVar10 + 0xd0c);
    if (*(uint *)(uVar10 + 0x2308) != 0) {
      *(undefined2 *)(uVar5 - 4) = *(undefined2 *)((ulonglong)*(uint *)(uVar10 + 0x2308) + 0x48);
      *(undefined4 *)(uVar5 - 8) = 0xff7fffff;
      uVar4 = 0 << (*(byte *)(uVar6 + 0x1cc) & 0x1f);
      *(uint *)(uVar6 + 0x1d0) = *(uint *)(uVar6 + 0x1d0) | uVar4;
      if (((uint)in_ECX >> 0x14 & 1) != 0) {
        *(uint *)(uVar6 + 0x1d4) = *(uint *)(uVar6 + 0x1d4) | uVar4;
      }
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


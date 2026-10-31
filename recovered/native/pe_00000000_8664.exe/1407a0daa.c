/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a0daa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a0daa(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  float10 in_ST0;
  float fVar8;
  float fVar9;
  float *pfVar5;
  
  uVar4 = (int)&stack0xffffffffffffffe0 - 0x68;
  pfVar5 = (float *)(ulonglong)uVar4;
  uVar7 = (ulonglong)_DAT_150b3e50e;
  iVar3 = *(int *)((ulonglong)*(uint *)(uVar7 + 0x14cc) + 0x1cc);
  if ((iVar3 != 0) &&
     ((*(uint *)((ulonglong)*(uint *)(uVar7 + 0x14cc) + 0x1d0) >> ((byte)((char)iVar3 - 1) & 0x1f) &
      1) != 0)) {
    uVar6 = (ulonglong)(uint)(*(int *)(uVar7 + 0x1fdc) + *(int *)(uVar7 + 0x1fd4) * 0x28);
    *(undefined1 (*) [16])(pfVar5 + 10) = ZEXT416((uint)(float)(int)*(float *)(uVar6 - 0xc));
    fVar8 = (float)(int)((float *)(ulonglong)(uint)pfVar5[0x1f])[1];
    fVar1 = *(float *)(uVar7 + 0xd98);
    fVar9 = 0.0;
    *(ulonglong *)(pfVar5 + 6) =
         CONCAT44(fVar8,(float)(int)(*(float *)(ulonglong)(uint)pfVar5[0x1f] -
                                    *(float *)(uVar7 + 0xd24)));
    pfVar5[8] = 0.0;
    pfVar5[9] = 0.0;
    if (0.0 < fVar1) {
      pfVar5[1] = fVar1;
      *pfVar5 = pfVar5[6] - pfVar5[10];
      pfVar5[-2] = 3.9071264;
      pfVar5[-1] = 1.4013e-45;
      FUN_14074225a();
      fVar8 = pfVar5[7];
      pfVar5[0xe] = (float)in_ST0;
      fVar9 = pfVar5[0xe];
    }
    pfVar5[0x13] = fVar8;
    pfVar5[0x14] = fVar8;
    pfVar5[0x15] = fVar8;
    pfVar5[0x16] = fVar8;
    pfVar5[5] = fVar9;
    uVar2 = *(undefined4 *)(uVar6 - 8);
    pfVar5[0xf] = fVar8 - fVar9;
    pfVar5[0x10] = fVar8;
    pfVar5[0x11] = fVar8;
    pfVar5[0x12] = fVar8;
    pfVar5[1] = fVar8 - fVar9;
    *pfVar5 = (float)uVar2;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pfVar5 + -2) = &UNK_1407a0e98;
    FUN_140755a9a();
  }
  if (_DAT_150b29d6e == ((uint)pfVar5[0x19] ^ uVar4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(pfVar5 + -2) = FUN_1407a1085;
  FUN_1408802b0((uint)pfVar5[0x19] ^ uVar4);
}


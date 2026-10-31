/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e456a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e456a(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  float fVar8;
  
  puVar5 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x3c);
  uVar6 = (ulonglong)param_1;
  uVar1 = puVar5[0x18];
  if ((uVar1 != puVar5[0x19] && 0xffffff < puVar5[0x17]) && (*(char *)(ulonglong)uVar1 != '\0')) {
    fVar8 = (float)puVar5[0x15];
    uVar7 = puVar5[0x14];
    if (uVar7 == 0) {
      uVar7 = *(uint *)((ulonglong)*(uint *)(uVar6 + 0x2c) + 0x10);
    }
    if ((fVar8 == 0.0) && (!NAN(fVar8))) {
      fVar8 = *(float *)((ulonglong)*(uint *)(uVar6 + 0x2c) + 0x14);
    }
    uVar2 = *(uint *)(uVar6 + 0x4c);
    uVar3 = *(uint *)(uVar6 + 0x50);
    uVar4 = *(uint *)(uVar6 + 0x54);
    puVar5[10] = *(uint *)(uVar6 + 0x48);
    puVar5[0xb] = uVar2;
    puVar5[0xc] = uVar3;
    puVar5[0xd] = uVar4;
    if (puVar5[0x1b] != 0) {
      uVar1 = *(uint *)(ulonglong)puVar5[0x1b];
      puVar5[9] = (uint)fVar8;
      puVar5[1] = uVar1;
      *puVar5 = puVar5[10];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar5 + -2) = &UNK_1407e4609;
      FUN_140755a9a();
    }
    puVar5[7] = puVar5[0x1a];
    puVar5[6] = puVar5[0x19];
    puVar5[5] = uVar1;
    puVar5[4] = (uint)(puVar5 + 10);
    puVar5[3] = puVar5[0x17];
    puVar5[2] = puVar5[0x16];
    puVar5[1] = (uint)fVar8;
    *puVar5 = param_1;
    puVar5[8] = 0;
    puVar5[-2] = 0x407e46bb;
    puVar5[-1] = 1;
    FUN_1407e46e4(uVar7);
    puVar5 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x60);
  }
  if (_DAT_150b6d3ca == (*(uint *)((longlong)puVar5 + 0x38) ^ (uint)puVar5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar5 + -8) = &UNK_1407e46e3;
  FUN_1408802b0(*(uint *)((longlong)puVar5 + 0x38) ^ (uint)puVar5);
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eaa4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407eaa4a(void)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  float10 in_ST0;
  float fVar5;
  float fVar6;
  
  puVar3 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x20);
  uVar1 = puVar3[0xf];
  uVar2 = (ulonglong)puVar3[0xe];
  uVar4 = (ulonglong)puVar3[0xd];
  if (puVar3[0xe] == 0) {
    *(undefined1 (*) [16])(puVar3 + 4) = ZEXT416(puVar3[0x10]);
  }
  else {
    fVar6 = *(float *)((ulonglong)
                       *(uint *)(ulonglong)*(uint *)((ulonglong)*(uint *)(uVar4 + 0x48) + 0x20) +
                      0x38);
    if ((fVar6 != 0.0) || (fVar5 = _DAT_150a75ec8, NAN(fVar6))) {
      fVar5 = *(float *)(uVar4 + 0x10) / fVar6;
    }
    fVar6 = *(float *)(uVar2 + 0x4c);
    puVar3[2] = (uint)(*(float *)(uVar2 + 0x50) * fVar5);
    puVar3[1] = (uint)(fVar5 * fVar6);
    *puVar3 = puVar3[0x10];
    puVar3[-2] = 0x407eaabc;
    puVar3[-1] = 1;
    FUN_14076ab94();
    puVar3[3] = (uint)(float)in_ST0;
    fVar6 = (float)puVar3[3];
    if (*(char *)(uVar2 + 0x32) != '\0') {
      fVar6 = (float)(int)(fVar6 + _DAT_150aa1bb4);
    }
    *(undefined1 (*) [16])(puVar3 + 4) = ZEXT416((uint)(fVar6 + *(float *)(uVar2 + 0x54)));
  }
  puVar3[-2] = 0x407eaaf2;
  puVar3[-1] = 1;
  FUN_1407ea94d(uVar4,(ushort)uVar1 + 1);
  *(uint *)((ulonglong)*(uint *)(uVar4 + 8) + (ulonglong)(ushort)uVar1 * 4) = puVar3[4];
  return;
}


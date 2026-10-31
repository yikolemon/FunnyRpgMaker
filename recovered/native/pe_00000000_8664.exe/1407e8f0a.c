/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e8f0a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407e8f0a(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  uint *puVar10;
  
  puVar10 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  fVar2 = (float)puVar10[10];
  uVar4 = *(uint *)((ulonglong)puVar10[8] + 0x290);
  puVar10[2] = uVar4;
  iVar5 = *(int *)((ulonglong)uVar4 + 0xac);
  bVar7 = true;
  do {
    if (iVar5 < 1) {
      uVar9 = 0;
    }
    else {
      uVar4 = *(uint *)((ulonglong)puVar10[2] + 0xbc);
      *puVar10 = 0;
      puVar10[1] = 0;
      do {
        uVar6 = *(uint *)(ulonglong)uVar4;
        if ((*(uint *)((ulonglong)uVar6 + 0x48) == puVar10[9]) &&
           (uVar9 = (ulonglong)uVar6, (*(byte *)(uVar9 + 0x3f) & 4) == 0)) {
          if (bVar7) {
            if ((*(float *)(uVar9 + 0x14) != (float)puVar10[0xb]) ||
               (NAN(*(float *)(uVar9 + 0x14)) || NAN((float)puVar10[0xb]))) goto LAB_1407e8fc5;
          }
          fVar3 = *(float *)(uVar9 + 0x10);
          if ((fVar2 < fVar3) &&
             ((puVar10[1] == 0 || (fVar3 < *(float *)((ulonglong)puVar10[1] + 0x10))))) {
            puVar10[1] = uVar6;
          }
          if ((fVar3 < fVar2) &&
             ((*puVar10 == 0 ||
              (pfVar1 = (float *)((ulonglong)*puVar10 + 0x10), *pfVar1 <= fVar3 && fVar3 != *pfVar1)
              ))) {
            *puVar10 = uVar6;
          }
        }
LAB_1407e8fc5:
      } while (iVar5 != 0);
      uVar9 = (ulonglong)puVar10[1];
      if (puVar10[1] != 0) {
        uVar4 = *puVar10;
        if (uVar4 == 0) {
          return uVar9;
        }
        if ((fVar2 + fVar2 <= *(float *)(uVar9 + 0x10)) &&
           (fVar2 * _DAT_150aa00f4 < *(float *)((ulonglong)uVar4 + 0x10))) {
          return uVar9;
        }
        return (ulonglong)uVar4;
      }
      uVar9 = (ulonglong)*puVar10;
      bVar7 = (bool)(*puVar10 == 0 & bVar7);
    }
    bVar8 = !bVar7;
    bVar7 = false;
    if (bVar8) {
      return uVar9;
    }
  } while( true );
}


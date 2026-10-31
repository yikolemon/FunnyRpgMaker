/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e9c7e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e9c7e(byte *param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  ushort uVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  int unaff_R13D;
  float fVar15;
  float fVar16;
  
  puVar11 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x34);
  if ((*param_1 & 4) == 0) {
    *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(param_1 + 0x30);
    uVar13 = *(uint *)(param_1 + 0x290);
    puVar14 = (undefined8 *)((longlong)puVar11 + 0x18U & 0xffffffff);
    puVar14[2] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined8 **)(puVar11 + -8) = puVar14;
    *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)((ulonglong)uVar13 + 0xd4);
    *(undefined8 *)(puVar11 + -0x18) = 0x1407e9cc6;
    cVar4 = FUN_1407e7f58();
    puVar11[-0xd] = cVar4;
    puVar3 = puVar11 + -0x10;
    if (cVar4 == '\0') {
      *(undefined8 **)(puVar11 + -0x18) = puVar14;
      *(undefined8 *)(puVar11 + -0x20) = 0x21;
      *(undefined8 *)(puVar11 + -0x28) = 0x22;
      *(undefined8 *)(puVar11 + -0x30) = 0x1407e9cda;
      uVar5 = FUN_1407e7c44((ulonglong)param_1 & 0xffffffff);
      *(undefined4 *)((ulonglong)uVar13 + 0xd4) = uVar5;
      puVar3 = puVar11 + -0x28;
    }
    puVar11 = puVar3;
    *(int *)(puVar11 + 0x10) = (int)param_1 + 0x6c;
    fVar16 = _DAT_150aa0dd1;
    uVar7 = 0;
    *(int *)(puVar11 + 0x14) = (int)param_1;
    do {
      uVar2 = *(ushort *)(puVar11 + 0x1c);
      iVar10 = (int)uVar7;
      iVar6 = (uint)uVar2 - iVar10;
      uVar13 = iVar6 / 2;
      if (puVar11[3] == '\0') {
        uVar8 = (uint)uVar2 - (iVar10 + uVar13);
        if (*(int *)((ulonglong)*(uint *)(puVar11 + 4) + 0x18) == 0) {
          *(uint *)(puVar11 + 8) = (uint)uVar2;
          *(uint *)(puVar11 + 0xc) = uVar8;
          uVar7 = (ulonglong)*(uint *)(puVar11 + 4);
          uVar8 = (((uint)*(ushort *)(puVar11 + 0x1a) + iVar10) * *(int *)(uVar7 + 0x1c) +
                  (uint)*(ushort *)(puVar11 + 0x18)) * *(int *)(uVar7 + 0x24) +
                  *(int *)(uVar7 + 0x28);
          if (1 < iVar6) {
            do {
              *(undefined4 *)(ulonglong)uVar8 = 0xffffff;
            } while (uVar13 != 0);
          }
          if (iVar10 != 0) {
            *(ulonglong *)(puVar11 + -8) = (ulonglong)(uint)(iVar10 * 4);
            *(undefined8 *)(puVar11 + -0x10) = 0xff;
            *(ulonglong *)(puVar11 + -0x18) = (ulonglong)(uVar8 + uVar13 * 4);
            *(undefined8 *)(puVar11 + -0x20) = 0x1407e9dfd;
            FUN_1408b3720();
            puVar11 = (undefined1 *)(ulonglong)((int)(puVar11 + -0x18) + 0xc);
            fVar16 = _DAT_150aa0ee5;
          }
          if (0 < *(int *)(puVar11 + 0xc)) {
            do {
              ((undefined4 *)(ulonglong)uVar8)[iVar10 + uVar13] = 0xffffff;
            } while (param_3 != unaff_R13D);
          }
        }
        else if (*(int *)((ulonglong)*(uint *)(puVar11 + 4) + 0x18) == 1) {
          uVar9 = (ulonglong)*(uint *)(puVar11 + 4);
          uVar12 = (((uint)*(ushort *)(puVar11 + 0x1a) + iVar10) * *(int *)(uVar9 + 0x1c) +
                   (uint)*(ushort *)(puVar11 + 0x18)) * *(int *)(uVar9 + 0x24) +
                   *(int *)(uVar9 + 0x28);
          if (1 < iVar6) {
            *(ulonglong *)(puVar11 + -8) = (ulonglong)uVar13;
            *(undefined8 *)(puVar11 + -0x10) = 0;
            *(ulonglong *)(puVar11 + -0x18) = (ulonglong)uVar12;
            *(undefined8 *)(puVar11 + -0x20) = 0x1407e9d60;
            FUN_1408b3720();
            puVar11 = (undefined1 *)(ulonglong)((int)(puVar11 + -0x18) + 0xc);
            fVar16 = _DAT_150aa0e48;
          }
          if (iVar10 != 0) {
            *(ulonglong *)(puVar11 + -8) = uVar7;
            *(undefined8 *)(puVar11 + -0x10) = 0xff;
            *(ulonglong *)(puVar11 + -0x18) = (ulonglong)(uVar12 + uVar13);
            *(undefined8 *)(puVar11 + -0x20) = 0x1407e9d7e;
            FUN_1408b3720();
            puVar11 = (undefined1 *)(ulonglong)((int)(puVar11 + -0x18) + 0xc);
            fVar16 = _DAT_150aa0e66;
          }
          if (0 < (int)uVar8) {
            *(ulonglong *)(puVar11 + -8) = (ulonglong)uVar8;
            *(undefined8 *)(puVar11 + -0x10) = 0;
            *(ulonglong *)(puVar11 + -0x18) = (ulonglong)(uVar12 + uVar13 + iVar10);
            *(undefined8 *)(puVar11 + -0x20) = 0x1407e9d9e;
            FUN_1408b3720();
            puVar11 = (undefined1 *)(ulonglong)((int)(puVar11 + -0x18) + 0xc);
            fVar16 = _DAT_150aa0e86;
          }
        }
      }
      uVar2 = *(ushort *)(puVar11 + 0x18);
      fVar1 = *(float *)((ulonglong)*(uint *)(puVar11 + 0x14) + 0x44);
      fVar15 = *(float *)((ulonglong)*(uint *)(puVar11 + 0x14) + 0x48);
      fVar15 = ((float)(int)(iVar10 + 1 + (uint)*(ushort *)(puVar11 + 0x1a)) * fVar15 +
               (float)(int)(iVar10 + (uint)*(ushort *)(puVar11 + 0x1a)) * fVar15) * fVar16;
      uVar9 = (ulonglong)(uint)(iVar10 << 4);
      uVar7 = (ulonglong)*(uint *)(puVar11 + 0x10);
      *(float *)(uVar7 + uVar9) = (float)(int)((uVar13 - 1) + (uint)uVar2) * fVar1;
      *(float *)(uVar7 + 4 + uVar9) = fVar15;
      *(float *)(uVar7 + 8 + uVar9) = (float)(int)(iVar10 + 1 + uVar13 + uVar2) * fVar1;
      *(float *)(uVar7 + 0xc + uVar9) = fVar15;
      uVar7 = (ulonglong)(iVar10 + 1U);
    } while (iVar10 + 1U != 0x21);
  }
  if (_DAT_150b72bb5 != (*(uint *)(puVar11 + 0x30) ^ (uint)puVar11)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar11 + -8) = FUN_1407e9ecc;
    FUN_1408802b0(*(uint *)(puVar11 + 0x30) ^ (uint)puVar11);
  }
  return;
}


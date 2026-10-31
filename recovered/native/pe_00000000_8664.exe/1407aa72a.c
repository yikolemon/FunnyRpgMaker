/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa72a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1407aa72a(uint param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  ulonglong unaff_RDI;
  
  uVar12 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x34);
  uVar19 = (ulonglong)param_1;
  pcVar9 = (char *)(ulonglong)_DAT_14ccb88b1039d74c;
  *pcVar9 = *pcVar9 + (char)_DAT_14ccb88b1039d74c;
  fVar1 = *(float *)(pcVar9 + 0xd10);
  fVar2 = *(float *)(pcVar9 + 0x1228);
  uVar18 = *(undefined4 *)(unaff_RDI + 0x144);
  *(undefined4 *)(uVar12 + 0xc) = *(undefined4 *)(unaff_RDI + 0x148);
  uVar3 = *(undefined4 *)(uVar19 + 0x34);
  *(float *)(unaff_RDI + 0x144) = *(float *)(uVar19 + 0x30) - fVar1;
  *(undefined4 *)(unaff_RDI + 0x148) = uVar3;
  *(float *)(uVar19 + 0x30) = fVar2 + fVar1 + *(float *)(uVar19 + 0x30);
  uVar11 = *(undefined8 *)(pcVar9 + 0xe08);
  puVar10 = (undefined8 *)(uVar12 + 0x20 & 0xffffffff);
  *puVar10 = *(undefined8 *)(pcVar9 + 0xe00);
  puVar10[1] = uVar11;
  *(float *)((longlong)puVar10 + 0xc) = *(float *)((longlong)puVar10 + 0xc) * _DAT_150a6188c;
  *(undefined8 **)(uVar12 - 8) = puVar10;
  *(undefined8 *)(uVar12 - 0x10) = 0;
  *(undefined8 *)(uVar12 - 0x18) = 0x1407aa7ba;
  FUN_140754c50();
  uVar13 = (ulonglong)((int)(uVar12 - 0x10) + 8);
  puVar10 = (undefined8 *)(uVar13 + 0x10 & 0xffffffff);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(uVar13 - 8) = puVar10;
  *(undefined8 *)(uVar13 - 0x10) = 0x16;
  *(undefined8 *)(uVar13 - 0x18) = 0x1407aa7cf;
  FUN_140754c50();
  uVar14 = (ulonglong)((int)(uVar13 - 0x10) + 8);
  *(undefined8 *)(uVar14 - 8) = 0x50;
  *(undefined4 *)(uVar14 - 4) = 0;
  *(undefined8 *)(uVar14 - 0x10) = 0;
  *(undefined8 *)(uVar14 - 0x18) = 0x10330e62;
  *(undefined8 *)(uVar14 - 0x20) = 0x1407aa7e7;
  cVar6 = FUN_14078ab18();
  uVar15 = (ulonglong)((int)(uVar14 - 0x18) + 0xc);
  *(undefined8 *)(uVar15 - 8) = 2;
  *(undefined8 *)(uVar15 - 0x10) = 0x1407aa7f3;
  FUN_140754d5e();
  puVar16 = (uint *)(ulonglong)((int)(uVar15 - 8) + 4);
  if (cVar6 != '\0') {
    puVar16[1] = uVar18;
    puVar16[2] = (int)unaff_RDI;
    iVar7 = *(int *)(uVar19 + 4);
    if (iVar7 < 1) {
      *puVar16 = 0;
    }
    else {
      *puVar16 = 0;
      do {
        uVar4 = *(uint *)(uVar19 + 0xc);
        if ((*(byte *)((ulonglong)uVar4 + 6) & 0x20) == 0) {
          *(int **)((longlong)puVar16 + -8) = (int *)(ulonglong)uVar4;
          *(ulonglong *)((longlong)puVar16 + -0x10) = uVar19;
          *(undefined8 *)((longlong)puVar16 + -0x18) = 0x1407aa82b;
          uVar11 = FUN_1407a7578();
          uVar17 = (ulonglong)((int)(undefined1 *)((longlong)puVar16 + -0x10) + 8);
          *(undefined8 *)(uVar17 + 0x10) = 0;
          iVar5 = *(int *)(uVar19 + 0x18);
          iVar7 = *(int *)(ulonglong)uVar4;
          *(ulonglong *)(uVar17 - 8) = uVar17 + 0x10 & 0xffffffff;
          *(undefined8 *)(uVar17 - 0x10) = 0;
          *(ulonglong *)(uVar17 - 0x18) = (ulonglong)(iVar5 == iVar7);
          *(undefined8 *)(uVar17 - 0x20) = uVar11;
          *(undefined8 *)(uVar17 - 0x28) = 0x1407aa84f;
          cVar6 = FUN_14078b5f7();
          puVar16 = (uint *)(ulonglong)((int)(uVar17 - 0x20) + 0x10);
          uVar8 = *puVar16;
          if (cVar6 != '\0') {
            uVar8 = uVar4;
          }
          *puVar16 = uVar8;
          iVar7 = *(int *)(uVar19 + 4);
        }
      } while (0 < iVar7);
    }
    *(undefined8 *)((longlong)puVar16 + -8) = 0x1407aa876;
    FUN_14078b377();
    unaff_RDI = (ulonglong)*(uint *)((longlong)puVar16 + 8);
    uVar18 = *(undefined4 *)((longlong)puVar16 + 4);
  }
  *(undefined4 *)(unaff_RDI + 0x144) = uVar18;
  *(uint *)(unaff_RDI + 0x148) = puVar16[3];
  if (_DAT_150b3359a != (puVar16[0xc] ^ (uint)puVar16)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar16 + -2) = FUN_1407aa8b4;
    FUN_1408802b0(puVar16[0xc] ^ (uint)puVar16);
  }
  return *puVar16;
}


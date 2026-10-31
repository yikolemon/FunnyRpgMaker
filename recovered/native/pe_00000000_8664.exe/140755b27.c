/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140755b27 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140755b27(void)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined1 *puVar13;
  float10 in_ST0;
  
  puVar10 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x50);
  uVar3 = *(uint *)((longlong)puVar10 + 0x7c);
  uVar8 = (ulonglong)*(uint *)((longlong)puVar10 + 0x78);
  if (*(uint *)((longlong)puVar10 + 0x78) == 0) {
    *(undefined8 *)((longlong)puVar10 + -8) = 0;
    *(undefined8 *)((longlong)puVar10 + -0x10) = *(undefined8 *)((longlong)puVar10 + 0x70);
    *(undefined8 *)((longlong)puVar10 + -0x18) = 0x140755b59;
    uVar8 = FUN_14075544d();
    puVar10 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -0x10) + 8);
    uVar8 = uVar8 & 0xffffffff;
  }
  uVar4 = *(uint *)((longlong)puVar10 + 0x6c);
  uVar5 = *(uint *)((longlong)puVar10 + 0x68);
  if (uVar3 == 0) {
    puVar1 = (undefined1 *)((longlong)puVar10 + 0x44);
    *(undefined8 *)((longlong)puVar10 + -8) = 0;
    *(undefined8 *)((longlong)puVar10 + -0x10) = 0;
    *(ulonglong *)((longlong)puVar10 + -0x18) = uVar8;
    *(undefined8 *)((longlong)puVar10 + -0x20) = *(undefined8 *)((longlong)puVar10 + 0x68);
    *(float **)((longlong)puVar10 + -0x28) = (float *)((ulonglong)puVar1 & 0xffffffff);
    *(undefined8 *)((longlong)puVar10 + -0x30) = 0x140755b95;
    FUN_1407559fe();
    puVar10 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -0x28) + 0x14);
    fVar6 = *(float *)((ulonglong)puVar1 & 0xffffffff);
  }
  else {
    fVar6 = *(float *)(ulonglong)uVar3;
    *(float *)((longlong)puVar10 + 0x48) = ((float *)(ulonglong)uVar3)[1];
    *(float *)((longlong)puVar10 + 0x44) = fVar6;
  }
  pfVar9 = (float *)(ulonglong)uVar4;
  uVar3 = puVar10[0x19];
  if (*pfVar9 - *(float *)(ulonglong)uVar5 < fVar6) {
    uVar8 = (ulonglong)*(uint *)((ulonglong)uVar3 + 0x2c);
    uVar3 = *(uint *)(uVar8 + 0x10);
    uVar7 = *(undefined4 *)(uVar8 + 0x14);
    puVar10[1] = uVar7;
    *puVar10 = *(undefined4 *)(uVar8 + 0x18);
    *(undefined4 *)((ulonglong)(puVar10 + 0x10) & 0xffffffff) = 0;
    puVar11 = (undefined4 *)(ulonglong)((int)puVar10 - 8);
    *puVar11 = uVar7;
    puVar11[1] = 0xbf800000;
    *(undefined8 *)(puVar11 + -2) = 0x140755bf0;
    uVar7 = FUN_1407e80f8();
    uVar2 = *(ushort *)((ulonglong)uVar3 + 0x24);
    puVar11[2] = uVar3;
    *(ulonglong *)(puVar11 + -2) = (ulonglong)uVar2;
    *(undefined8 *)(puVar11 + -4) = 0x140755c00;
    FUN_1407eae88(uVar7);
    puVar11[3] = (float)in_ST0;
    puVar11[-2] = (float)puVar11[-2] * (float)puVar11[3];
    fVar6 = *pfVar9;
    pfVar12 = (float *)(ulonglong)((int)(puVar11 + -2) - 8);
    pfVar12[1] = pfVar12[0x1e];
    *pfVar12 = fVar6;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pfVar12 + -2) = &UNK_140755c31;
    FUN_140755a9a();
  }
  *(undefined8 *)((ulonglong)(puVar10 + 0xc) & 0xffffffff) = 0;
  *(undefined8 *)(puVar10 + -2) = 0;
  *(undefined8 **)(puVar10 + -4) = (undefined8 *)((ulonglong)(puVar10 + 0xc) & 0xffffffff);
  *(ulonglong *)(puVar10 + -6) = (ulonglong)(puVar10 + 0x11) & 0xffffffff;
  *(ulonglong *)(puVar10 + -8) = uVar8;
  *(undefined8 *)(puVar10 + -10) = *(undefined8 *)(puVar10 + 0x19);
  *(float **)(puVar10 + -0xc) = pfVar9;
  *(float **)(puVar10 + -0xe) = (float *)(ulonglong)uVar5;
  *(ulonglong *)(puVar10 + -0x10) = (ulonglong)uVar3;
  *(undefined8 *)(puVar10 + -0x12) = 0x140755d78;
  FUN_140755813();
  puVar13 = (undefined1 *)(ulonglong)((int)(puVar10 + -0x10) + 0x20);
  if (*(char *)((ulonglong)*(uint *)(puVar13 + 0xc) + 0x2748) == '\x01') {
    *(ulonglong *)(puVar13 + -8) = uVar8;
    *(undefined8 *)(puVar13 + -0x10) = *(undefined8 *)(puVar13 + 0x70);
    *(ulonglong *)(puVar13 + -0x18) = (ulonglong)uVar5;
    *(undefined8 *)(puVar13 + -0x20) = 0x140755d93;
    FUN_140755578();
    puVar13 = (undefined1 *)(ulonglong)((int)(puVar13 + -0x18) + 0xc);
  }
  if (_DAT_150adeaa2 == (*(uint *)(puVar13 + 0x4c) ^ (uint)puVar13)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar13 + -8) = FUN_140755db9;
  FUN_1408802b0(*(uint *)(puVar13 + 0x4c) ^ (uint)puVar13);
}


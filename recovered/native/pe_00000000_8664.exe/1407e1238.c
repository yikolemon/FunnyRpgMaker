/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e1238 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001407e140d) */
/* WARNING: Removing unreachable block (ram,0x0001407e1444) */
/* WARNING: Removing unreachable block (ram,0x0001407e1474) */
/* WARNING: Removing unreachable block (ram,0x0001407e147e) */
/* WARNING: Removing unreachable block (ram,0x0001407e1482) */
/* WARNING: Removing unreachable block (ram,0x0001407e1489) */
/* WARNING: Removing unreachable block (ram,0x0001407e1565) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e1238(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int unaff_R13D;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  puVar13 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x20);
  uVar11 = (ulonglong)param_1;
  uVar10 = puVar13[0xf];
  uVar9 = puVar13[0xe];
  if (uVar10 < 0x1000000 || (int)uVar9 < 3) {
    return;
  }
  uVar3 = puVar13[0xd];
  uVar4 = *(uint *)(uVar11 + 0x2c);
  puVar13[3] = *(undefined4 *)(ulonglong)uVar4;
  *puVar13 = ((undefined4 *)(ulonglong)uVar4)[1];
  if ((*(byte *)(uVar11 + 0x24) & 4) != 0) {
    puVar13[1] = *(undefined4 *)(uVar11 + 0xa8);
    puVar13[7] = uVar10 & 0xffffff;
    puVar13[4] = uVar9 * 2;
    *(ulonglong *)(puVar13 + -2) = (ulonglong)(uVar9 * 2);
    puVar14 = puVar13 + -4;
    *(ulonglong *)(puVar13 + -4) = (ulonglong)(uVar9 * 9 - 6);
    *(undefined8 *)(puVar13 + -6) = 0x1407e1337;
    FUN_1407e03e6(uVar11);
    iVar6 = *(int *)(uVar11 + 0x28);
    uVar10 = *(uint *)(uVar11 + 0x34);
    puVar13[2] = iVar6 + 1;
    iVar7 = iVar6 + 2;
    do {
      *(short *)(ulonglong)uVar10 = (short)iVar6;
      *(short *)((ulonglong)*(uint *)(uVar11 + 0x34) + 2) = (short)iVar7;
      iVar7 = iVar7 + 2;
      *(short *)((ulonglong)*(uint *)(uVar11 + 0x34) + 4) = (short)iVar7;
      uVar10 = *(int *)(uVar11 + 0x34) + 6;
      *(uint *)(uVar11 + 0x34) = uVar10;
    } while (unaff_R13D != 2);
    uVar12 = (ulonglong)*(uint *)(uVar11 + 0x2c);
    if (*(int *)(uVar12 + 0x40) < (int)uVar9) {
      if (*(uint *)(uVar12 + 0x44) != 0) {
        *(ulonglong *)(puVar13 + -6) = (ulonglong)*(uint *)(uVar12 + 0x44);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar13 + -8) = &UNK_1407e1383;
        FUN_14075219b();
      }
      *(ulonglong *)(puVar13 + -6) = (ulonglong)(uVar9 * 8);
      *(undefined8 *)(puVar13 + -8) = 0x1407e1393;
      uVar8 = FUN_1407520ca();
      puVar14 = (undefined4 *)(ulonglong)((int)(puVar13 + -6) + 4);
      *(undefined4 *)(uVar12 + 0x44) = uVar8;
      *(uint *)(uVar12 + 0x40) = uVar9;
      uVar12 = (ulonglong)*(uint *)(uVar11 + 0x2c);
    }
    uVar10 = *(uint *)(uVar12 + 0x44);
    *(uint *)((longlong)puVar14 + 8) = uVar9 - 1;
    uVar3 = *(uint *)((longlong)puVar14 + 0x34);
    uVar11 = (ulonglong)(uVar9 - 1);
    do {
      uVar1 = *(undefined8 *)(ulonglong)uVar3;
      uVar2 = ((undefined8 *)(ulonglong)uVar3)[uVar11];
      fVar15 = (float)uVar1 - (float)uVar2;
      fVar16 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
      auVar17._0_4_ = fVar15 * fVar15 + fVar16 * fVar16;
      auVar17._4_4_ = fVar16;
      auVar17._8_8_ = 0;
      if (0.0 < auVar17._0_4_) {
        auVar17 = rsqrtss(auVar17,auVar17);
        fVar15 = fVar15 * auVar17._0_4_;
        fVar16 = fVar16 * auVar17._0_4_;
      }
      *(float *)((ulonglong)uVar10 + uVar11 * 8) = fVar16;
      *(uint *)((ulonglong)uVar10 + 4 + uVar11 * 8) = (uint)fVar15 ^ _DAT_150a709d1;
      uVar11 = 0;
    } while( true );
  }
  *(ulonglong *)(puVar13 + -2) = (ulonglong)uVar9;
  *(ulonglong *)(puVar13 + -4) = (ulonglong)(uVar9 * 3 - 6);
  *(undefined8 *)(puVar13 + -6) = 0x1407e128c;
  FUN_1407e03e6(uVar11);
  uVar9 = *(uint *)(uVar11 + 0x30);
  uVar8 = puVar13[-1];
  uVar5 = puVar13[-4];
  do {
    *(undefined8 *)(ulonglong)uVar9 = *(undefined8 *)(ulonglong)uVar3;
    uVar9 = *(uint *)(uVar11 + 0x30);
    *(undefined4 *)((ulonglong)uVar9 + 0xc) = uVar5;
    *(undefined4 *)((ulonglong)uVar9 + 8) = uVar8;
    *(uint *)((ulonglong)*(uint *)(uVar11 + 0x30) + 0x10) = uVar10;
    uVar9 = *(int *)(uVar11 + 0x30) + 0x14;
    *(uint *)(uVar11 + 0x30) = uVar9;
  } while (puVar13[10] != 0);
  *(undefined2 *)(ulonglong)*(uint *)(uVar11 + 0x34) = *(undefined2 *)(uVar11 + 0x28);
  *(undefined2 *)((ulonglong)*(uint *)(uVar11 + 0x34) + 2) = *(undefined2 *)(uVar11 + 0x28);
  *(short *)((ulonglong)*(uint *)(uVar11 + 0x34) + 4) = (short)*(undefined4 *)(uVar11 + 0x28) + 2;
  *(int *)(uVar11 + 0x34) = *(int *)(uVar11 + 0x34) + 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


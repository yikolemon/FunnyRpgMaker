/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e0774 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e0774(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  
  puVar7 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x4c);
  uVar9 = (ulonglong)param_1;
  iVar1 = puVar7[0x19];
  if (0xffffff < (uint)puVar7[0x1a] && 1 < iVar1) {
    if (((uint)puVar7[0x1c] >> 9 & 1) == 0) {
      iVar1 = iVar1 + -1;
    }
    if ((puVar7[0x1c] & 0x8000000f) == 0) {
      puVar6 = (undefined8 *)(ulonglong)(uint)puVar7[0x18];
      uVar2 = *(uint *)(uVar9 + 0x2c);
      puVar7[7] = *(undefined4 *)(ulonglong)uVar2;
      puVar7[4] = ((undefined4 *)(ulonglong)uVar2)[1];
      if ((*(byte *)(uVar9 + 0x24) & 1) == 0) {
        *(ulonglong *)(puVar7 + -2) = (ulonglong)(uint)(iVar1 * 4);
        *(ulonglong *)(puVar7 + -4) = (ulonglong)(uint)(iVar1 * 6);
        *(undefined8 *)(puVar7 + -6) = 0x1407e0801;
        FUN_1407e03e6(uVar9);
        fVar14 = (float)puVar7[0x17] * _DAT_150a978ef;
        puVar7[-4] = -iVar1;
        fVar13 = (float)puVar6[-1];
        fVar10 = (float)*puVar6 - fVar13;
        fVar11 = (float)((ulonglong)*puVar6 >> 0x20) - (float)((ulonglong)puVar6[-1] >> 0x20);
        auVar12._0_4_ = fVar10 * fVar10 + fVar11 * fVar11;
        auVar12._4_4_ = fVar11;
        auVar12._8_8_ = 0;
        if (0.0 < auVar12._0_4_) {
          auVar12 = rsqrtss(auVar12,auVar12);
          fVar10 = fVar10 * auVar12._0_4_;
          fVar11 = fVar11 * auVar12._0_4_;
        }
        fVar10 = fVar14 * fVar10;
        fVar11 = fVar11 * fVar14;
        *(float *)(ulonglong)*(uint *)(uVar9 + 0x30) = fVar13 + fVar11;
        *(float *)((ulonglong)*(uint *)(uVar9 + 0x30) + 4) =
             *(float *)((longlong)puVar6 + -4) - fVar10;
        uVar2 = *(uint *)(uVar9 + 0x30);
        uVar3 = *puVar7;
        *(undefined4 *)((ulonglong)uVar2 + 0xc) = uVar3;
        uVar4 = puVar7[3];
        *(undefined4 *)((ulonglong)uVar2 + 8) = uVar4;
        uVar5 = puVar7[0x16];
        *(undefined4 *)((ulonglong)*(uint *)(uVar9 + 0x30) + 0x10) = uVar5;
        *(float *)((ulonglong)*(uint *)(uVar9 + 0x30) + 0x14) =
             *(float *)(ulonglong)(uint)puVar7[0x14] + fVar11;
        *(float *)((ulonglong)*(uint *)(uVar9 + 0x30) + 0x18) =
             *(float *)((ulonglong)(uint)puVar7[0x14] + 4) - fVar10;
        uVar2 = *(uint *)(uVar9 + 0x30);
        *(undefined4 *)((ulonglong)uVar2 + 0x20) = uVar3;
        *(undefined4 *)((ulonglong)uVar2 + 0x1c) = uVar4;
        *(undefined4 *)((ulonglong)*(uint *)(uVar9 + 0x30) + 0x24) = uVar5;
        *(float *)((ulonglong)*(uint *)(uVar9 + 0x30) + 0x28) =
             *(float *)(ulonglong)(uint)puVar7[0x14] - fVar11;
        *(float *)((ulonglong)*(uint *)(uVar9 + 0x30) + 0x2c) =
             *(float *)((ulonglong)(uint)puVar7[0x14] + 4) + fVar10;
        uVar2 = *(uint *)(uVar9 + 0x30);
        *(undefined4 *)((ulonglong)uVar2 + 0x34) = uVar3;
        *(undefined4 *)((ulonglong)uVar2 + 0x30) = uVar4;
        *(undefined4 *)((ulonglong)*(uint *)(uVar9 + 0x30) + 0x38) = uVar5;
        *(float *)((ulonglong)*(uint *)(uVar9 + 0x30) + 0x3c) =
             *(float *)((ulonglong)(uint)puVar7[0x14] - 8) - fVar11;
        *(float *)((ulonglong)*(uint *)(uVar9 + 0x30) + 0x40) =
             fVar10 + *(float *)((ulonglong)(uint)puVar7[0x14] - 4);
        uVar2 = *(uint *)(uVar9 + 0x30);
        *(undefined4 *)((ulonglong)uVar2 + 0x48) = uVar3;
        *(undefined4 *)((ulonglong)uVar2 + 0x44) = uVar4;
        *(undefined4 *)((ulonglong)*(uint *)(uVar9 + 0x30) + 0x4c) = uVar5;
        *(int *)(uVar9 + 0x30) = *(int *)(uVar9 + 0x30) + 0x50;
        *(undefined2 *)(ulonglong)*(uint *)(uVar9 + 0x34) = *(undefined2 *)(uVar9 + 0x28);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 (*) [16])(puVar7 + 0xb) = ZEXT416(*(uint *)(uVar9 + 0xa8));
      puVar8 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x54);
      *puVar8 = puVar7[0x1b];
      puVar8[1] = 0x3f800000;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar8 + -2) = &UNK_1407e09de;
      FUN_140755a9a();
    }
    *(undefined8 *)(puVar7 + -2) = 0x1033cee8;
    *(undefined8 *)(puVar7 + -4) = 0x1407e07bd;
    FUN_140754dc5();
  }
  return;
}


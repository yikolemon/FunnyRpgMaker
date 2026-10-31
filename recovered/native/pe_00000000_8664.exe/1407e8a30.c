/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e8a30 */

void FUN_1407e8a30(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong in_FS_OFFSET;
  char cVar16;
  char cVar17;
  undefined4 *puVar5;
  
  uVar14 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar3 = (uint)&stack0xffffffffffffffe0;
  puVar11 = (undefined1 *)(ulonglong)(uVar3 - 0x7c);
  uVar2 = (int)&stack0xfffffffffffffff8 - 0x18;
  puVar5 = (undefined4 *)(ulonglong)uVar2;
  puVar5[-1] = uVar3 - 0x7c;
  puVar5[2] = 0xffffffff;
  puVar5[1] = 0x10195ff0;
  *puVar5 = *(undefined4 *)(in_FS_OFFSET + 0x1407e8a54);
  *(uint *)(in_FS_OFFSET + 0x39d74ca100000000) = uVar2;
  *(char *)(uVar14 - 0x6fd78b40) = *(char *)(uVar14 - 0x6fd78b40) + (char)uVar2 + (uVar3 < 0x7c);
  if ((*(byte *)((longlong)puVar5 + 0x27b5) & 1) != 0) {
    puVar12 = (undefined4 *)(ulonglong)(uVar3 - 0x88);
    *(double *)(puVar12 + 1) = (double)*(float *)(uVar14 + 0x10);
    *puVar12 = 0x1034c88a;
    *(undefined8 *)(puVar12 + -2) = 0x1407e8a8a;
    FUN_1407518b6();
    puVar11 = (undefined1 *)(ulonglong)(uVar3 - 0x7c);
  }
  *(undefined4 *)(uVar14 - 0x24) = *(undefined4 *)((ulonglong)*(uint *)(uVar14 + 8) + 0x290);
  *(undefined8 *)(puVar11 + -8) = 0x1407e8aa5;
  FUN_1407e8de4((int)&stack0xfffffffffffffff8 + -0x88);
  *(undefined4 *)(uVar14 - 0x10) = 3;
  uVar2 = *(uint *)(uVar14 - 0x24);
  uVar6 = (ulonglong)uVar2;
  uVar3 = *(uint *)(uVar6 + 0xac);
  if (uVar3 == *(uint *)(uVar6 + 0xb0)) {
    *(uint *)(uVar14 - 0x34) = uVar3;
    uVar8 = uVar3 + 0x1f;
    if (-1 < (int)uVar3) {
      uVar8 = uVar3;
    }
    *(uint *)(uVar14 - 0x30) = uVar3 + 0x3f;
    iVar15 = (int)(uVar3 + 0x3f) >> 5;
    *(int *)(uVar14 - 0x2c) = (int)uVar8 >> 5;
    if ((int)uVar8 >> 5 < iVar15) {
      uVar10 = (ulonglong)uVar2;
      iVar9 = *(int *)(uVar6 + 0xb8);
      *(int *)(uVar14 - 0x20) = iVar15;
      if (iVar9 < iVar15) {
        if (iVar9 == 0) {
          iVar9 = 8;
        }
        else {
          iVar9 = iVar9 / 2 + iVar9;
        }
        if (iVar9 <= *(int *)(uVar14 - 0x20)) {
          iVar9 = *(int *)(uVar14 - 0x20);
        }
        *(int *)(uVar14 - 0x28) = iVar9;
        *(ulonglong *)(puVar11 + -8) = (ulonglong)(uint)(iVar9 * 4);
        *(undefined8 *)(puVar11 + -0x10) = 0x1407e8b32;
        uVar3 = FUN_1407520ca();
        puVar11 = (undefined1 *)(ulonglong)((int)(puVar11 + -8) + 4);
        uVar2 = *(uint *)((ulonglong)*(uint *)(uVar14 - 0x24) + 0xbc);
        if (uVar2 != 0) {
          uVar8 = *(uint *)(uVar14 - 0x24);
          *(ulonglong *)(puVar11 + -8) = (ulonglong)(uint)(*(int *)((ulonglong)uVar8 + 0xb4) << 2);
          *(ulonglong *)(puVar11 + -0x10) = (ulonglong)uVar2;
          *(ulonglong *)(puVar11 + -0x18) = (ulonglong)uVar3;
          *(uint *)(uVar14 - 0x38) = uVar3;
          *(undefined8 *)(puVar11 + -0x20) = 0x1407e8b5c;
          FUN_1408b31a0();
          *(undefined8 *)((ulonglong)((int)(puVar11 + -0x18) + 0xc) - 8) =
               *(undefined8 *)((ulonglong)uVar8 + 0xbc);
                    /* WARNING: Subroutine does not return */
          *(undefined **)((ulonglong)((int)(puVar11 + -0x18) + 0xc) - 0x10) = &UNK_1407e8b6a;
          FUN_14075219b();
        }
        uVar10 = (ulonglong)*(uint *)(uVar14 - 0x24);
        *(uint *)(uVar10 + 0xbc) = uVar3;
        *(undefined4 *)(uVar10 + 0xb8) = *(undefined4 *)(uVar14 - 0x28);
      }
      *(uint *)(uVar14 - 0x30) = *(uint *)(uVar14 - 0x30) & 0xffffffe0;
      *(undefined4 *)(uVar10 + 0xb4) = *(undefined4 *)(uVar14 - 0x20);
      *(undefined4 *)(uVar14 - 0x28) = *(undefined4 *)(uVar14 - 0x2c);
      do {
        *(undefined8 *)(puVar11 + -8) = 0xa00;
        *(undefined8 *)(puVar11 + -0x10) = 0x1407e8ba3;
        uVar4 = FUN_1407520ca();
        puVar11 = (undefined1 *)(ulonglong)((int)(puVar11 + -8) + 4);
        uVar2 = *(uint *)(uVar14 - 0x28);
        *(undefined4 *)
         ((ulonglong)*(uint *)((ulonglong)*(uint *)(uVar14 - 0x24) + 0xbc) + (ulonglong)uVar2 * 4) =
             uVar4;
        *(uint *)(uVar14 - 0x28) = uVar2;
      } while (uVar2 != *(uint *)(uVar14 - 0x20));
      uVar6 = (ulonglong)*(uint *)(uVar14 - 0x24);
      *(undefined4 *)(uVar6 + 0xb0) = *(undefined4 *)(uVar14 - 0x30);
    }
    uVar3 = *(uint *)(uVar14 - 0x34);
    uVar2 = *(uint *)(uVar14 - 0x2c);
  }
  else {
    uVar2 = uVar3 + 0x1f;
    if (-1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    uVar2 = (int)uVar2 >> 5;
  }
  uVar8 = uVar3 + 0x1f;
  if (-1 < (int)uVar3) {
    uVar8 = uVar3;
  }
  uVar2 = (uVar3 - (uVar8 & 0xfffffe0)) * 0x50 +
          *(int *)((ulonglong)*(uint *)(uVar6 + 0xbc) + (ulonglong)uVar2 * 4);
  *(undefined8 *)(puVar11 + -8) = 0x50;
  *(ulonglong *)(puVar11 + -0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x88);
  *(uint *)(uVar14 - 0x20) = uVar2;
  *(ulonglong *)(puVar11 + -0x18) = (ulonglong)uVar2;
  *(undefined8 *)(puVar11 + -0x20) = 0x1407e8c05;
  FUN_1408b31a0();
  puVar13 = (undefined1 *)(ulonglong)((int)(puVar11 + -0x18) + 0xc);
  *(int *)(uVar6 + 0xac) = *(int *)(uVar6 + 0xac) + 1;
  *(undefined4 *)(uVar14 - 0x10) = 0xffffffff;
  *(undefined4 *)(uVar14 - 0x10) = 0;
  *(undefined4 *)(uVar14 - 0x10) = 1;
  *(undefined4 *)(uVar14 - 0x10) = 2;
  *(undefined4 *)(uVar14 - 0x10) = 0xffffffff;
  if (*(uint *)(uVar14 - 0x5c) != 0) {
    *(ulonglong *)(puVar13 + -8) = (ulonglong)*(uint *)(uVar14 - 0x5c);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar13 + -0x10) = &UNK_1407e8c44;
    FUN_14075219b();
  }
  if (*(uint *)(uVar14 - 0x68) != 0) {
    *(ulonglong *)(puVar13 + -8) = (ulonglong)*(uint *)(uVar14 - 0x68);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar13 + -0x10) = &UNK_1407e8c56;
    FUN_14075219b();
  }
  uVar4 = *(undefined4 *)(uVar14 + 0x18);
  uVar2 = *(uint *)(uVar14 + 0xc);
  uVar6 = (ulonglong)uVar2;
  if (*(uint *)(uVar14 - 0x80) != 0) {
    *(ulonglong *)(puVar13 + -8) = (ulonglong)*(uint *)(uVar14 - 0x80);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar13 + -0x10) = &UNK_1407e8c6e;
    FUN_14075219b();
  }
  uVar10 = (ulonglong)*(uint *)(uVar14 - 0x20);
  *(undefined4 *)(uVar10 + 0x10) = *(undefined4 *)(uVar14 + 0x10);
  *(undefined4 *)(uVar10 + 0x14) = *(undefined4 *)(uVar14 + 0x14);
  *(undefined4 *)(uVar10 + 0x44) = uVar4;
  *(uint *)(uVar10 + 0x48) = uVar2;
  *(undefined4 *)(uVar10 + 0x40) =
       *(undefined4 *)((ulonglong)*(uint *)((ulonglong)*(uint *)(uVar14 + 8) + 0x290) + 0x94);
  if (*(int *)(uVar6 + 0x18) != 0) {
    uVar7 = 0;
    uVar10 = 0;
    do {
      uVar2 = *(uint *)((ulonglong)*(uint *)(*(uint *)(uVar6 + 0x20) + uVar7) + 0x74);
      if (uVar2 == 0) {
        uVar2 = *(uint *)((ulonglong)*(uint *)(uVar14 + 8) + 0x294);
      }
      uVar2 = (int)uVar10 + *(int *)((ulonglong)uVar2 + 0x24);
      uVar10 = (ulonglong)uVar2;
      uVar3 = (int)uVar7 + 4;
      uVar7 = (ulonglong)uVar3;
    } while (*(int *)(uVar6 + 0x18) << 2 != uVar3);
    if (uVar2 != 0) {
      *(undefined4 *)(uVar14 - 0x10) = 0xffffffff;
      *(ulonglong *)(puVar13 + -8) = uVar10;
      *(undefined8 *)(puVar13 + -0x10) = 0x1407e8ce3;
      uVar2 = FUN_1407520ca();
      puVar13 = (undefined1 *)(ulonglong)((int)(puVar13 + -8) + 4);
      uVar10 = (ulonglong)uVar2;
      goto code_r0x0001407e8ced;
    }
  }
  uVar10 = 0;
code_r0x0001407e8ced:
  *(int *)((ulonglong)*(uint *)(uVar14 - 0x20) + 0x4c) = (int)uVar10;
  iVar15 = *(int *)(uVar6 + 0x18);
  *(int *)(uVar14 - 0x28) = iVar15;
  cVar17 = false;
  iVar9 = 0;
  if (iVar15 != 0) {
    *(undefined4 *)(uVar14 - 0x24) = *(undefined4 *)(uVar6 + 0x20);
    *(int *)(uVar14 - 0x28) = *(int *)(uVar14 - 0x28) << 2;
    uVar6 = 0;
    do {
      uVar7 = (ulonglong)*(uint *)(*(uint *)(uVar14 - 0x24) + uVar6);
      uVar2 = *(uint *)(uVar7 + 0x74);
      if (uVar2 == 0) {
        uVar2 = *(uint *)((ulonglong)*(uint *)(uVar14 + 8) + 0x294);
      }
      uVar3 = *(uint *)((ulonglong)uVar2 + 0x18);
      if (uVar3 != 0) {
        *(undefined4 *)(uVar14 - 0x10) = 0xffffffff;
        *(ulonglong *)(puVar13 + -8) = uVar10;
        *(undefined8 *)(puVar13 + -0x10) = *(undefined8 *)(uVar14 - 0x20);
        *(ulonglong *)(puVar13 + -0x18) = uVar7;
        *(undefined8 *)(puVar13 + -0x20) = *(undefined8 *)(uVar14 + 8);
        *(undefined8 *)(puVar13 + -0x28) = 0x1407e8d3b;
        (*(code *)(ulonglong)uVar3)();
        puVar13 = (undefined1 *)(ulonglong)((int)(puVar13 + -0x20) + 0x10);
      }
      uVar10 = (ulonglong)(uint)((int)uVar10 + *(int *)((ulonglong)uVar2 + 0x24));
      uVar3 = (int)uVar6 + 4;
      uVar6 = (ulonglong)uVar3;
      uVar2 = *(uint *)(uVar14 - 0x28);
      cVar17 = SBORROW4(uVar2,uVar3);
      iVar9 = uVar2 - uVar3;
    } while (uVar2 != uVar3);
  }
  cVar16 = iVar9 < 0;
  *(undefined4 *)(uVar14 - 0x10) = 0xffffffff;
  uVar4 = *(undefined4 *)(uVar14 + 8);
  uVar1 = *(undefined4 *)(uVar14 - 0x20);
  *(undefined8 *)(puVar13 + -8) = 0x1407e8d5f;
  FUN_1407e8e70(uVar4,uVar1);
  *(undefined4 *)(in_FS_OFFSET + -0x3b7c0f7700000000) = *(undefined4 *)(uVar14 - 0x18);
  if (cVar17 == cVar16) {
    return;
  }
  *(ulonglong *)(puVar13 + -8) = uVar14;
  *(undefined8 *)((ulonglong)((int)(puVar13 + -8) - 0x10) - 8) = 0x1407e8dde;
  FUN_14075852a((int)&stack0xfffffffffffffff8 + -0x7c);
  return;
}


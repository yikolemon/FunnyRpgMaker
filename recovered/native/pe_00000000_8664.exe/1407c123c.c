/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c123c */

void FUN_1407c123c(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong in_FS_OFFSET;
  int *piVar4;
  undefined1 *puVar8;
  
  uVar10 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar7 = (int)&stack0xffffffffffffffe0 - 0x94;
  puVar8 = (undefined1 *)(ulonglong)uVar7;
  iVar5 = *(int *)(uVar10 + 8);
  uVar2 = (int)&stack0xfffffffffffffff8 - 0x18;
  piVar4 = (int *)(ulonglong)uVar2;
  piVar4[-1] = uVar7;
  piVar4[2] = -1;
  piVar4[1] = 0x1016a620;
  iVar3 = *(int *)(in_FS_OFFSET + 0x1407c1267);
  *piVar4 = iVar3;
  *(uint *)(in_FS_OFFSET + 0x2cc8a8b00000000) = uVar2;
  *(char *)piVar4 = (char)*piVar4 + (char)uVar2;
  if (0 < iVar3) {
    uVar2 = *(uint *)((ulonglong)*(uint *)(uVar10 + 8) + 0x2d4);
    do {
      iVar5 = *(int *)(uVar10 + 0xc);
      if (*(int *)(ulonglong)uVar2 == iVar5) goto code_r0x0001407c13dd;
      uVar2 = uVar2 + 0x7c;
    } while (uVar2 != 0);
  }
  *(undefined4 *)(uVar10 - 0x10) = 0xffffffff;
  *(undefined8 *)(puVar8 + -8) = 0x1407c12a8;
  FUN_1407c145a((int)&stack0xfffffffffffffff8 + -0xa0,iVar5);
  *(undefined4 *)(uVar10 - 0x10) = 3;
  uVar11 = (ulonglong)*(uint *)(uVar10 + 8);
  iVar3 = *(int *)(uVar11 + 0x2cc);
  if (iVar3 == *(int *)(uVar11 + 0x2d0)) {
    if (iVar3 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar3 / 2 + iVar3;
    }
    iVar6 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(uVar10 - 0x24) = iVar6;
    *(ulonglong *)(puVar8 + -8) = (ulonglong)(uint)(iVar6 * 0x7c);
    *(undefined8 *)(puVar8 + -0x10) = 0x1407c12f4;
    uVar2 = FUN_1407520ca();
    puVar8 = (undefined1 *)(ulonglong)((int)(puVar8 + -8) + 4);
    uVar7 = *(uint *)((ulonglong)*(uint *)(uVar10 + 8) + 0x2d4);
    if (uVar7 != 0) {
      uVar1 = *(uint *)(uVar10 + 8);
      *(ulonglong *)(puVar8 + -8) = (ulonglong)(uint)(*(int *)((ulonglong)uVar1 + 0x2cc) * 0x7c);
      *(ulonglong *)(puVar8 + -0x10) = (ulonglong)uVar7;
      *(ulonglong *)(puVar8 + -0x18) = (ulonglong)uVar2;
      *(uint *)(uVar10 - 0x20) = uVar2;
      *(undefined8 *)(puVar8 + -0x20) = 0x1407c131c;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar8 + -0x18) + 0xc) - 8) =
           *(undefined8 *)((ulonglong)uVar1 + 0x2d4);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar8 + -0x18) + 0xc) - 0x10) = &UNK_1407c132a;
      FUN_14075219b();
    }
    uVar11 = (ulonglong)*(uint *)(uVar10 + 8);
    *(uint *)(uVar11 + 0x2d4) = uVar2;
    *(undefined4 *)(uVar11 + 0x2d0) = *(undefined4 *)(uVar10 - 0x24);
    iVar3 = *(int *)(uVar11 + 0x2cc);
  }
  else {
    uVar2 = *(uint *)(uVar11 + 0x2d4);
  }
  *(undefined8 *)(puVar8 + -8) = 0x7c;
  *(ulonglong *)(puVar8 + -0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0xa0);
  *(ulonglong *)(puVar8 + -0x18) = (ulonglong)(iVar3 * 0x7c + uVar2);
  *(undefined8 *)(puVar8 + -0x20) = 0x1407c135d;
  FUN_1408b31a0();
  uVar9 = (ulonglong)((int)(puVar8 + -0x18) + 0xc);
  *(int *)(uVar11 + 0x2cc) = *(int *)(uVar11 + 0x2cc) + 1;
  *(undefined4 *)(uVar10 - 0x10) = 0xffffffff;
  *(undefined4 *)(uVar10 - 0x10) = 1;
  *(undefined4 *)(uVar10 - 0x10) = 2;
  *(undefined4 *)(uVar10 - 0x10) = 0xffffffff;
  *(undefined4 *)(uVar10 - 0x10) = 0;
  *(undefined8 *)(uVar9 - 8) = 0x1407c1395;
  FUN_1407dfba0((int)&stack0xfffffffffffffff8 + -0x38);
  *(undefined4 *)(uVar10 - 0x10) = 0xffffffff;
  if (*(uint *)(uVar10 - 0x28) != 0) {
    *(ulonglong *)(uVar9 - 8) = (ulonglong)*(uint *)(uVar10 - 0x28);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(uVar9 - 0x10) = &UNK_1407c13ac;
    FUN_14075219b();
  }
  if (*(uint *)(uVar10 - 0x3c) != 0) {
    *(ulonglong *)(uVar9 - 8) = (ulonglong)*(uint *)(uVar10 - 0x3c);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(uVar9 - 0x10) = &UNK_1407c13be;
    FUN_14075219b();
  }
  *(undefined4 *)
   (ulonglong)
   ((*(int *)((ulonglong)*(uint *)(uVar10 + 8) + 0x2d4) +
    *(int *)((ulonglong)*(uint *)(uVar10 + 8) + 0x2cc) * 0x7c) - 0x7c) =
       *(undefined4 *)(uVar10 + 0xc);
code_r0x0001407c13dd:
  *(undefined4 *)(in_FS_OFFSET + 0x1407c13e7) = *(undefined4 *)(uVar10 - 0x18);
  return;
}


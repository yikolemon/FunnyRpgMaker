/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e028a */

void FUN_1407e028a(ulonglong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uStack_28;
  
  puVar11 = &stack0xffffffffffffffe0;
  uVar13 = param_1 & 0xffffffff;
  puVar10 = (undefined8 *)((ulonglong)&stack0xfffffffffffffff4 & 0xffffffff);
  iVar8 = *(int *)(param_1 + 0x90);
  if (iVar8 == *(int *)(param_1 + 0x94)) {
    if (iVar8 == 0) {
      iVar9 = 8;
    }
    else {
      iVar9 = iVar8 / 2 + iVar8;
    }
    iVar12 = iVar8 + 1;
    if (iVar8 + 1 < iVar9) {
      iVar12 = iVar9;
    }
    uStack_28 = (ulonglong)(uint)(iVar12 << 4);
    uVar7 = FUN_1407520ca();
    puVar11 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
    uVar14 = (ulonglong)uVar7;
    uVar2 = *(uint *)(uVar13 + 0x98);
    if (uVar2 != 0) {
      *(ulonglong *)(puVar11 + -8) = (ulonglong)(uint)(*(int *)(uVar13 + 0x90) << 4);
      *(ulonglong *)(puVar11 + -0x10) = (ulonglong)uVar2;
      *(ulonglong *)(puVar11 + -0x18) = uVar14;
      *(undefined8 *)(puVar11 + -0x20) = 0x1407e02f3;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar11 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(uVar13 + 0x98);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar11 + -0x18) + 0xc) - 0x10) = &UNK_1407e0301;
      FUN_14075219b();
    }
    *(uint *)(uVar13 + 0x98) = uVar7;
    *(int *)(uVar13 + 0x94) = iVar12;
    iVar8 = *(int *)(uVar13 + 0x90);
  }
  else {
    uVar14 = (ulonglong)*(uint *)(uVar13 + 0x98);
  }
  uVar6 = puVar10[1];
  puVar1 = (undefined8 *)(uVar14 + (uint)(iVar8 << 4));
  *puVar1 = *puVar10;
  puVar1[1] = uVar6;
  *(int *)(uVar13 + 0x90) = *(int *)(uVar13 + 0x90) + 1;
  uVar3 = *(undefined4 *)((longlong)puVar10 + 4);
  uVar4 = *(undefined4 *)(puVar10 + 1);
  uVar5 = *(undefined4 *)((longlong)puVar10 + 0xc);
  *(undefined4 *)(uVar13 + 0x58) = *(undefined4 *)puVar10;
  *(undefined4 *)(uVar13 + 0x5c) = uVar3;
  *(undefined4 *)(uVar13 + 0x60) = uVar4;
  *(undefined4 *)(uVar13 + 100) = uVar5;
  *(undefined8 *)(puVar11 + -8) = 0x1407e0334;
  FUN_1407dff16(uVar13);
  return;
}


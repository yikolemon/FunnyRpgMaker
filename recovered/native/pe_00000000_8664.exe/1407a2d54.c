/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a2d54 */

void FUN_1407a2d54(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  ulonglong uVar12;
  
  puVar10 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar1 = *(undefined4 *)((longlong)puVar10 + 0x28);
  piVar9 = (int *)(ulonglong)*(uint *)((longlong)puVar10 + 0x1c);
  iVar5 = *piVar9;
  if (iVar5 == piVar9[1]) {
    if (iVar5 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar5 / 2 + iVar5;
    }
    iVar11 = iVar5 + 1;
    if (iVar5 + 1 < iVar7) {
      iVar11 = iVar7;
    }
    *(ulonglong *)((longlong)puVar10 + -8) = (ulonglong)(uint)(iVar11 * 0x18);
    *(undefined8 *)((longlong)puVar10 + -0x10) = 0x1407a2d9e;
    uVar4 = FUN_1407520ca();
    puVar10 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -8) + 4);
    uVar12 = (ulonglong)uVar4;
    uVar2 = *(uint *)((longlong)puVar10 + 0x1c);
    piVar9 = (int *)(ulonglong)uVar2;
    uVar3 = piVar9[2];
    if (uVar3 != 0) {
      *(ulonglong *)((longlong)puVar10 + -8) = (ulonglong)(uint)(*piVar9 * 0x18);
      *(ulonglong *)((longlong)puVar10 + -0x10) = (ulonglong)uVar3;
      *(ulonglong *)((longlong)puVar10 + -0x18) = uVar12;
      *(undefined8 *)((longlong)puVar10 + -0x20) = 0x1407a2dbe;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar10 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(piVar9 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar10 + -0x18) + 0xc) - 0x10) =
           &UNK_1407a2dc9;
      FUN_14075219b();
    }
    piVar9[2] = uVar4;
    piVar9[1] = iVar11;
    iVar5 = *piVar9;
    piVar9 = (int *)(ulonglong)uVar2;
  }
  else {
    uVar12 = (ulonglong)(uint)piVar9[2];
  }
  iVar7 = puVar10[9];
  uVar8 = uVar1;
  if (0 < iVar7) {
    uVar8 = puVar10[0xc];
  }
  puVar10[1] = uVar8;
  uVar8 = puVar10[0xc];
  if (0 < iVar7) {
    uVar8 = uVar1;
  }
  *puVar10 = uVar8;
  uVar1 = puVar10[0xd];
  uVar8 = puVar10[0xb];
  if (0 < iVar7) {
    uVar1 = puVar10[0xb];
    uVar8 = puVar10[0xd];
  }
  uVar6 = (ulonglong)(uint)(iVar5 * 3);
  *(undefined4 *)(uVar12 + uVar6 * 8) = 2;
  *(undefined1 *)(uVar12 + 4 + uVar6 * 8) = *(undefined1 *)(puVar10 + 8);
  *(char *)(uVar12 + 5 + uVar6 * 8) = (char)puVar10[9];
  *(undefined4 *)(uVar12 + 0xc + uVar6 * 8) = uVar1;
  *(undefined4 *)(uVar12 + 8 + uVar6 * 8) = *puVar10;
  *(undefined4 *)(uVar12 + 0x14 + uVar6 * 8) = uVar8;
  *(undefined4 *)(uVar12 + 0x10 + uVar6 * 8) = puVar10[1];
  *piVar9 = *piVar9 + 1;
  return;
}


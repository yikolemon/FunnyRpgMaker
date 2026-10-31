/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140781747 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140781747(uint param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong unaff_R15;
  bool bVar11;
  bool bVar12;
  undefined8 uStack_28;
  
  puVar7 = &stack0xffffffffffffffe0;
  uVar9 = param_2 & 0xffffffff;
  puVar10 = (undefined8 *)(ulonglong)param_1;
  uVar6 = (ulonglong)_DAT_150b1eea1;
  if (*(int *)(param_2 + 0x430) != 0) {
    uStack_28 = 0;
    FUN_1407735f9(*(int *)(param_2 + 0x430),uVar9);
    puVar7 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
  }
  if ((*(byte *)(uVar6 + 0x27b5) & 4) != 0) {
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(uVar9 + 4);
    *(undefined8 *)(puVar7 + -0x10) = *puVar10;
    *(undefined8 *)(puVar7 + -0x18) = 0x10355a56;
    *(undefined8 *)(puVar7 + -0x20) = 0x140781783;
    FUN_1407518b6();
    puVar7 = (undefined1 *)(ulonglong)((int)(puVar7 + -0x18) + 0xc);
  }
  if (((*(int *)(puVar10 + 0xf) == 0) && (*(int *)((longlong)puVar10 + 0x24) == 1)) &&
     (*(char *)((ulonglong)*(uint *)(ulonglong)*(uint *)((longlong)puVar10 + 0x2c) + 0xfa) == '\0'))
  {
    *(undefined8 *)(puVar7 + -8) = 0x1407817a5;
    FUN_140774ad9();
  }
  uVar2 = *(uint *)((longlong)puVar10 + 0x24);
  if (uVar2 == *(uint *)(puVar10 + 5)) {
    if (uVar2 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = (int)uVar2 / 2 + uVar2;
    }
    iVar8 = uVar2 + 1;
    if ((int)(uVar2 + 1) < iVar5) {
      iVar8 = iVar5;
    }
    *(ulonglong *)(puVar7 + -8) = (ulonglong)(uint)(iVar8 * 4);
    *(undefined8 *)(puVar7 + -0x10) = 0x1407817dd;
    uVar4 = FUN_1407520ca();
    puVar7 = (undefined1 *)(ulonglong)((int)(puVar7 + -8) + 4);
    uVar6 = (ulonglong)uVar4;
    uVar2 = *(uint *)((longlong)puVar10 + 0x2c);
    if (uVar2 != 0) {
      *(ulonglong *)(puVar7 + -8) = (ulonglong)(uint)(*(int *)((longlong)puVar10 + 0x24) << 2);
      *(ulonglong *)(puVar7 + -0x10) = (ulonglong)uVar2;
      *(ulonglong *)(puVar7 + -0x18) = uVar6;
      *(undefined8 *)(puVar7 + -0x20) = 0x1407817f7;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar7 + -0x18) + 0xc) - 8) =
           *(undefined8 *)((longlong)puVar10 + 0x2c);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar7 + -0x18) + 0xc) - 0x10) = &UNK_140781802;
      FUN_14075219b();
    }
    *(uint *)((longlong)puVar10 + 0x2c) = uVar4;
    *(int *)(puVar10 + 5) = iVar8;
    uVar2 = *(uint *)((longlong)puVar10 + 0x24);
  }
  else {
    uVar6 = (ulonglong)*(uint *)((longlong)puVar10 + 0x2c);
  }
  *(int *)(uVar6 + (ulonglong)uVar2 * 4) = (int)param_2;
  *(int *)((longlong)puVar10 + 0x24) = *(int *)((longlong)puVar10 + 0x24) + 1;
  *(byte *)((longlong)puVar10 + 0xad) = *(byte *)((longlong)puVar10 + 0xad) | 2;
  *(uint *)(uVar9 + 0x430) = param_1;
  *(undefined4 *)(uVar9 + 0x438) = *(undefined4 *)puVar10;
  cVar1 = puVar7[0x14];
  *(byte *)(uVar9 + 0x409) =
       *(byte *)(uVar9 + 0x409) & 0xf6 | 1 < *(int *)((longlong)puVar10 + 0x24);
  if (((*(int *)(puVar10 + 0xf) == 0) && (*(int *)(puVar10 + 3) == 0)) &&
     ((*(uint *)(puVar10 + 2) & 0x400) == 0)) {
    uVar2 = *(uint *)(puVar10 + 0x15);
    bVar11 = (uVar2 & 7) == 0;
    uVar4 = uVar2 | 2;
    if (!bVar11) {
      uVar4 = uVar2;
    }
    bVar12 = (uVar4 & 0x38) == 0;
    uVar2 = uVar4 | 0x10;
    if (!bVar12) {
      uVar2 = uVar4;
    }
    if (!(bool)(~(bVar12 || bVar11) & (uVar2 & 0x1c0) != 0)) {
      uVar4 = uVar2 | 0x80;
      if ((uVar2 & 0x1c0) != 0) {
        uVar4 = uVar2;
      }
      *(uint *)(puVar10 + 0x15) = uVar4;
    }
  }
  if (cVar1 != '\0') {
    if (*(int *)(puVar10 + 6) == 0) {
      *(undefined8 *)(puVar7 + -8) = 0x14078185c;
      FUN_140781934(param_1);
      uVar3 = *(undefined4 *)((longlong)puVar10 + 0x9c);
      *(undefined4 *)((ulonglong)*(uint *)(puVar10 + 6) + 0x1c) = uVar3;
      *(undefined4 *)((ulonglong)*(uint *)(puVar10 + 6) + 0x18) = uVar3;
      if (1 < *(int *)((longlong)puVar10 + 0x24)) {
        do {
          *(undefined8 *)(puVar7 + -8) =
               *(undefined8 *)(ulonglong)*(uint *)((longlong)puVar10 + 0x2c);
          *(undefined8 *)(puVar7 + -0x10) = 0;
          *(undefined8 *)(puVar7 + -0x18) = puVar10[6];
          *(undefined8 *)(puVar7 + -0x20) = 0x140781886;
          FUN_1407a75a0();
          puVar7 = (undefined1 *)(ulonglong)((int)(puVar7 + -0x18) + 0xc);
        } while (*(int *)(unaff_R15 + 0x24) != 0);
      }
    }
    *(ulonglong *)(puVar7 + -8) = uVar9;
    *(undefined8 *)(puVar7 + -0x10) = 0x800000;
    *(undefined8 *)(puVar7 + -0x18) = puVar10[6];
    *(undefined8 *)(puVar7 + -0x20) = 0x1407818a0;
    FUN_1407a75a0();
    puVar7 = (undefined1 *)(ulonglong)((int)(puVar7 + -0x18) + 0xc);
  }
  *(undefined8 *)(puVar7 + -8) = 0x1407818aa;
  FUN_140781956(puVar10);
  if (*(uint *)(puVar10 + 0xf) != 0) {
    uVar2 = *(uint *)(uVar9 + 0xc);
    *(ulonglong *)(puVar7 + -8) = (ulonglong)*(uint *)(puVar10 + 0xf);
    *(ulonglong *)(puVar7 + -0x10) = (ulonglong)(uVar2 | 0x1000000);
    *(ulonglong *)(puVar7 + -0x18) = uVar9;
    *(undefined8 *)(puVar7 + -0x20) = 0x1407818c1;
    FUN_140765368();
  }
  return;
}


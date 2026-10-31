/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407654d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407654d6(ulonglong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar1 = _DAT_150b02c34;
  uVar7 = (ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar10 = (ulonglong)_DAT_150b02c34;
  *(undefined8 *)(uVar7 - 8) = 0x440;
  *(undefined8 *)(uVar7 - 0x10) = 0x1407654f2;
  uVar2 = FUN_1407520ca();
  uVar8 = (ulonglong)((int)(uVar7 - 8) + 4);
  uVar11 = (ulonglong)uVar2;
  *(ulonglong *)(uVar8 - 8) = param_1 & 0xffffffff;
  *(ulonglong *)(uVar8 - 0x10) = uVar10;
  *(undefined8 *)(uVar8 - 0x18) = 0x140765500;
  FUN_140759bfa(uVar2);
  *(uint *)(uVar8 - 0xc) = uVar2;
  *(uint *)(uVar11 + 0xc) = param_2;
  *(ulonglong *)(uVar8 - 0x18) = uVar11;
  puVar9 = (uint *)(uVar8 - 0x20);
  *(undefined8 *)(uVar8 - 0x20) = *(undefined8 *)(uVar11 + 8);
  *(undefined8 *)(uVar8 - 0x28) = 0x140765516;
  FUN_14075324c(uVar1 + 0x14b4);
  iVar5 = 0;
  if ((param_2 >> 8 & 1) == 0) {
    *(ulonglong *)(uVar8 - 0x28) = uVar11;
    *(undefined8 *)(uVar8 - 0x30) = 0x140765525;
    iVar3 = FUN_1407709fb();
    puVar9 = (uint *)(ulonglong)((int)(uVar8 - 0x28) + 4);
    if (iVar3 != 0) {
      *(int *)(uVar11 + 0x2e4) = iVar3 - *(int *)(uVar10 + 0x26f0);
      iVar5 = iVar3;
    }
  }
  puVar9[-2] = 0x40765545;
  puVar9[-1] = 1;
  FUN_140770a23(uVar2,iVar5);
  if ((param_2 >> 0xd & 1) == 0) {
    *puVar9 = uVar1 + 0x1484;
    uVar1 = *(uint *)(uVar10 + 0x1484);
    if (uVar1 == *(uint *)(uVar10 + 0x1488)) {
      if (uVar1 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = (int)uVar1 / 2 + uVar1;
      }
      iVar3 = uVar1 + 1;
      if ((int)(uVar1 + 1) < iVar5) {
        iVar3 = iVar5;
      }
      *(ulonglong *)(puVar9 + -2) = (ulonglong)(uint)(iVar3 * 4);
      puVar9[-4] = 0x407655a5;
      puVar9[-3] = 1;
      uVar4 = FUN_1407520ca();
      puVar9 = (uint *)(ulonglong)((int)(puVar9 + -2) + 4);
      uVar6 = (ulonglong)uVar4;
      uVar1 = *(uint *)(uVar10 + 0x148c);
      if (uVar1 != 0) {
        *(ulonglong *)((longlong)puVar9 + -8) = (ulonglong)(uint)(*(int *)(uVar10 + 0x1484) << 2);
        *(ulonglong *)((longlong)puVar9 + -0x10) = (ulonglong)uVar1;
        *(ulonglong *)((longlong)puVar9 + -0x18) = uVar6;
        *(undefined8 *)((longlong)puVar9 + -0x20) = 0x1407655c6;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar10 + 0x148c);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x18) + 0xc) - 0x10) =
             &UNK_1407655d4;
        FUN_14075219b();
      }
      *(uint *)(uVar10 + 0x148c) = uVar4;
      *(int *)(uVar10 + 0x1488) = iVar3;
      uVar1 = *(uint *)(uVar10 + 0x1484);
    }
    else {
      uVar6 = (ulonglong)*(uint *)(uVar10 + 0x148c);
    }
    *(uint *)(uVar6 + (ulonglong)uVar1 * 4) = uVar2;
    *(int *)(ulonglong)*puVar9 = *(int *)(ulonglong)*puVar9 + 1;
  }
  else {
    *(uint **)(puVar9 + -2) = (uint *)((ulonglong)(puVar9 + 1) & 0xffffffff);
    puVar9[-4] = 0x40765581;
    puVar9[-3] = 1;
    FUN_14077e34e();
    uVar11 = (ulonglong)*(uint *)((ulonglong)(puVar9 + 1) & 0xffffffff);
  }
  return uVar11;
}


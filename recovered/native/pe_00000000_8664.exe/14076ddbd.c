/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ddbd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076ddbd(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar3 = _DAT_150b0b525;
  puVar11 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x2c);
  uVar14 = (ulonglong)_DAT_150b0b525;
  uVar1 = *(uint *)(uVar14 + 0x14cc);
  uVar6 = *(uint *)(uVar14 + 0x1fc8);
  if ((char)*(undefined4 *)((longlong)puVar11 + 0x44) < '\0') {
    *(undefined8 *)((longlong)puVar11 + -8) = 0x400;
    *(undefined8 *)((longlong)puVar11 + -0x10) = 0;
    *(undefined8 *)((longlong)puVar11 + -0x18) = 0x14076ddf5;
    cVar4 = FUN_14075be54();
    puVar11 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar11 + -0x10) + 8);
    if (cVar4 != '\0') goto LAB_14076dfac;
  }
  *(undefined4 *)((longlong)puVar11 + 0x10) = *(undefined4 *)(uVar14 + 0x2048);
  *(undefined4 *)((longlong)puVar11 + 4) = *(undefined4 *)(uVar14 + 4);
  *(undefined4 *)((longlong)puVar11 + 0x14) =
       *(undefined4 *)
        (((ulonglong)*(uint *)((ulonglong)uVar1 + 0x140) - 4) +
        (ulonglong)*(uint *)((ulonglong)uVar1 + 0x138) * 4);
  puVar12 = (undefined4 *)((ulonglong)((longlong)puVar11 + 0x20) & 0xffffffff);
  *(undefined8 *)((longlong)puVar11 + -8) = 0x14076de35;
  FUN_14076dfd8(puVar12,0x4000000);
  uVar2 = *puVar12;
  uVar10 = puVar12[1];
  puVar12 = (undefined4 *)((ulonglong)((longlong)puVar11 + 0x18) & 0xffffffff);
  *(undefined4 *)((longlong)puVar11 + 8) = uVar10;
  puVar12[1] = uVar10;
  *(undefined4 *)((longlong)puVar11 + 0xc) = uVar2;
  *puVar12 = uVar2;
  *(ulonglong *)((longlong)puVar11 + -8) = (ulonglong)(uVar3 + 0xe4);
  *(undefined8 *)((longlong)puVar11 + -0x10) = 0x14076de57;
  cVar4 = FUN_14075bb00();
  puVar11 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar11 + -8) + 4);
  if (cVar4 != '\0') {
    puVar12 = (undefined4 *)(ulonglong)(uVar3 + 0xe4);
  }
  uVar10 = *puVar12;
  uVar2 = puVar12[1];
  if ((*(byte *)(uVar14 + 0x27b4) & 8) != 0) {
    *(undefined8 *)((longlong)puVar11 + -8) = *(undefined8 *)((longlong)puVar11 + 0x40);
    *(undefined8 *)((longlong)puVar11 + -0x10) = 0x1035583c;
    *(undefined8 *)((longlong)puVar11 + -0x18) = 0x14076de7b;
    FUN_1407518b6();
    puVar11 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar11 + -0x10) + 8);
  }
  iVar5 = *(int *)(uVar14 + 0x1fbc);
  if ((int)uVar6 < iVar5) {
    if ((*(int *)((ulonglong)*(uint *)(uVar14 + 0x1fc4) + (ulonglong)(uVar6 * 5) * 8) ==
         *(int *)((longlong)puVar11 + 0x40)) &&
       (((*(uint *)((longlong)puVar11 + 0x44) & 0x20) != 0 ||
        (*(ulonglong *)(param_3 + 0x10) == (ulonglong)*(uint *)(uVar14 + 4))))) {
      *(undefined4 *)((ulonglong)(*(uint *)(uVar14 + 0x1fc4) + uVar6 * 0x28) + 0x10) =
           *(undefined4 *)((longlong)puVar11 + 4);
      goto LAB_14076dfac;
    }
    *(undefined8 *)((longlong)puVar11 + -8) = 1;
    *(ulonglong *)((longlong)puVar11 + -0x10) = (ulonglong)uVar6;
    *(undefined8 *)((longlong)puVar11 + -0x18) = 0x14076dec5;
    FUN_14076e1dc();
    puVar11 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar11 + -0x10) + 8);
    iVar5 = *(int *)(uVar14 + 0x1fbc);
  }
  if (iVar5 == *(int *)(uVar14 + 0x1fc0)) {
    *puVar11 = uVar10;
    if (iVar5 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar5 / 2 + iVar5;
    }
    iVar9 = iVar5 + 1;
    if (iVar5 + 1 < iVar8) {
      iVar9 = iVar8;
    }
    *(ulonglong *)(puVar11 + -2) = (ulonglong)(uint)(iVar9 * 0x28);
    *(undefined8 *)(puVar11 + -4) = 0x14076df13;
    uVar6 = FUN_1407520ca();
    puVar11 = (undefined4 *)(ulonglong)((int)(puVar11 + -2) + 4);
    uVar13 = (ulonglong)uVar6;
    uVar1 = *(uint *)(uVar14 + 0x1fc4);
    if (uVar1 != 0) {
      *(ulonglong *)(puVar11 + -2) = (ulonglong)(uint)(*(int *)(uVar14 + 0x1fbc) * 0x28);
      *(ulonglong *)(puVar11 + -4) = (ulonglong)uVar1;
      *(ulonglong *)(puVar11 + -6) = uVar13;
      *(undefined8 *)(puVar11 + -8) = 0x14076df36;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar11 + -6) + 0xc) - 8) = *(undefined8 *)(uVar14 + 0x1fc4)
      ;
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar11 + -6) + 0xc) - 0x10) = &UNK_14076df44;
      FUN_14075219b();
    }
    *(uint *)(uVar14 + 0x1fc4) = uVar6;
    *(int *)(uVar14 + 0x1fc0) = iVar9;
    iVar5 = *(int *)(uVar14 + 0x1fbc);
    uVar10 = *puVar11;
  }
  else {
    uVar13 = (ulonglong)*(uint *)(uVar14 + 0x1fc4);
  }
  uVar7 = (ulonglong)(uint)(iVar5 * 5);
  *(undefined4 *)(uVar13 + uVar7 * 8) = *(undefined4 *)((longlong)puVar11 + 0x40);
  *(undefined4 *)(uVar13 + 4 + uVar7 * 8) = 0;
  *(undefined4 *)(uVar13 + 8 + uVar7 * 8) = *(undefined4 *)((longlong)puVar11 + 0x10);
  *(undefined4 *)(uVar13 + 0xc + uVar7 * 8) = 0xffffffff;
  *(undefined4 *)(uVar13 + 0x10 + uVar7 * 8) = *(undefined4 *)((longlong)puVar11 + 4);
  *(undefined4 *)(uVar13 + 0x14 + uVar7 * 8) = *(undefined4 *)((longlong)puVar11 + 0x14);
  *(undefined4 *)(uVar13 + 0x1c + uVar7 * 8) = *(undefined4 *)((longlong)puVar11 + 8);
  *(undefined4 *)(uVar13 + 0x18 + uVar7 * 8) = *(undefined4 *)((longlong)puVar11 + 0xc);
  *(undefined4 *)(uVar13 + 0x24 + uVar7 * 8) = uVar2;
  *(undefined4 *)(uVar13 + 0x20 + uVar7 * 8) = uVar10;
  *(int *)(uVar14 + 0x1fbc) = *(int *)(uVar14 + 0x1fbc) + 1;
LAB_14076dfac:
  if (_DAT_150af6cb8 == (*(uint *)((longlong)puVar11 + 0x28) ^ (uint)puVar11)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar11 + -8) = FUN_14076dfd8;
  FUN_1408802b0(*(uint *)((longlong)puVar11 + 0x28) ^ (uint)puVar11);
}


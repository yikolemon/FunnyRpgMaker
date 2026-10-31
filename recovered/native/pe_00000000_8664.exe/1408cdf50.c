/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cdf50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cdf50(void)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  uint uVar8;
  ulonglong uVar9;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined8 unaff_RSI;
  undefined4 *puVar13;
  uint unaff_EDI;
  undefined4 *puVar10;
  
  uVar12 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar9 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x1c);
  *(undefined8 *)(uVar9 - 8) = unaff_RBX;
  *(undefined8 *)(uVar9 - 0x10) = unaff_RSI;
  *(ulonglong *)(uVar9 - 0x18) = (ulonglong)unaff_EDI;
  *(undefined8 *)(uVar9 - 0x20) = *(undefined8 *)(uVar12 + 8);
  *(undefined8 *)(uVar9 - 0x28) = 0x1408cdf70;
  FUN_1408b3d5b((int)&stack0xfffffffffffffff8 + -0x1c);
  uVar2 = *(uint *)(uVar12 + 0x1c);
  if (uVar2 == 0) {
    uVar2 = *(uint *)((ulonglong)*(uint *)(uVar12 - 0x18) + 8);
  }
  uVar6 = 0;
  *(undefined8 *)(uVar9 - 0x28) = 0;
  *(undefined8 *)(uVar9 - 0x30) = 0;
  *(undefined8 *)(uVar9 - 0x38) = *(undefined8 *)(uVar12 + 0x14);
  iVar4 = *(int *)(uVar12 + 0x20);
  *(undefined8 *)(uVar9 - 0x40) = *(undefined8 *)(uVar12 + 0x10);
  *(undefined8 *)(uVar9 - 0x48) = 9;
  if (iVar4 != 0) {
    uVar6 = *(ulonglong *)(uVar9 - 0x48) & 0xffffffff;
  }
  *(ulonglong *)(uVar9 - 0x48) = uVar6;
  *(ulonglong *)(uVar9 - 0x50) = (ulonglong)uVar2;
  *(undefined8 *)(uVar9 - 0x58) = 0x1408cdf9a;
  iVar4 = FUN_1408cc091();
  uVar8 = (int)(uVar9 - 0x50) + 0x18;
  puVar10 = (undefined4 *)(ulonglong)uVar8;
  *(int *)(uVar12 - 0xc) = iVar4;
  if (iVar4 == 0) goto LAB_1408ce02a;
  uVar5 = iVar4 * 2;
  *(uint *)(uVar12 - 8) = uVar5;
  uVar5 = -(uint)(uVar5 < uVar5 + 8) & uVar5 + 8;
  if (uVar5 == 0) {
    puVar13 = (undefined4 *)0x0;
  }
  else if (uVar5 < 0x401) {
    *(undefined8 *)(puVar10 + -2) = 0x1408cdfc4;
    FUN_1408aff20();
    puVar13 = puVar10;
    if (uVar8 != 0) {
      *puVar10 = 0xcccc;
LAB_1408cdfe5:
      puVar13 = (undefined4 *)(ulonglong)(uVar8 + 8);
      if (uVar8 + 8 != 0) {
        *(undefined8 *)(puVar10 + -2) = *(undefined8 *)(uVar12 - 8);
        *(undefined8 *)(puVar10 + -4) = 0;
        *(undefined4 **)(puVar10 + -6) = puVar13;
        *(undefined8 *)(puVar10 + -8) = 0x1408cdff6;
        FUN_1408b3720();
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(uVar12 - 0xc);
        *(undefined4 **)(puVar10 + -10) = puVar13;
        *(undefined8 *)(puVar10 + -0xc) = *(undefined8 *)(uVar12 + 0x14);
        *(undefined8 *)(puVar10 + -0xe) = *(undefined8 *)(uVar12 + 0x10);
        *(undefined8 *)(puVar10 + -0x10) = 1;
        *(ulonglong *)(puVar10 + -0x12) = (ulonglong)uVar2;
        *(undefined8 *)(puVar10 + -0x14) = 0x1408ce008;
        uVar7 = FUN_1408cc091();
        puVar11 = (undefined1 *)(ulonglong)((int)(puVar10 + -0x12) + 0x24);
        puVar10 = (undefined4 *)puVar11;
        if ((int)uVar7 != 0) {
          *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(uVar12 + 0x18);
          *(undefined8 *)(puVar11 + -0x10) = uVar7;
          *(undefined4 **)(puVar11 + -0x18) = puVar13;
          puVar10 = (undefined4 *)(puVar11 + -0x20);
          *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(uVar12 + 0xc);
          pcVar3 = _DAT_150c2bfe9;
          *(undefined8 *)(puVar11 + -0x28) = 0x1408ce01d;
          (*pcVar3)();
        }
      }
    }
  }
  else {
    *(ulonglong *)(puVar10 + -2) = (ulonglong)uVar5;
    *(undefined8 *)(puVar10 + -4) = 0x1408cdfd8;
    uVar8 = FUN_1408cc040();
    puVar13 = (undefined4 *)(ulonglong)uVar8;
    if (uVar8 != 0) {
      *puVar13 = 0xdddd;
      goto LAB_1408cdfe5;
    }
  }
  *(undefined4 **)((longlong)puVar10 + -8) = puVar13;
  *(undefined8 *)((longlong)puVar10 + -0x10) = 0x1408ce029;
  FUN_14088cbe0();
LAB_1408ce02a:
  if (*(char *)(uVar12 - 0x10) != '\0') {
    puVar1 = (uint *)((ulonglong)*(uint *)(uVar12 - 0x1c) + 0x350);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  uVar2 = *(uint *)(uVar12 - 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)((ulonglong)((int)&stack0xfffffffffffffff8 - 0x28) + 0x10) = &UNK_1408ce04c;
  FUN_1408802b0(uVar2 ^ (uint)&stack0xfffffffffffffff8);
}


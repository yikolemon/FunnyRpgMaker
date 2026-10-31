/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079a987 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14079a987(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uStack_28;
  int iVar10;
  
  puVar6 = &stack0xffffffffffffffe0;
  iVar10 = (int)((ulonglong)unaff_RBX >> 0x20);
  if ((iVar10 != 0) && (uVar9 = (ulonglong)_DAT_150b380e9, *(int *)(uVar9 + 0x247c) == iVar10)) {
    *(int *)(uVar9 + 0x24e4) = iVar10;
    if ((*(byte *)(uVar9 + 0x2479) & 2) == 0) {
      iVar10 = *(int *)(uVar9 + 0x24ec);
      uVar3 = *(int *)(uVar9 + 0x2480) + 1;
      if (*(int *)(uVar9 + 0x2480) < iVar10) {
        uVar8 = (ulonglong)*(uint *)(uVar9 + 0x24f0);
        *(uint *)(uVar9 + 0x24e8) = uVar3;
        uVar7 = uVar3;
      }
      else {
        if (iVar10 == 0) {
          uVar7 = 8;
        }
        else {
          uVar7 = iVar10 / 2 + iVar10;
        }
        if ((int)uVar7 <= (int)uVar3) {
          uVar7 = uVar3;
        }
        uStack_28 = (ulonglong)uVar7;
        uVar2 = FUN_1407520ca();
        puVar6 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
        uVar8 = (ulonglong)uVar2;
        uVar1 = *(uint *)(uVar9 + 0x24f0);
        if (uVar1 != 0) {
          *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(uVar9 + 0x24e8);
          *(ulonglong *)(puVar6 + -0x10) = (ulonglong)uVar1;
          *(ulonglong *)(puVar6 + -0x18) = uVar8;
          *(undefined8 *)(puVar6 + -0x20) = 0x14079aa6e;
          FUN_1408b31a0();
          *(undefined8 *)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 8) =
               *(undefined8 *)(uVar9 + 0x24f0);
                    /* WARNING: Subroutine does not return */
          *(undefined **)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 0x10) = &UNK_14079aa7c;
          FUN_14075219b();
        }
        *(uint *)(uVar9 + 0x24f0) = uVar2;
        *(uint *)(uVar9 + 0x24ec) = uVar7;
        uVar7 = *(uint *)(uVar9 + 0x2480);
        *(uint *)(uVar9 + 0x24e8) = uVar3;
      }
      *(ulonglong *)(puVar6 + -8) = (ulonglong)uVar7;
      *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(uVar9 + 0x2490);
      *(ulonglong *)(puVar6 + -0x18) = uVar8;
      *(undefined8 *)(puVar6 + -0x20) = 0x14079aaa5;
      FUN_1408b31a0();
    }
    else {
      if (*(int *)(uVar9 + 0x24ec) < 0) {
        uStack_28 = 0;
        uVar7 = FUN_1407520ca();
        uVar4 = (ulonglong)((int)&uStack_28 + 4);
        uVar3 = *(uint *)(uVar9 + 0x24f0);
        if (uVar3 != 0) {
          *(undefined8 *)(uVar4 - 8) = *(undefined8 *)(uVar9 + 0x24e8);
          *(ulonglong *)(uVar4 - 0x10) = (ulonglong)uVar3;
          *(ulonglong *)(uVar4 - 0x18) = (ulonglong)uVar7;
          *(undefined8 *)(uVar4 - 0x20) = 0x14079aa04;
          FUN_1408b31a0();
          uVar5 = (ulonglong)((int)(uVar4 - 0x18) + 0xc);
          *(undefined8 *)(uVar5 - 8) = *(undefined8 *)(uVar9 + 0x24f0);
                    /* WARNING: Subroutine does not return */
          *(undefined **)(uVar5 - 0x10) = &UNK_14079aa12;
          FUN_14075219b();
        }
        *(uint *)(uVar9 + 0x24f0) = uVar7;
        *(undefined4 *)(uVar9 + 0x24ec) = 0;
      }
      *(undefined4 *)(uVar9 + 0x24e8) = 0;
    }
  }
  return;
}


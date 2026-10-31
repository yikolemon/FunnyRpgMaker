/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b6d2b */

void FUN_1408b6d2b(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  undefined4 *puVar11;
  undefined1 *puVar12;
  
  uVar10 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar8 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x474);
  iVar6 = *(int *)(uVar10 + 0x18);
  iVar1 = *(int *)(uVar10 + 0x10);
  uVar7 = (ulonglong)*(uint *)(uVar10 + 0x1c);
  *(undefined8 *)(uVar8 - 8) = unaff_RBX;
  *(undefined8 *)(uVar8 - 0x10) = unaff_RSI;
  uVar2 = *(uint *)(uVar10 + 0x14);
  *(int *)(uVar10 - 0x460) = iVar1;
  if ((iVar6 == 0) || ((uVar2 != 0 && (iVar1 == 0)))) {
    *(ulonglong *)(uVar8 - 0x18) = uVar7;
    *(undefined1 *)(uVar7 + 0x1c) = 1;
    *(undefined8 *)(uVar8 - 0x20) = 0;
    *(undefined8 *)(uVar8 - 0x28) = 0;
    *(undefined8 *)(uVar8 - 0x30) = 0;
    *(undefined8 *)(uVar8 - 0x38) = 0;
    *(undefined8 *)(uVar8 - 0x40) = 0;
    *(undefined4 *)(uVar7 + 0x18) = 0x16;
    *(undefined8 *)(uVar8 - 0x48) = 0x1408b6d6f;
    FUN_1408cbf04();
    puVar9 = (undefined1 *)(ulonglong)((int)(uVar8 - 0x40) + 0x18);
    goto LAB_1408b6e91;
  }
  uVar3 = *(uint *)(uVar10 + 8);
  *(ulonglong *)(uVar8 - 0x18) = (ulonglong)unaff_EDI;
  puVar11 = (undefined4 *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x470);
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  uVar4 = *(uint *)(uVar10 - 0x460);
  puVar12 = (undefined1 *)(ulonglong)uVar4;
  uVar5 = uVar3 & 2;
  *(uint *)(uVar10 - 0x474) = uVar5;
  *(uint *)(uVar10 - 0x470) = uVar4;
  *(uint *)(uVar10 - 0x46c) = uVar2;
  *(undefined4 *)(uVar10 - 0x468) = 0;
  if ((uVar5 != 0) || (*(undefined1 *)(uVar10 - 0x464) = 0, uVar4 == 0)) {
    *(undefined1 *)(uVar10 - 0x464) = 1;
  }
  *(undefined8 *)(uVar8 - 0x20) = *(undefined8 *)(uVar10 + 0x20);
  *(ulonglong *)(uVar8 - 0x28) = uVar7;
  *(undefined8 *)(uVar8 - 0x30) = *(undefined8 *)(uVar10 + 0x18);
  *(int *)(uVar10 - 0x460) = (int)&stack0xfffffffffffffff8 + -0x470;
  *(undefined8 *)(uVar8 - 0x38) = *(undefined8 *)(uVar10 + 0xc);
  *(ulonglong *)(uVar8 - 0x40) = (ulonglong)uVar3;
  *(ulonglong *)(uVar8 - 0x48) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x460);
  *(undefined8 *)(uVar8 - 0x50) = 0x1408b6df5;
  FUN_1408b70c1((int)&stack0xfffffffffffffff8 + -0x45c);
  *(undefined4 *)(uVar10 - 0xc) = 0;
  *(undefined8 *)(uVar8 - 0x50) = 0x1408b6e03;
  iVar6 = FUN_1408b802f((int)&stack0xfffffffffffffff8 + -0x45c);
  *(int *)(uVar10 - 0x460) = iVar6;
  if (uVar4 != 0) {
    if ((*(uint *)(uVar10 + 8) & 1) == 0) {
      if (*(int *)(uVar10 - 0x474) == 0) {
        if (uVar2 != 0) {
          uVar3 = *(uint *)(uVar10 - 0x468);
          if (uVar3 == uVar2) {
            *(undefined8 *)(uVar8 - 0x50) = 0xfffffffffffffffe;
            puVar12[(ulonglong)uVar2 - 1] = 0;
          }
          else {
LAB_1408b6e7a:
            puVar12[uVar3] = 0;
          }
        }
      }
      else if (uVar2 != 0) {
        if (iVar6 < 0) {
          *puVar12 = 0;
        }
        else {
          uVar3 = *(uint *)(uVar10 - 0x468);
          if (uVar3 != uVar2) goto LAB_1408b6e7a;
          puVar12[(ulonglong)uVar2 - 1] = 0;
        }
      }
    }
    else if (((uVar2 != 0) || (iVar6 == 0)) && (*(uint *)(uVar10 - 0x468) != uVar2)) {
      puVar12[*(uint *)(uVar10 - 0x468)] = 0;
    }
  }
  *(undefined8 *)(uVar8 - 0x50) = 0x1408b6e8e;
  FUN_1408b6bf1((int)&stack0xfffffffffffffff8 + -0x420);
  puVar9 = (undefined1 *)(uVar8 - 0x40);
LAB_1408b6e91:
  uVar2 = *(uint *)(uVar10 - 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + 8) = &UNK_1408b6e9d;
  FUN_1408802b0(uVar2 ^ (uint)&stack0xfffffffffffffff8);
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d8690 */

void FUN_1408d8690(void)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  int iVar11;
  undefined8 unaff_RSI;
  ulonglong uVar12;
  uint unaff_EDI;
  ulonglong uVar13;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar6 = (ulonglong)(((int)&stack0xfffffffffffffff8 - 8U & 0xfffffff0) + 4);
  *(undefined8 *)(uVar6 - 8) = unaff_RBP;
  *(undefined4 *)(uVar6 - 4) = *(undefined4 *)(uVar5 + 4);
  uVar10 = uVar6 - 8 & 0xffffffff;
  uVar7 = (ulonglong)((int)(uVar6 - 8) - 0x88);
  *(undefined8 *)(uVar7 - 8) = unaff_RSI;
  uVar1 = *(uint *)(uVar5 + 8);
  *(ulonglong *)(uVar7 - 0x10) = (ulonglong)unaff_EDI;
  uVar13 = (ulonglong)*(uint *)(uVar5 + 0x20);
  *(ulonglong *)(uVar7 - 0x18) = uVar13;
  *(ulonglong *)(uVar7 - 0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 + 0x18);
  *(ulonglong *)(uVar7 - 0x28) = (ulonglong)uVar1;
  *(undefined8 *)(uVar7 - 0x30) = 0x1408d86cb;
  uVar3 = FUN_1408d8970();
  puVar8 = (undefined1 *)(ulonglong)((int)(uVar7 - 0x28) + 0xc);
  if ((int)uVar3 == 0) {
    *(uint *)(uVar10 - 0x40) = *(uint *)(uVar10 - 0x40) & 0xfffffffe;
    *(undefined8 *)(puVar8 + -8) = uVar3;
    *(ulonglong *)(puVar8 + -0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 + 0x18);
    *(ulonglong *)(puVar8 + -0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 + 0x10);
    *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(uVar5 + 0xc);
    *(ulonglong *)(puVar8 + -0x28) = (ulonglong)uVar1;
    *(ulonglong *)(puVar8 + -0x30) = (ulonglong)((int)&stack0xfffffffffffffff8 + 0x20);
    *(ulonglong *)(puVar8 + -0x38) = (ulonglong)((int)(uVar6 - 8) - 0x80);
    *(undefined8 *)(puVar8 + -0x40) = 0x1408d86f0;
    FUN_1408d8dd0();
    uVar13 = (ulonglong)*(uint *)(uVar5 + 0x20);
    puVar8 = (undefined1 *)(ulonglong)((int)(puVar8 + -0x38) + 0x1c);
  }
  uVar1 = *(uint *)(uVar5 + 8);
  if ((uVar1 & 0x20) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 1) == 0) {
          uVar12 = (ulonglong)((uVar1 & 2) * 2);
        }
        else {
          uVar12 = 3;
        }
      }
      else {
        uVar12 = 2;
      }
    }
    else {
      uVar12 = 1;
    }
  }
  else {
    uVar12 = 5;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1408d8732;
  cVar2 = FUN_1408cf070();
  iVar11 = (int)uVar12;
  if (cVar2 == '\0') {
    if (iVar11 == 1) {
      *(undefined8 *)(puVar8 + -8) = 0x1408d879c;
      puVar4 = (undefined4 *)FUN_1408c0ecd();
      *puVar4 = 0x21;
    }
    else if ((iVar11 == 2) || (iVar11 == 3)) {
      *(undefined8 *)(puVar8 + -8) = 0x1408d878f;
      puVar4 = (undefined4 *)FUN_1408c0ecd();
      *puVar4 = 0x22;
    }
  }
  else if (iVar11 != 0) {
    uVar3 = *(undefined8 *)(uVar5 + 0x18);
    *(ulonglong *)(puVar8 + -8) = uVar13;
    puVar9 = (undefined8 *)(ulonglong)((int)(puVar8 + -8) - 0x18);
    puVar9[2] = uVar3;
    puVar9[1] = 0;
    *puVar9 = *(undefined8 *)(uVar5 + 0x10);
    puVar9[-1] = *(undefined8 *)(uVar5 + 0xc);
    puVar9[-2] = uVar12;
    puVar9[-3] = 0x1408d8765;
    FUN_1408d8cd0();
    uVar1 = *(uint *)(uVar10 - 4);
                    /* WARNING: Subroutine does not return */
    *(undefined **)((ulonglong)((int)(puVar9 + -2) + 0x24) + 8) = &UNK_1408d8774;
    FUN_1408802b0(uVar1 ^ (uint)(uVar6 - 8));
  }
  *(undefined8 *)(puVar8 + -8) = 0xffff;
  *(ulonglong *)(puVar8 + -0x10) = uVar13;
  *(undefined8 *)(puVar8 + -0x18) = 0x1408d87ad;
  FUN_1408d9120();
  uVar1 = *(uint *)(uVar10 - 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)((ulonglong)((int)(puVar8 + -0x10) + 8) + 8) = &UNK_1408d87bf;
  FUN_1408802b0(uVar1 ^ (uint)(uVar6 - 8));
}


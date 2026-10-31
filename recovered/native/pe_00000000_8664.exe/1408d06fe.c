/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d06fe */

void FUN_1408d06fe(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  
  uVar9 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar5 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x20);
  puVar7 = (undefined1 *)(uVar5 - 8);
  *(undefined8 *)(uVar5 - 8) = *(undefined8 *)(uVar9 + 0x10);
  *(undefined8 *)(uVar5 - 0x10) = 0x1408d071b;
  FUN_1408b3d5b((int)&stack0xfffffffffffffff8 + -0x20);
  iVar3 = *(int *)(uVar9 + 8);
  if ((iVar3 < -1) || (0xff < iVar3)) {
    *(undefined8 *)(uVar5 - 0x10) = unaff_RBX;
    *(undefined8 *)(uVar5 - 0x18) = unaff_RSI;
    uVar2 = *(uint *)(uVar9 - 0x1c);
    *(ulonglong *)(uVar5 - 0x20) = (ulonglong)unaff_EDI;
    if (*(short *)((ulonglong)*(uint *)(ulonglong)uVar2 + (ulonglong)(iVar3 >> 8 & 0xff) * 2) < 0) {
      *(char *)(uVar9 - 0x10) = (char)((uint)iVar3 >> 8);
      *(undefined8 *)(uVar5 - 0x28) = 2;
      *(char *)(uVar9 - 0xf) = (char)iVar3;
      *(undefined1 *)(uVar9 - 0xe) = 0;
      uVar4 = *(undefined8 *)(uVar5 - 0x28);
      *(undefined8 *)(uVar5 - 0x28) = 1;
    }
    else {
      *(char *)(uVar9 - 0x10) = (char)iVar3;
      uVar4 = 0;
      *(undefined1 *)(uVar9 - 0xf) = 0;
      *(undefined8 *)(uVar5 - 0x28) = 1;
    }
    *(undefined4 *)(uVar9 - 0xc) = 0;
    *(undefined2 *)(uVar9 - 8) = 0;
    *(undefined8 *)(uVar5 - 0x30) = *(undefined8 *)((uint *)(ulonglong)uVar2 + 2);
    *(ulonglong *)(uVar5 - 0x38) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
    *(undefined8 *)(uVar5 - 0x40) = uVar4;
    *(ulonglong *)(uVar5 - 0x48) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
    *(undefined8 *)(uVar5 - 0x50) = 1;
    *(ulonglong *)(uVar5 - 0x58) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x1c);
    *(undefined8 *)(uVar5 - 0x60) = 0x1408d0789;
    iVar3 = FUN_1408cdf50();
    uVar6 = (ulonglong)((int)(uVar5 - 0x58) + 0x1c);
    puVar7 = (undefined1 *)(uVar6 + 0x18);
    if (iVar3 == 0) {
      puVar8 = (undefined1 *)(uVar6 + 0x18);
      if (*(char *)(uVar9 - 0x14) != '\0') {
        puVar1 = (uint *)((ulonglong)*(uint *)(uVar9 - 0x20) + 0x350);
        *puVar1 = *puVar1 & 0xfffffffd;
        puVar8 = (undefined1 *)(uVar6 + 0x18);
      }
      goto LAB_1408d07bd;
    }
  }
  puVar8 = puVar7;
  if (*(char *)(uVar9 - 0x14) != '\0') {
    puVar1 = (uint *)((ulonglong)*(uint *)(uVar9 - 0x20) + 0x350);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
LAB_1408d07bd:
  uVar2 = *(uint *)(uVar9 - 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar8 + -8) = &UNK_1408d07c7;
  FUN_1408802b0(uVar2 ^ (uint)&stack0xfffffffffffffff8);
}


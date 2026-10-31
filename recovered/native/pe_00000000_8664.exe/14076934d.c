/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076934d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076934d(void)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined8 uStack_18;
  
  uVar5 = (ulonglong)_DAT_150b06aa1;
  if (*(char *)(uVar5 + 0x2748) != '\x01') {
    return;
  }
  uStack_18 = 0x10355ea0;
  FUN_140768ac6();
  puVar4 = (undefined1 *)(ulonglong)((int)&uStack_18 + 4);
  uVar1 = *(uint *)(uVar5 + 0x274c) & 0xf;
  if (uVar1 - 1 < (uVar1 ^ uVar1 - 1)) {
    iVar3 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    if (iVar3 == 3) {
      if (*(int *)(uVar5 + 0x2758) < 2) goto LAB_1407693d0;
      uVar2 = 0x1039d750;
      if (*(uint *)(uVar5 + 0x2760) != 0) {
        uVar2 = (ulonglong)*(uint *)(uVar5 + 0x2760);
      }
      *(ulonglong *)(puVar4 + -8) = uVar2;
      *(undefined8 *)(puVar4 + -0x10) = 0x1407693cd;
      FUN_14075b1c2();
      iVar3 = (int)(puVar4 + -8);
    }
    else if (iVar3 == 1) {
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(uVar5 + 0x2754);
      *(undefined8 *)(puVar4 + -0x10) = 0x1407693ac;
      FUN_1407527ba();
      iVar3 = (int)(puVar4 + -8);
    }
    else {
      if (iVar3 != 0) goto LAB_1407693d0;
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(uVar5 + 0x2754);
      *(undefined8 *)(puVar4 + -0x10) = 0x14076939f;
      FUN_1408c5568();
      iVar3 = (int)(puVar4 + -8);
    }
    puVar4 = (undefined1 *)(ulonglong)(iVar3 + 4);
  }
LAB_1407693d0:
  *(undefined1 *)(uVar5 + 0x1526) = 0;
  *(undefined1 *)(uVar5 + 0x2748) = 0;
  *(undefined4 *)(uVar5 + 0x274c) = 0;
  *(undefined4 *)(uVar5 + 0x2754) = 0;
  if (*(uint *)(uVar5 + 0x2760) == 0) {
    return;
  }
  *(undefined4 *)(uVar5 + 0x275c) = 0;
  *(undefined4 *)(uVar5 + 0x2758) = 0;
  *(ulonglong *)(puVar4 + -8) = (ulonglong)*(uint *)(uVar5 + 0x2760);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar4 + -0x10) = &UNK_140769406;
  FUN_14075219b();
}


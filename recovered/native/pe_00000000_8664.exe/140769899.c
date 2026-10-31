/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769899 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769899(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  ulonglong uStack_20;
  
  *(char *)(ulonglong)_DAT_14ccb88b1039d74c =
       *(char *)(ulonglong)_DAT_14ccb88b1039d74c + (char)_DAT_14ccb88b1039d74c;
  uVar1 = *(uint *)(unaff_RDI + 0x230);
  if (uVar1 == *(uint *)(unaff_RDI + 0x234)) {
    if (uVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = (int)uVar1 / 2 + uVar1;
    }
    iVar4 = uVar1 + 1;
    if ((int)(uVar1 + 1) < iVar3) {
      iVar4 = iVar3;
    }
    uStack_20 = (ulonglong)(uint)(iVar4 * 4);
    uVar2 = FUN_1407520ca();
    uVar5 = (ulonglong)((int)&uStack_20 + 4);
    uVar7 = (ulonglong)uVar2;
    uVar1 = *(uint *)(unaff_RDI + 0x238);
    if (uVar1 != 0) {
      *(ulonglong *)(uVar5 - 8) = (ulonglong)(uint)(*(int *)(unaff_RDI + 0x230) << 2);
      *(ulonglong *)(uVar5 - 0x10) = (ulonglong)uVar1;
      *(ulonglong *)(uVar5 - 0x18) = uVar7;
      *(undefined8 *)(uVar5 - 0x20) = 0x14076990e;
      FUN_1408b31a0();
      uVar6 = (ulonglong)((int)(uVar5 - 0x18) + 0xc);
      *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(unaff_RDI + 0x238);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar6 - 0x10) = &UNK_14076991c;
      FUN_14075219b();
    }
    *(uint *)(unaff_RDI + 0x238) = uVar2;
    *(int *)(unaff_RDI + 0x234) = iVar4;
    uVar1 = *(uint *)(unaff_RDI + 0x230);
    unaff_EBX = *(undefined4 *)(uVar5 + 0x10);
  }
  else {
    uVar7 = (ulonglong)*(uint *)(unaff_RDI + 0x238);
  }
  *(undefined4 *)(uVar7 + (ulonglong)uVar1 * 4) = *(undefined4 *)(unaff_RDI + 0x220);
  *(int *)(unaff_RDI + 0x230) = *(int *)(unaff_RDI + 0x230) + 1;
  *(undefined4 *)(unaff_RDI + 0x220) = unaff_EBX;
  return;
}


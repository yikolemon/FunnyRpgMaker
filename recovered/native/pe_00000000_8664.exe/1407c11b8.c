/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c11b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407c11b8(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  
  *(char *)(ulonglong)_DAT_14ccb88b1039d74c =
       *(char *)(ulonglong)_DAT_14ccb88b1039d74c + (char)_DAT_14ccb88b1039d74c;
  uVar1 = *(uint *)(unaff_RDI + 0x1e8);
  uVar6 = (ulonglong)uVar1;
  if (*(int *)(uVar6 + 0x10) != 1) {
    uVar2 = *(undefined4 *)(unaff_RDI + 0x290);
    uVar3 = *(undefined4 *)(unaff_RDI + 0x294);
    uVar4 = *(undefined4 *)(unaff_RDI + 0x298);
    *(undefined4 *)(uVar6 + 0x3c) = *(undefined4 *)(unaff_RDI + 0x28c);
    *(undefined4 *)(uVar6 + 0x40) = uVar2;
    *(undefined4 *)(uVar6 + 0x44) = uVar3;
    *(undefined4 *)(uVar6 + 0x48) = uVar4;
    FUN_1407bd486();
    uVar5 = (ulonglong)((int)&stack0xffffffffffffffe0 + 8);
    *(undefined8 *)(uVar5 - 8) = 0;
    *(undefined8 *)(uVar5 - 0x10) = *(undefined8 *)(unaff_RDI + 0x2e8);
    *(undefined8 *)(uVar5 - 0x18) = 0x1407c11fb;
    FUN_1407e5d3c(uVar1 + 0x68);
  }
  return;
}


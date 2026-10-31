/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c11fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407c11fe(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  *(char *)(ulonglong)_DAT_14ccb88b1039d74c =
       *(char *)(ulonglong)_DAT_14ccb88b1039d74c + (char)_DAT_14ccb88b1039d74c;
  uVar1 = *(uint *)(unaff_RDI + 0x1e8);
  if (*(int *)((ulonglong)uVar1 + 0x10) != 1) {
    FUN_1407bd486();
    uVar2 = (ulonglong)((int)&stack0xffffffffffffffe0 + 8);
    *(ulonglong *)(uVar2 - 8) = (ulonglong)*(uint *)((ulonglong)uVar1 + 0xc);
    *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(unaff_RDI + 0x2e8);
    *(undefined8 *)(uVar2 - 0x18) = 0x1407c1239;
    FUN_1407e5d3c(uVar1 + 0x68);
  }
  return;
}


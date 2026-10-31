/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c229f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407c229f(void)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  byte unaff_retaddr;
  int iVar3;
  
  iVar3 = (int)((ulonglong)unaff_RDI >> 0x20);
  uVar2 = (ulonglong)_DAT_150b5f9fb;
  *(undefined1 *)((ulonglong)*(uint *)(uVar2 + 0x14cc) + 0xfb) = 1;
  uVar1 = *(uint *)((ulonglong)*(uint *)(uVar2 + 0x14cc) + 0x1e8);
  if (uVar1 != 0) {
    if ((*(int *)((ulonglong)uVar1 + 0x10) == iVar3) &&
       (*(uint *)((ulonglong)uVar1 + 4) == (uint)(unaff_retaddr ^ 1))) {
      return;
    }
    FUN_1407c1e26();
  }
  if (iVar3 != 1) {
    FUN_1407c169d();
  }
  return;
}


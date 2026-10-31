/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c52a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408c52a0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  double in_stack_00000004;
  
  uVar1 = (uint)((ulonglong)in_stack_00000004 >> 0x34);
  if (((ulonglong)in_stack_00000004 >> 0x34 & 0x800) == 0) {
    if (uVar1 < 0x3ff) {
      return;
    }
    if (uVar1 < 0x433) {
      return;
    }
  }
  else {
    if (uVar1 < 0xbff) {
      return;
    }
    if (uVar1 < 0xc33) {
      return;
    }
  }
  if (NAN(in_stack_00000004)) {
    piVar3 = (int *)(ulonglong)((int)&stack0x00000000 - 0x10);
    piVar3[3] = 0x3ec;
    iVar2 = (int)&stack0x00000000 + 4;
    piVar3[2] = iVar2;
    piVar3[1] = iVar2;
    *piVar3 = iVar2;
    piVar3[-2] = 0x408c531a;
    piVar3[-1] = 1;
    FUN_1408d5cb0();
  }
  return;
}


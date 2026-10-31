/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752ed4 */

void FUN_140752ed4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 unaff_RDI;
  int unaff_retaddr;
  uint unaff_retaddr_00;
  
  uVar1 = (uint)((ulonglong)unaff_RDI >> 0x20);
  if (unaff_retaddr - uVar1 != 0) {
    uVar2 = (int)(unaff_retaddr - uVar1) >> 3;
    do {
      uVar4 = uVar2 >> 1;
      uVar5 = ~uVar4 + uVar2;
      uVar3 = uVar1 + uVar4 * 8 + 8;
      uVar2 = uVar4;
      if (*(uint *)((ulonglong)uVar3 - 8) < unaff_retaddr_00) {
        uVar1 = uVar3;
        uVar2 = uVar5;
      }
    } while (uVar2 != 0);
  }
  return;
}


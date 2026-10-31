/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076c9aa */

/* WARNING: Instruction at (ram,0x00014076c9e4) overlaps instruction at (ram,0x00014076c9de)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076c9aa(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar3 = (ulonglong)_DAT_150b0a103;
  uVar1 = *(uint *)(uVar3 + 0x1484);
  uVar2 = *(uint *)(((ulonglong)*(uint *)(uVar3 + 0x148c) - 4) + (ulonglong)uVar1 * 4);
  if ((uVar2 != unaff_EBX) &&
     (bVar4 = *(uint *)((ulonglong)uVar2 + 0x3b0) != unaff_EBX, bVar5 = 1 < (int)uVar1 && bVar4,
     1 < (int)uVar1 && bVar4)) {
    while (!bVar5) {
      if ((int)uVar1 < 1) {
        return;
      }
      bVar5 = *(uint *)(((ulonglong)*(uint *)(uVar3 + 0x148c) - 4) + (ulonglong)uVar1 * 4) ==
              unaff_EBX;
    }
    FUN_1408b31a0();
    *(uint *)(((ulonglong)*(uint *)(uVar3 + 0x148c) - 4) + (ulonglong)*(uint *)(uVar3 + 0x1484) * 4)
         = unaff_EBX;
  }
  return;
}


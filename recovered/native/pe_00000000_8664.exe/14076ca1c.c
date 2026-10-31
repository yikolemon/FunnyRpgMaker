/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ca1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076ca1c(void)

{
  short *psVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  uint uVar5;
  int unaff_R14D;
  int unaff_R15D;
  uint uVar7;
  ulonglong uVar6;
  
  uVar7 = (uint)((ulonglong)unaff_RBX >> 0x20);
  uVar3 = (ulonglong)_DAT_150b0a176;
  uVar2 = *(uint *)(uVar3 + 0x1490);
  uVar4 = (ulonglong)*(uint *)(uVar3 + 0x1498);
  if (*(uint *)((uVar4 - 4) + (ulonglong)uVar2 * 4) != uVar7) {
    uVar5 = (uint)*(short *)((ulonglong)uVar7 + 0x110);
    uVar6 = (ulonglong)uVar5;
    if ((int)uVar5 < (int)(uVar2 - 1)) {
      do {
        *(undefined4 *)((ulonglong)*(uint *)(uVar3 + 0x1498) + uVar6 * 4) =
             *(undefined4 *)((ulonglong)*(uint *)(uVar3 + 0x1498) + 4 + uVar6 * 4);
        psVar1 = (short *)((ulonglong)*(uint *)((ulonglong)*(uint *)(uVar3 + 0x1498) + uVar6 * 4) +
                          0x110);
        *psVar1 = *psVar1 + -1;
      } while (unaff_R14D != unaff_R15D);
      uVar4 = (ulonglong)*(uint *)(uVar3 + 0x1498);
    }
    *(uint *)((uVar4 - 4) + (ulonglong)uVar2 * 4) = uVar7;
    *(short *)((ulonglong)uVar7 + 0x110) = (short)(uVar2 - 1);
  }
  return;
}


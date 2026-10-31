/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd164 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bd164(void)

{
  short sVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  uint unaff_retaddr;
  int iVar6;
  int iVar7;
  
  uVar2 = _DAT_2308808b1039d74c;
  pcVar3 = (char *)(ulonglong)_DAT_2308808b1039d74c;
  *pcVar3 = *pcVar3 + (char)_DAT_2308808b1039d74c;
  if (uVar2 == 0) {
    FUN_140754dc5();
  }
  else {
    iVar7 = (int)((ulonglong)unaff_RBX >> 0x20);
    iVar6 = (int)unaff_RBX;
    iVar4 = 0;
    if (iVar7 != 0x1000000) {
      iVar4 = iVar7;
    }
    if (iVar6 - 1U < 2) {
      if (*(float *)(pcVar3 + 0x50) < *(float *)(pcVar3 + 0x100) ||
          *(float *)(pcVar3 + 0x50) == *(float *)(pcVar3 + 0x100)) {
        *(int *)(pcVar3 + (ulonglong)(iVar6 == 2) * 4 + 0x70) = iVar4;
      }
    }
    else if ((iVar6 == 3) &&
            (*(float *)(pcVar3 + 0x50) < *(float *)(pcVar3 + 0x100) ||
             *(float *)(pcVar3 + 0x50) == *(float *)(pcVar3 + 0x100))) {
      if (unaff_retaddr == 0xffffffff) {
        unaff_retaddr = *(uint *)(pcVar3 + 0x48);
      }
      if ((*(uint *)((ulonglong)*(uint *)(pcVar3 + 0x30) +
                    (ulonglong)(uint)((int)unaff_retaddr >> 5) * 4) >> (unaff_retaddr & 0x1f) & 1)
          != 0) {
        sVar1 = *(short *)(pcVar3 + 0x1e4);
        if ((sVar1 < 0) ||
           (uVar5 = (ulonglong)*(uint *)(pcVar3 + 0x20),
           unaff_retaddr != (int)*(short *)(uVar5 + 4 + (ulonglong)(uint)(int)sVar1 * 8))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(int *)(uVar5 + (ulonglong)(uint)(int)sVar1 * 8) = iVar4;
        *(short *)(uVar5 + 4 + (ulonglong)(uint)(int)sVar1 * 8) = (short)unaff_retaddr;
      }
    }
  }
  return;
}


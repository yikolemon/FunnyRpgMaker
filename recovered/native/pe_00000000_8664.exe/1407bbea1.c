/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bbea1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bbea1(void)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  int unaff_retaddr;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  pcVar1 = (char *)(ulonglong)_DAT_2308808b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_2308808b1039d74c;
  if (unaff_retaddr == -1) {
    unaff_retaddr = *(int *)(pcVar1 + 0x48);
  }
  if ((pcVar1[4] & 7U) != 0) {
    iVar3 = 0xffff;
    if (unaff_retaddr != *(int *)(pcVar1 + 0x40)) {
      iVar3 = unaff_retaddr;
    }
    pcVar1[0x1f2] = '\x01';
    *(short *)(pcVar1 + 0x1da) = (short)iVar3;
    *(undefined2 *)(pcVar1 + 0x4e) = *(undefined2 *)(pcVar1 + 0x4c);
    uStack_10 = *(undefined8 *)pcVar1;
    uStack_18 = 0;
    uStack_20 = 0x10330ed3;
    uVar2 = FUN_140752593();
    uVar4 = (ulonglong)((int)&uStack_20 + 0xc);
    *(undefined8 *)(uVar4 - 8) = 0;
    *(undefined8 *)(uVar4 - 0x10) = uVar2;
    *(undefined8 *)(uVar4 - 0x18) = 0x1407bbef9;
    FUN_14076ddbd();
  }
  return;
}


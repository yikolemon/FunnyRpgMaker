/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407524a7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407524a7(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  int *piVar6;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  uint uVar7;
  
  piVar4 = (int *)(ulonglong)unaff_retaddr_00;
  pcVar3 = (char *)(ulonglong)unaff_retaddr;
  uVar7 = (uint)(unaff_RBX >> 0x20);
  piVar6 = (int *)(unaff_RBX & 0xffffffff);
  uVar5 = (ulonglong)_DAT_150aefc0c;
  if (*pcVar3 == '%') {
    if (pcVar3[1] == '.') {
      if (((pcVar3[2] != '*') || (pcVar3[3] != 's')) || (pcVar3[4] != '\0')) goto LAB_140752508;
      iVar1 = *piVar4;
      iVar2 = piVar4[1];
      if (iVar2 == 0) {
        iVar2 = 0x103482c2;
        iVar1 = FUN_140752553();
      }
      *piVar6 = iVar2;
    }
    else {
      if ((pcVar3[1] != 's') || (pcVar3[2] != '\0')) goto LAB_140752508;
      iVar2 = 0x103482c2;
      if (*piVar4 != 0) {
        iVar2 = *piVar4;
      }
      *piVar6 = iVar2;
      if (uVar7 == 0) {
        return;
      }
      iVar1 = FUN_1408c85c0();
    }
    iVar1 = iVar1 + iVar2;
  }
  else {
LAB_140752508:
    iVar2 = FUN_140752404();
    iVar1 = *(int *)(uVar5 + 0x29a8);
    *piVar6 = iVar1;
    if (uVar7 == 0) {
      return;
    }
    iVar1 = iVar1 + iVar2;
  }
  *(int *)(ulonglong)uVar7 = iVar1;
  return;
}


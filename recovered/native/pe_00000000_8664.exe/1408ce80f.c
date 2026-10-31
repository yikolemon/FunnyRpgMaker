/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408ce80f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408ce80f(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  longlong unaff_RBP;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  
  FUN_1408d05b0();
  *(undefined4 *)(unaff_RBP + -0x1c) = 0;
  uVar7 = (ulonglong)*(uint *)(unaff_RBP + 8);
  pcVar3 = (char *)(ulonglong)_DAT_35087851039bbd0;
  *pcVar3 = *pcVar3 + (char)_DAT_35087851039bbd0;
  if ((*pcVar3 == '\0') || (*(int *)(uVar7 + 0x4c) == 0)) {
    FUN_1408c1f00();
    piVar4 = (int *)0x5;
    *(undefined4 *)(unaff_RBP + -4) = 0;
    uVar5 = *(uint *)(uVar7 + 0x48);
    piVar6 = (int *)(ulonglong)uVar5;
    *(uint *)(unaff_RBP + -0x1c) = uVar5;
    uVar2 = *(uint *)(unaff_RBP + 0xc);
    if (uVar5 != *(uint *)(ulonglong)uVar2) {
      if (uVar5 != 0) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = iVar1 + -1;
        UNLOCK();
        if ((iVar1 + -1 == 0) && (uVar5 != 0x1039b6b0)) {
          FUN_1408cbff0(5);
          piVar4 = piVar6;
        }
      }
      uVar5 = *(uint *)(ulonglong)uVar2;
      *(uint *)(uVar7 + 0x48) = uVar5;
      *(uint *)(unaff_RBP + -0x1c) = uVar5;
      LOCK();
      *(int *)(ulonglong)uVar5 = *(int *)(ulonglong)uVar5 + 1;
      UNLOCK();
    }
    *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
    FUN_1408ce88e(piVar4);
  }
  else {
    uVar5 = *(uint *)(uVar7 + 0x48);
  }
  if (uVar5 != 0) {
    FUN_1408ce897();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1408c4986();
}


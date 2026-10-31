/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140094b3c */

void FUN_140094b3c(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 unaff_RBP;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar3 = 0;
  iVar4 = 0;
  if (iVar2 < 0x3f) {
    if (iVar2 != 0x2a) {
      if (iVar2 != 0x2b) {
        return;
      }
      iVar3 = 1;
    }
  }
  else {
    if (iVar2 == 0x3f) {
      iVar2 = 1;
      goto LAB_140094bf9;
    }
    if (iVar2 != 0x7b) {
      return;
    }
    FUN_14009474c(param_1);
    cVar1 = FUN_140094d2a(param_1,7,0);
    if (cVar1 == '\0') goto LAB_140094bd7;
    iVar3 = *(int *)(param_1 + 0x6c);
    iVar4 = *(int *)(param_1 + 0x70);
    iVar2 = iVar3;
    if (iVar4 == 0x2c) {
      FUN_14009474c(param_1);
      if (*(int *)(param_1 + 0x70) == 0x7d) goto LAB_140094be4;
      cVar1 = FUN_140094d2a(param_1,7,0);
      if (cVar1 == '\0') goto LAB_140094bd7;
      iVar2 = *(int *)(param_1 + 0x6c);
      iVar4 = *(int *)(param_1 + 0x70);
    }
    if (iVar4 != 0x7d) {
LAB_140094bd7:
                    /* WARNING: Subroutine does not return */
      FUN_14009484e(param_1,7);
    }
    if (iVar2 != -1) {
      iVar4 = iVar3;
      if (iVar2 < iVar3) goto LAB_140094bd7;
      goto LAB_140094bf9;
    }
  }
LAB_140094be4:
  iVar2 = -1;
  iVar4 = iVar3;
LAB_140094bf9:
  FUN_14009474c(param_1);
  bVar5 = (*(byte *)(param_1 + 0x61) & 2) == 0;
  bVar6 = *(int *)(param_1 + 0x70) != 0x3f;
  if (!bVar6 && !bVar5) {
    FUN_14009474c(param_1);
  }
  FUN_140096c9e(param_1 + 0x38,iVar4,iVar2,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar6 || bVar5) & 0xffffffff);
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005e19c */

void FUN_14005e19c(longlong param_1)

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
      goto LAB_14005e259;
    }
    if (iVar2 != 0x7b) {
      return;
    }
    FUN_14005ddac(param_1);
    cVar1 = FUN_14005e38a(param_1,7,0);
    if (cVar1 == '\0') goto LAB_14005e237;
    iVar3 = *(int *)(param_1 + 0x6c);
    iVar4 = *(int *)(param_1 + 0x70);
    iVar2 = iVar3;
    if (iVar4 == 0x2c) {
      FUN_14005ddac(param_1);
      if (*(int *)(param_1 + 0x70) == 0x7d) goto LAB_14005e244;
      cVar1 = FUN_14005e38a(param_1,7,0);
      if (cVar1 == '\0') goto LAB_14005e237;
      iVar2 = *(int *)(param_1 + 0x6c);
      iVar4 = *(int *)(param_1 + 0x70);
    }
    if (iVar4 != 0x7d) {
LAB_14005e237:
                    /* WARNING: Subroutine does not return */
      FUN_14005deae(param_1,7);
    }
    if (iVar2 != -1) {
      iVar4 = iVar3;
      if (iVar2 < iVar3) goto LAB_14005e237;
      goto LAB_14005e259;
    }
  }
LAB_14005e244:
  iVar2 = -1;
  iVar4 = iVar3;
LAB_14005e259:
  FUN_14005ddac(param_1);
  bVar5 = (*(byte *)(param_1 + 0x61) & 2) == 0;
  bVar6 = *(int *)(param_1 + 0x70) != 0x3f;
  if (!bVar6 && !bVar5) {
    FUN_14005ddac(param_1);
  }
  FUN_14006048a(param_1 + 0x38,iVar4,iVar2,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar6 || bVar5) & 0xffffffff);
  return;
}


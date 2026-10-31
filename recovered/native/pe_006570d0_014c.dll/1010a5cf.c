/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010a5cf */

int FUN_1010a5cf(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int local_18;
  
  iVar5 = FUN_1010a65a(param_1);
  if (iVar5 < 0) {
    local_18 = param_1;
  }
  else {
    iVar1 = *(int *)(DAT_1039d74c + 0x148c);
    local_18 = param_1;
    iVar5 = iVar5 + 1;
    do {
      iVar6 = *(int *)(iVar1 + -4 + iVar5 * 4);
      uVar2 = *(uint *)(iVar6 + 0xc);
      if ((uVar2 >> 0x18 & 1) == 0) {
        cVar4 = FUN_101029f7(iVar6,param_1);
        if (cVar4 == '\0') {
          return local_18;
        }
        cVar4 = FUN_1010a68d();
        if ((cVar4 != '\0') &&
           ((uVar2 >> 0x19 & 1) <= (uint)((*(uint *)(param_1 + 0xc) >> 0x19 & 1) != 0))) {
          local_18 = iVar6;
        }
      }
      iVar6 = iVar5 + -1;
      bVar3 = 0 < iVar5;
      iVar5 = iVar6;
    } while (iVar6 != 0 && bVar3);
  }
  return local_18;
}


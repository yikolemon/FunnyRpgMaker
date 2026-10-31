/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075be54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14075be54(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 unaff_RDI;
  bool in_CF;
  bool bVar6;
  bool bVar7;
  uint unaff_retaddr;
  int iVar8;
  
  uVar4 = (ulonglong)_DAT_ae2ba0f1039d74c;
  if (in_CF) {
    iVar8 = *(int *)(uVar4 + 0x1fbc);
    if ((unaff_retaddr >> 0xb & 1) == 0) {
      iVar3 = *(int *)(uVar4 + 0x1fc8);
      bVar7 = SBORROW4(iVar8,iVar3);
      bVar6 = iVar8 == iVar3;
      iVar8 = iVar8 - iVar3;
    }
    else {
      bVar7 = false;
      bVar6 = iVar8 == 0;
    }
    uVar4 = (ulonglong)CONCAT31((int3)(_DAT_ae2ba0f1039d74c >> 8),!bVar6 && bVar7 == iVar8 < 0);
  }
  else {
    iVar8 = (int)((ulonglong)unaff_RDI >> 0x20);
    if ((unaff_retaddr >> 0xb & 1) == 0) {
      if (*(int *)(uVar4 + 0x1fc8) < *(int *)(uVar4 + 0x1fbc)) {
        return (ulonglong)
               CONCAT31((int3)(*(uint *)(uVar4 + 0x1fc4) >> 8),
                        *(int *)((ulonglong)*(uint *)(uVar4 + 0x1fc4) +
                                (ulonglong)(uint)(*(int *)(uVar4 + 0x1fc8) * 5) * 8) == iVar8);
      }
    }
    else {
      piVar1 = (int *)(uVar4 + 0x1fbc);
      uVar5 = 0;
      if (*piVar1 != 0) {
        puVar2 = (uint *)(uVar4 + 0x1fc4);
        do {
          bVar6 = *(int *)((ulonglong)*puVar2 + (ulonglong)uVar5) == iVar8;
          uVar4 = CONCAT71((int7)(uVar4 >> 8),bVar6);
          if (bVar6) {
            return uVar4;
          }
          bVar6 = *piVar1 * 0x28 - 0x28U != uVar5;
          uVar5 = uVar5 + 0x28;
        } while (bVar6);
        return uVar4;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


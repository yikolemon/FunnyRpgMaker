/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075a83d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14075a83d(void)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong unaff_RDI;
  ulonglong uVar5;
  uint unaff_retaddr;
  
  uVar2 = unaff_RDI >> 0x20;
  uVar5 = (ulonglong)_DAT_150af7f95;
  if (*(uint *)(uVar5 + 0x2048) != 0) {
    uVar1 = *(uint *)((ulonglong)*(uint *)(uVar5 + 0x2048) + 0x3b0);
    if (((((uVar1 != 0) && (*(char *)((ulonglong)uVar1 + 0xfa) == '\x01')) &&
         (uVar1 != *(uint *)(uVar2 + 0x3b0))) &&
        ((uVar1 = *(uint *)((ulonglong)uVar1 + 0xc), (uVar1 >> 0x1b & 1) != 0 ||
         (((unaff_retaddr & 0x20) == 0 && ((uVar1 & 0x4000000) != 0)))))) &&
       (cVar3 = FUN_14075a8c7(), cVar3 == '\0')) {
      return 0;
    }
  }
  uVar4 = (ulonglong)*(uint *)(uVar2 + 0x3c);
  if ((*(uint *)(uVar2 + 0x3c) != *(uint *)(uVar5 + 0x1ff0)) &&
     ((uVar4 = (ulonglong)*(uint *)(uVar5 + 0x14dc), *(uint *)(uVar5 + 0x14dc) == 0 ||
      (*(int *)(uVar2 + 0x3b0) != *(int *)(uVar4 + 0x3b0))))) {
    return 0;
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}


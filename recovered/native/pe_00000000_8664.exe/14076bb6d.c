/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076bb6d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14076bb6d(void)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  ulonglong unaff_RDI;
  bool bVar4;
  int unaff_retaddr;
  
  uVar2 = (uint)(unaff_RDI >> 0x20);
  if (0x9a < uVar2 - 0x200) {
    if ((uVar2 ^ uVar2 - 1) <= uVar2 - 1) {
      return true;
    }
    uVar1 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    if ((uVar1 & 0x1c) != 0xc) {
      return true;
    }
  }
  if ((((*(char *)((ulonglong)_DAT_150b092d7 + 0x1e34) == '\x01') && (uVar2 - 0x200 < 0x78)) &&
      (unaff_retaddr != 0)) && (unaff_retaddr != *(int *)((ulonglong)_DAT_150b092d7 + 0x1528))) {
    bVar4 = false;
  }
  else {
    if (((unaff_RDI & 0xf00000000000) != 0) && (uVar2 - 1 < (uVar2 ^ uVar2 - 1))) {
      uVar1 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if ((uVar1 & 0x1c) == 0xc) {
        uVar2 = uVar1 + 0x28b;
      }
    }
    piVar3 = (int *)(ulonglong)((_DAT_150b092d7 + uVar2 * 0xc) - 0x264);
    if (unaff_retaddr == 0) {
      bVar4 = (char)piVar3[2] == '\0';
    }
    else if ((*piVar3 == unaff_retaddr) ||
            ((bVar4 = false, *piVar3 == -1 && ((char)piVar3[2] == '\0')))) {
      bVar4 = true;
    }
  }
  return bVar4;
}


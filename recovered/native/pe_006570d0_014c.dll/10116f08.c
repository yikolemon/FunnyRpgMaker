/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116f08 */

char __fastcall FUN_10116f08(uint param_1)

{
  byte bVar1;
  char cVar2;
  
  if ((((*(int *)(DAT_1039d74c + 0x1528) == 0) || (*(char *)(DAT_1039d74c + 0x153a) != '\x01')) ||
      ((param_1 >> 0x1a & 1) == 0)) ||
     (cVar2 = '\x02', *(int *)(DAT_1039d74c + 0x1528) != *(int *)(DAT_1039d74c + 0x1e80))) {
    if (*(char *)(DAT_1039d74c + 0x2040) == '\x01') {
      bVar1 = *(int *)(DAT_1039d74c + 0x2048) != 0 & *(byte *)(DAT_1039d74c + 0x2041);
    }
    else {
      bVar1 = 0;
    }
    cVar2 = bVar1 + 1;
  }
  return cVar2;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014fafc */

char FUN_1014fafc(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  
  if (*(char *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfe) == '\0') {
    iVar1 = *(int *)(DAT_1039d74c + 0x2358);
    if (iVar1 != 0) {
      cVar2 = FUN_1014fb74(iVar1,param_1,param_2,param_3,0);
      if ((char)((param_3 & 8) >> 3) != '\0' || cVar2 != '\x01') {
        return cVar2;
      }
      FUN_10113406(*(undefined4 *)(*(int *)(iVar1 + 0xc) + *(short *)(iVar1 + 0x82) * 0x30));
      return '\x01';
    }
    FUN_100fcef5("Needs to be called between BeginTabBar() and EndTabBar()!");
  }
  return '\0';
}


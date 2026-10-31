/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ccbf1 */

char FUN_1400ccbf1(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  
  if (*(char *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10e) == '\0') {
    lVar1 = *(longlong *)(DAT_140f2a910 + 0x2560);
    if (lVar1 != 0) {
      cVar2 = FUN_1400ccc78(lVar1,param_1,param_2,param_3,0);
      if ((char)((param_3 & 8) >> 3) != '\0' || cVar2 != '\x01') {
        return cVar2;
      }
      FUN_1400914dd(*(undefined4 *)
                     (*(longlong *)(lVar1 + 0x10) + (longlong)*(short *)(lVar1 + 0x8a) * 0x38));
      return '\x01';
    }
    FUN_14007a954("Needs to be called between BeginTabBar() and EndTabBar()!",param_1,param_2);
  }
  return '\0';
}


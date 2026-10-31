/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180153cc1 */

char FUN_180153cc1(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  
  if (*(char *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10e) == '\0') {
    lVar1 = *(longlong *)(DAT_180419160 + 0x2560);
    if (lVar1 != 0) {
      cVar2 = FUN_180153d48(lVar1,param_1,param_2,param_3,0);
      if ((char)((param_3 & 8) >> 3) != '\0' || cVar2 != '\x01') {
        return cVar2;
      }
      FUN_1801181c5(*(undefined4 *)
                     (*(longlong *)(lVar1 + 0x10) + (longlong)*(short *)(lVar1 + 0x8a) * 0x38));
      return '\x01';
    }
    FUN_180101698("Needs to be called between BeginTabBar() and EndTabBar()!",param_1,param_2);
  }
  return '\0';
}


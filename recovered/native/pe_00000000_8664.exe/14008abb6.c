/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008abb6 */

longlong FUN_14008abb6(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  do {
    lVar3 = param_1;
    uVar2 = (ulonglong)*(uint *)(lVar3 + 0x1f0);
    do {
      if ((int)uVar2 < 1) {
        return lVar3;
      }
      param_1 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + -8 + uVar2 * 8);
      uVar2 = uVar2 - 1;
      cVar1 = FUN_14008851d(param_1);
    } while (cVar1 == '\0');
  } while( true );
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140364cf0 */

longlong FUN_140364cf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)*(int *)(param_1 + 8);
  if (0 < lVar3) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar1 = 0;
    do {
      if ((((lVar1 == 0) || (*(int *)(lVar1 + 0x14) < *(int *)(lVar2 + 0x14))) &&
          (*(longlong *)(lVar2 + 8) != 0)) && (*(char *)(*(longlong *)(lVar2 + 8) + 0x10a) != '\0'))
      {
        lVar1 = lVar2;
      }
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return lVar1;
  }
  return 0;
}


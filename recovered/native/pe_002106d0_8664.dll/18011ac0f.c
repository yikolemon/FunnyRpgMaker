/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011ac0f */

longlong FUN_18011ac0f(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(DAT_180419160 + 0x2148);
  if (0 < (longlong)iVar1) {
    lVar2 = *(longlong *)(DAT_180419160 + 0x2150);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar5);
      if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x17) & 8) != 0)) &&
         ((*(char *)(lVar3 + 0x109) != '\0' || (*(char *)(lVar3 + 0x10a) == '\x01')))) {
        if (param_1 == 0) {
          return lVar3;
        }
        cVar4 = FUN_18010757d(param_1,lVar3);
        if (cVar4 == '\0') {
          return lVar3;
        }
      }
      lVar5 = lVar5 + 0x38;
    } while ((longlong)iVar1 * 0x38 - lVar5 != 0);
  }
  return 0;
}


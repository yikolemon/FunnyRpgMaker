/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180151ea6 */

void FUN_180151ea6(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  
  lVar4 = DAT_180419160;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  if ((~*(uint *)(lVar1 + 0x14) & 0x14000000) == 0) {
    if ((*(short *)(lVar1 + 0x118) == *(short *)(lVar1 + 0x11a)) &&
       (*(int *)(DAT_180419160 + 0x22b0) == 0)) {
      lVar2 = *(longlong *)(lVar1 + 0x408);
      cVar5 = FUN_18011c165();
      if ((cVar5 != '\0') &&
         (((lVar3 = *(longlong *)(lVar4 + 0x2200), lVar3 != 0 &&
           (*(longlong *)(lVar3 + 0x438) == lVar1)) && (*(int *)(lVar2 + 0x214) == 1)))) {
        FUN_18011b0d8(*(int *)(lVar4 + 0x2158) + -1,1);
        FUN_180110ca9();
      }
    }
    FUN_18011b3ef();
    return;
  }
  FUN_180101698("Calling EndMenu() in wrong window!");
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cadd6 */

void FUN_1400cadd6(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  
  lVar4 = DAT_140f2a910;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if ((~*(uint *)(lVar1 + 0x14) & 0x14000000) == 0) {
    if ((*(short *)(lVar1 + 0x118) == *(short *)(lVar1 + 0x11a)) &&
       (*(int *)(DAT_140f2a910 + 0x22b0) == 0)) {
      lVar2 = *(longlong *)(lVar1 + 0x408);
      cVar5 = FUN_140095421();
      if ((cVar5 != '\0') &&
         (((lVar3 = *(longlong *)(lVar4 + 0x2200), lVar3 != 0 &&
           (*(longlong *)(lVar3 + 0x438) == lVar1)) && (*(int *)(lVar2 + 0x214) == 1)))) {
        FUN_140094394(*(int *)(lVar4 + 0x2158) + -1,1);
        FUN_140089fc1();
      }
    }
    FUN_1400946ab();
    return;
  }
  FUN_14007a954("Calling EndMenu() in wrong window!");
  return;
}


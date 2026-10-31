/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ab841 */

int Unwind_1400ab841(void)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong unaff_RBX;
  longlong unaff_RSI;
  int unaff_EDI;
  char cVar7;
  byte in_CF;
  
  piVar1 = (int *)(unaff_RBX * 3 + -0x77);
  *piVar1 = *piVar1 + (int)unaff_RSI + (uint)in_CF;
  *(undefined2 *)(unaff_RSI + 5) = 0xff00;
  if (*(int *)(unaff_RSI + 0xc) < 0) {
    uVar5 = FUN_140077ab4(0);
    if (*(longlong *)(unaff_RSI + 0x10) != 0) {
      FUN_1401c5180(uVar5,*(longlong *)(unaff_RSI + 0x10),(longlong)*(int *)(unaff_RSI + 8) * 0xc);
      FUN_140077b90(*(undefined8 *)(unaff_RSI + 0x10));
    }
    *(undefined8 *)(unaff_RSI + 0x10) = uVar5;
    *(undefined4 *)(unaff_RSI + 0xc) = 0;
  }
  *(undefined4 *)(unaff_RSI + 8) = 0;
  FUN_1400ab942(unaff_RSI + 0x18,0);
  *(undefined1 *)(unaff_RSI + 4) = 0;
  iVar4 = 0;
  if (unaff_EDI != 0) {
    cVar7 = *(char *)(unaff_RSI + 6);
    uVar6 = (uint)cVar7;
    uVar3 = *(uint *)(unaff_RSI + 8);
    if (cVar7 < '\0') {
      *(bool *)(unaff_RSI + 5) = uVar3 == uVar6;
      iVar4 = 0;
      if (cVar7 == -1) {
        *(undefined1 *)(unaff_RSI + 4) = 1;
        iVar4 = unaff_EDI;
      }
    }
    else {
      if ((int)uVar6 < (int)uVar3) {
        if ((*(char *)(*(longlong *)(unaff_RSI + 0x10) + 5 + (ulonglong)uVar6 * 0xc) != '\0') ||
           ('\x02' < *(char *)(*(longlong *)(unaff_RSI + 0x10) + (ulonglong)uVar6 * 0xc + 4))) {
          cVar7 = cVar7 + '\x01';
          *(char *)(unaff_RSI + 6) = cVar7;
          uVar6 = (uint)cVar7;
        }
      }
      *(bool *)(unaff_RSI + 5) = uVar3 == uVar6;
      if ((int)uVar6 < (int)uVar3 && -1 < cVar7) {
        pcVar2 = (char *)(*(longlong *)(unaff_RSI + 0x10) + 4 + (longlong)(int)uVar6 * 0xc);
        *pcVar2 = *pcVar2 + '\x01';
        *(undefined1 *)(unaff_RSI + 4) = 1;
        iVar4 = *(int *)(*(longlong *)(unaff_RSI + 0x10) + (longlong)*(char *)(unaff_RSI + 6) * 0xc)
        ;
      }
    }
  }
  return iVar4;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c9e35 */

void FUN_1400c9e35(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar6 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar6 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    cVar4 = FUN_140095421();
    if (((cVar4 == '\0') || (1 < *(uint *)(lVar6 + 0x22b0))) ||
       (lVar2 = *(longlong *)(lVar6 + 0x2200),
       (*(byte *)(*(longlong *)(lVar6 + 0x2200) + 0x17) & 0x10) == 0)) {
      FUN_14009499f(lVar1,4);
    }
    else {
      do {
        lVar5 = lVar2;
        lVar2 = *(longlong *)(lVar5 + 0x408);
        if (lVar2 == 0) break;
      } while ((*(byte *)(lVar2 + 0x17) & 0x10) != 0);
      if (((lVar2 == lVar1) && (*(int *)(lVar5 + 0x218) == 0)) &&
         ((*(byte *)(lVar6 + 0x22a4) & 0x80) == 0)) {
        FUN_140081404(lVar1,0);
        FUN_1400952ab(*(undefined4 *)(lVar1 + 0x454),1,0,lVar1 + 0x468);
        if (*(char *)(lVar6 + 0x21f4) == '\x01') {
          *(undefined1 *)(lVar6 + 0x21f4) = 0;
          *(undefined1 *)(lVar6 + 0x2260) = 2;
        }
        *(undefined2 *)(lVar6 + 0x21f5) = 0x101;
        FUN_1400954b2(*(undefined4 *)(lVar6 + 0x22b0),*(undefined4 *)(lVar6 + 0x22b8),
                      *(undefined4 *)(lVar6 + 0x22a4),*(undefined4 *)(lVar6 + 0x22a8));
      }
    }
    FUN_140088407();
    FUN_140091667();
    *(float *)(lVar1 + 0x1bc) = *(float *)(lVar1 + 0x158) - *(float *)(lVar1 + 0x60);
    lVar2 = *(longlong *)(lVar6 + 0x2140);
    lVar6 = (longlong)*(int *)(lVar6 + 0x2138) * 0x3c;
    *(undefined1 *)(lVar2 + -4 + lVar6) = 0;
    uVar3 = *(undefined8 *)(lVar2 + -0x30 + lVar6);
    uVar7 = FUN_14007b71f(*(undefined4 *)(lVar1 + 0x178),
                          *(float *)(lVar1 + 0x170) - *(float *)(lVar1 + 0xd4));
    *(undefined4 *)(lVar1 + 0x178) = uVar7;
    FUN_1400927b2();
    *(undefined4 *)(lVar1 + 0x214) = 1;
    *(undefined1 *)(lVar1 + 0x198) = 0;
    *(undefined4 *)(lVar1 + 0x1b0) = 0;
    *(undefined1 *)(lVar1 + 0x1bb) = 0;
    *(undefined8 *)(lVar1 + 0x170) = uVar3;
  }
  return;
}


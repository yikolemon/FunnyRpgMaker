/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008845f */

longlong FUN_14008845f(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar4 = FUN_1400884e3();
  lVar5 = param_1;
  if (-1 < (int)uVar4) {
    lVar1 = *(longlong *)(DAT_140f2a910 + 0x15b0);
    lVar6 = (ulonglong)uVar4 + 1;
    do {
      lVar7 = *(longlong *)(lVar1 + -8 + lVar6 * 8);
      uVar4 = *(uint *)(lVar7 + 0x14);
      if ((uVar4 >> 0x18 & 1) == 0) {
        cVar3 = FUN_140080895(lVar7,param_1);
        if (cVar3 == '\0') {
          return lVar5;
        }
        cVar3 = FUN_14008851d(lVar7);
        if ((cVar3 != '\0') &&
           ((uVar4 >> 0x19 & 1) <= (uint)((*(uint *)(param_1 + 0x14) >> 0x19 & 1) != 0))) {
          lVar5 = lVar7;
        }
      }
      lVar7 = lVar6 + -1;
      bVar2 = 0 < lVar6;
      lVar6 = lVar7;
    } while (lVar7 != 0 && bVar2);
  }
  return lVar5;
}


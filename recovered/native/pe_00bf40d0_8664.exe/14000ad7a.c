/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000ad7a */

longlong FUN_14000ad7a(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    lVar4 = 0;
    do {
      uVar2 = *(ulonglong *)(param_1[1] + lVar4 * 8);
      if (uVar2 >> 0x3c == 0xb) {
        lVar5 = 0x20;
      }
      else if ((uint)(uVar2 >> 0x3c) == 0xc) {
        lVar5 = *(longlong *)(param_1[1] + lVar1 * 8 + 8 + (uVar2 & 0xfffffffffffffff));
      }
      else {
        lVar5 = 8;
      }
      lVar3 = lVar3 + lVar5;
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar4);
  }
  return lVar3;
}


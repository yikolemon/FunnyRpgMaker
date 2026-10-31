/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140085c80 */

void FUN_140085c80(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  lVar3 = DAT_140f2a910;
  if (0.0 < *(float *)(DAT_140f2a910 + 0x2b10)) {
    lVar4 = (longlong)*(int *)(DAT_140f2a910 + 0x20e4) * 0x10;
    lVar1 = DAT_140f2a910 + lVar4;
    lVar2 = DAT_140f2a910 + lVar4;
    lVar4 = DAT_140f2a910 + lVar4;
    fVar5 = (float)FUN_1401a27d0(*(float *)(DAT_140f2a910 + 0x2b10) * DAT_14020fff0);
    FUN_140078844(fVar5 * DAT_1401c86a0 + DAT_1401c86a0,DAT_1401c86a0,DAT_1401c86a0,lVar1 + 0xee8,
                  lVar4 + 0xeec,lVar2 + 0xef0);
    *(undefined4 *)(lVar3 + 0xef4 + (longlong)*(int *)(lVar3 + 0x20e4) * 0x10) = 0x3f800000;
    fVar5 = *(float *)(lVar3 + 0x2b10) - *(float *)(lVar3 + 0x48);
    *(float *)(lVar3 + 0x2b10) = fVar5;
    if (fVar5 <= 0.0) {
      FUN_14009c5cb();
      return;
    }
  }
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010c968 */

void FUN_18010c968(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  lVar3 = DAT_180419160;
  if (0.0 < *(float *)(DAT_180419160 + 0x2b10)) {
    lVar4 = (longlong)*(int *)(DAT_180419160 + 0x20e4) * 0x10;
    lVar1 = DAT_180419160 + lVar4;
    lVar2 = DAT_180419160 + lVar4;
    lVar4 = DAT_180419160 + lVar4;
    fVar5 = (float)FUN_180284590(*(float *)(DAT_180419160 + 0x2b10) * DAT_1802de604);
    FUN_1800ff588(fVar5 * DAT_1802dbb2c + DAT_1802dbb2c,DAT_1802dbb2c,DAT_1802dbb2c,lVar1 + 0xee8,
                  lVar4 + 0xeec,lVar2 + 0xef0);
    *(undefined4 *)(lVar3 + 0xef4 + (longlong)*(int *)(lVar3 + 0x20e4) * 0x10) = 0x3f800000;
    fVar5 = *(float *)(lVar3 + 0x2b10) - *(float *)(lVar3 + 0x48);
    *(float *)(lVar3 + 0x2b10) = fVar5;
    if (fVar5 <= 0.0) {
      FUN_18012369c();
      return;
    }
  }
  return;
}


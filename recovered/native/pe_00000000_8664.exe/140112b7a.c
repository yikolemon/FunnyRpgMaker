/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112b7a */

void FUN_140112b7a(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 0x6c);
  if (0 < (longlong)uVar2) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    fVar5 = 0.0;
    lVar4 = 0;
    fVar6 = 0.0;
    do {
      if ((*(char *)(lVar3 + 0x66 + lVar4) == '\x01') && ((*(byte *)(lVar3 + lVar4) & 8) != 0)) {
        fVar5 = fVar5 + *(float *)(lVar3 + 0x1c + lVar4);
        fVar6 = fVar6 + *(float *)(lVar3 + 0x10 + lVar4);
      }
      lVar4 = lVar4 + 0x74;
    } while (uVar2 * 0x74 - lVar4 != 0);
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      if ((*(char *)(lVar1 + 0x66 + lVar3) == '\x01') && ((*(byte *)(lVar1 + lVar3) & 8) != 0)) {
        *(float *)(lVar1 + 0x1c + lVar3) = (*(float *)(lVar1 + 0x10 + lVar3) / fVar6) * fVar5;
        uVar2 = (ulonglong)*(uint *)(param_1 + 0x6c);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x74;
    } while (lVar4 < (int)uVar2);
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e5cd9 */

void FUN_1400e5cd9(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  if (param_3 != 0) {
    fVar1 = *(float *)(**(longlong **)(*(longlong *)(param_2 + 0x58) + 0x28) + 0x3c);
    if ((fVar1 != 0.0) || (fVar2 = DAT_1401c86c8, NAN(fVar1))) {
      fVar2 = *(float *)(param_2 + 0x14) / fVar1;
    }
    param_5 = (float)FUN_140090d06(param_5,fVar2 * *(float *)(param_3 + 0x58),
                                   *(float *)(param_3 + 0x5c) * fVar2);
    if (*(char *)(param_3 + 0x36) != '\0') {
      param_5 = (float)(int)(param_5 + DAT_1401c86a0);
    }
    param_5 = param_5 + *(float *)(param_3 + 0x60);
  }
  FUN_1400e5bb6(param_2,(param_4 & 0xffff) + 1);
  *(float *)(*(longlong *)(param_2 + 8) + (ulonglong)(param_4 & 0xffff) * 4) = param_5;
  return;
}


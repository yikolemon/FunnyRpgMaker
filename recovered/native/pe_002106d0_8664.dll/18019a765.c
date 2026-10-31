/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019a765 */

void FUN_18019a765(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  if (param_3 != 0) {
    fVar1 = *(float *)(**(longlong **)(*(longlong *)(param_2 + 0x58) + 0x28) + 0x3c);
    if ((fVar1 != 0.0) || (fVar2 = DAT_1802ac570, NAN(fVar1))) {
      fVar2 = *(float *)(param_2 + 0x14) / fVar1;
    }
    param_5 = (float)FUN_1801179ee(param_5,fVar2 * *(float *)(param_3 + 0x58),
                                   *(float *)(param_3 + 0x5c) * fVar2);
    if (*(char *)(param_3 + 0x36) != '\0') {
      param_5 = (float)(int)(param_5 + DAT_1802dbb2c);
    }
    param_5 = param_5 + *(float *)(param_3 + 0x60);
  }
  FUN_18019a642(param_2,(param_4 & 0xffff) + 1);
  *(float *)(*(longlong *)(param_2 + 8) + (ulonglong)(param_4 & 0xffff) * 4) = param_5;
  return;
}


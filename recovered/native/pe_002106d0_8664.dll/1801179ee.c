/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801179ee */

ulonglong FUN_1801179ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = (uint)((ulonglong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  fVar4 = (float)param_3;
  if (fVar2 <= (float)param_3) {
    fVar4 = fVar2;
  }
  uVar1 = -(uint)(fVar2 < (float)param_2);
  return CONCAT44(uVar3 & (uint)((ulonglong)param_2 >> 0x20),uVar1 & (uint)(float)param_2) |
         CONCAT44(~uVar3 & (uint)((ulonglong)param_3 >> 0x20),~uVar1 & (uint)fVar4);
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10154d4d */

undefined8 FUN_10154d4d(uint param_1,int param_2,uint param_3,int param_4,float param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 local_28;
  uint uStack_24;
  
  iVar1 = (param_4 - param_2) - (uint)(param_3 < param_1);
  fVar2 = ((float)CONCAT44(iVar1,param_3 - param_1) +
          *(float *)(&DAT_102b7070 + (iVar1 >> 0x1f) * -4)) * param_5 +
          (float)CONCAT44(param_2,param_1) + *(float *)(&DAT_102b7070 + (param_2 >> 0x1f) * -4);
  fVar3 = DAT_102b96e8;
  if (DAT_102b96e8 > fVar2) {
    fVar3 = 0.0;
  }
  uStack_24 = (uint)((ulonglong)(longlong)ROUND(fVar2 - fVar3) >> 0x20);
  local_28 = (undefined4)(longlong)ROUND(fVar2 - fVar3);
  return CONCAT44((uint)(DAT_102b96e8 <= fVar2) << 0x1f ^ uStack_24,local_28);
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008a3c7 */

uint * FUN_14008a3c7(uint *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_b8 [32];
  float local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  fVar1 = (float)param_2;
  fVar2 = (float)((ulonglong)param_2 >> 0x20);
  if (0.0 <= fVar1) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    if (0.0 <= fVar2) goto LAB_14008a450;
  }
  FUN_14008a381(&local_98);
  fVar5 = local_98;
  fVar6 = local_94;
LAB_14008a450:
  if (0.0 <= fVar1) {
    uVar3 = ~-(uint)(fVar1 == 0.0) & (uint)fVar1 | param_3 & -(uint)(fVar1 == 0.0);
  }
  else {
    uVar3 = FUN_14007b71f(DAT_140211518,fVar5 + fVar1);
  }
  if (0.0 <= fVar2) {
    uVar4 = ~-(uint)(fVar2 == 0.0) & (uint)fVar2 | param_4 & -(uint)(fVar2 == 0.0);
  }
  else {
    uVar4 = FUN_14007b71f(DAT_140211518,fVar6 + fVar2);
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  if (DAT_140f17b40 == (local_90 ^ (ulonglong)auStack_b8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_90 ^ (ulonglong)auStack_b8);
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180159bbb */

float FUN_180159bbb(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_98 [32];
  float local_78 [2];
  ulonglong local_70;
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_98;
  FUN_180111069(local_78);
  fVar1 = (float)FUN_180119e82();
  FUN_180119893(0,DAT_1802bb8e0);
  fVar2 = (float)FUN_180119e82();
  fVar3 = fVar2 - fVar1;
  if (fVar2 - fVar1 <= param_1 * local_78[0]) {
    fVar3 = param_1 * local_78[0];
  }
  FUN_180119893(fVar1 + fVar3,0);
  if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_98)) {
    fVar3 = param_2 * local_78[0] - fVar3;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_98);
}


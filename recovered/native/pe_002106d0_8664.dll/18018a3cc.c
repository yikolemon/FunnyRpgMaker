/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018a3cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18018a3cc(float *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_180283cd0((float)*(ulonglong *)(param_1 + 4) / *param_1);
  uVar1 = (longlong)(fVar2 - _DAT_1802b0d70) & (longlong)fVar2 >> 0x3f | (longlong)fVar2;
  if (uVar1 < param_2) {
    uVar1 = param_2;
  }
  if (*(ulonglong *)(param_1 + 0xe) < uVar1) {
    FUN_18018a448(param_1);
    return;
  }
  return;
}


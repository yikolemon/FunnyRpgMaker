/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400dce0a */

void FUN_1400dce0a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = DAT_1401c86c8 - param_6;
  fVar1 = fVar2 * fVar2 * fVar2;
  fVar3 = fVar2 * DAT_1402113b0 * fVar2 * param_6;
  fVar2 = DAT_1402113b0 * fVar2 * param_6 * param_6;
  param_6 = param_6 * param_6 * param_6;
  *param_1 = CONCAT44(param_6 * (float)((ulonglong)*param_5 >> 0x20) +
                      fVar2 * (float)((ulonglong)*param_4 >> 0x20) +
                      fVar1 * (float)((ulonglong)*param_2 >> 0x20) +
                      fVar3 * (float)((ulonglong)*param_3 >> 0x20),
                      param_6 * (float)*param_5 +
                      fVar2 * (float)*param_4 + fVar1 * (float)*param_2 + fVar3 * (float)*param_3);
  return;
}


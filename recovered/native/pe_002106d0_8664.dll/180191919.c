/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180191919 */

undefined8 *
FUN_180191919(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_1802ac570 - param_5;
  fVar2 = (fVar1 + fVar1) * param_5;
  *param_1 = CONCAT44(param_5 * param_5 * (float)((ulonglong)*param_4 >> 0x20) +
                      fVar1 * fVar1 * (float)((ulonglong)*param_2 >> 0x20) +
                      fVar2 * (float)((ulonglong)*param_3 >> 0x20),
                      param_5 * param_5 * (float)*param_4 +
                      fVar1 * fVar1 * (float)*param_2 + fVar2 * (float)*param_3);
  return param_1;
}


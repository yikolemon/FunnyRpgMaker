/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023ec10 */

undefined4 * __thiscall FUN_1023ec10(int param_1,undefined4 *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = *(short **)(param_1 + 0x18);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  psVar3 = psVar2;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  FUN_10001338(psVar2,(int)psVar3 - (int)(psVar2 + 1) >> 1);
  return param_2;
}


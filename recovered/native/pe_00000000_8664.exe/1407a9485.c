/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a9485 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1407a9485(float param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = _DAT_80100ff31039d74c;
  pcVar2 = (char *)(ulonglong)_DAT_80100ff31039d74c;
  *param_2 = *param_2 - (char)param_2;
  *pcVar2 = *pcVar2 + (char)uVar1;
  return param_1 * _DAT_150a605aa;
}


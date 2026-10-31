/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180198216 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180198216(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)*(char *)(param_1 + 0x37);
  if ((*(char *)(param_1 + 0x37) == '\0') &&
     (iVar2 = 1,
     *(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x18) * *(float *)(param_1 + 0x70) <=
     _DAT_180327390)) {
    iVar2 = 2 - (uint)*(byte *)(param_1 + 0x36);
  }
  *param_3 = iVar2;
  cVar1 = (char)*(undefined4 *)(param_1 + 0x38);
  *param_4 = (int)(char)(cVar1 + (cVar1 == '\0'));
  return;
}


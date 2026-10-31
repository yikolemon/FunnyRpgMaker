/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10190880 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10190880(int param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)*(char *)(param_1 + 0x33);
  if (iVar2 == 0) {
    if (*(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x14) * *(float *)(param_1 + 100) <=
        _DAT_103013f0) {
      iVar2 = 2 - (uint)*(byte *)(param_1 + 0x32);
    }
    else {
      iVar2 = 1;
    }
  }
  *param_3 = iVar2;
  cVar1 = (char)*(undefined4 *)(param_1 + 0x34);
  *param_4 = (int)(char)(cVar1 + (cVar1 == '\0'));
  return;
}


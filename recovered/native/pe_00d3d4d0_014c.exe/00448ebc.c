/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00448ebc */

bool __fastcall FUN_00448ebc(int *param_1,int *param_2,int *param_3,char param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)param_1[2];
  (*(code *)param_1[7])(param_1);
  if (((char *)*param_1 < pcVar1) && ((byte)(*(char *)*param_1 - 0x30U) < 10)) {
    iVar3 = (*(code *)param_1[9])(param_1);
    (*(code *)param_1[8])(param_1);
    iVar2 = *param_1;
    *param_3 = iVar2 + 1;
    if (iVar3 < (int)pcVar1 - (iVar2 + 1) && -1 < iVar3) {
      *param_1 = *param_1 + iVar3 + 1;
      *param_2 = iVar3;
      return param_1[3] == 0;
    }
  }
  if (param_4 == '\0') {
    param_1[3] = 3;
  }
  return false;
}


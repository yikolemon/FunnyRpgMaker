/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bfd2a */

void FUN_1400bfd2a(undefined8 param_1,int *param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((*param_3 == '\n') && (*(char *)((longlong)param_2 + 0x17) != '\0')) {
    return;
  }
  if (((char)param_2[3] != '\0') && (param_2[1] == param_2[2])) {
    iVar2 = *param_2;
    iVar1 = FUN_1400cee8d(param_1);
    if (iVar2 < iVar1) {
      FUN_1400cf5fd(param_1,param_2,iVar2,1,1);
      FUN_1400cf08c(param_1,*param_2,1);
      iVar2 = FUN_1400cf0cb(param_1,*param_2,param_3,param_4);
      if (iVar2 == 0) {
        return;
      }
      goto LAB_1400bfdde;
    }
  }
  FUN_1400cee31(param_1,param_2);
  iVar2 = FUN_1400cf0cb(param_1,*param_2,param_3,param_4);
  if (iVar2 == 0) {
    return;
  }
  FUN_1400cf668(param_2,*param_2,iVar2);
LAB_1400bfdde:
  *param_2 = *param_2 + iVar2;
  *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  return;
}


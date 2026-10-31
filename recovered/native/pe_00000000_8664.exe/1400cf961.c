/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cf961 */

void FUN_1400cf961(undefined8 param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_1400c0656();
  FUN_1400cee31(param_1,param_2);
  iVar1 = FUN_1400cf0cb(param_1,*param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_1400cf668(param_2,*param_2,iVar1);
    *param_2 = *param_2 + iVar1;
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  }
  return;
}


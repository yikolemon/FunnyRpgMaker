/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180147b6e */

void thunk_FUN_180156a31(undefined8 param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_180147726();
  FUN_180155f01(param_1,param_2);
  iVar1 = FUN_18015619b(param_1,*param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_180156738(param_2,*param_2,iVar1);
    *param_2 = *param_2 + iVar1;
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  }
  return;
}


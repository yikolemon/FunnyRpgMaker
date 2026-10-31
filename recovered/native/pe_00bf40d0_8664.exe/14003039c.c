/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003039c */

void FUN_14003039c(byte *param_1,longlong *param_2,uint *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14002fd6a(param_2[6]);
  if ((char)uVar1 != '\0') {
    FUN_1400303e6((longlong)param_1,param_2,param_3,param_4);
    return;
  }
  FUN_140030636(param_1,(longlong)param_2,param_3,param_4);
  return;
}


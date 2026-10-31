/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f33a */

undefined8 FUN_18017f33a(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_18017905b();
  if (iVar1 != 0) {
    iVar1 = FUN_18017905b(param_2 * param_1,param_3);
    if (iVar1 != 0) {
      param_3 = param_2 * param_1 * param_3;
      iVar1 = FUN_18017905b(param_3,param_4);
      if (iVar1 != 0) {
        uVar2 = FUN_180179085(param_3 * param_4,0);
        return uVar2;
      }
    }
  }
  return 0;
}


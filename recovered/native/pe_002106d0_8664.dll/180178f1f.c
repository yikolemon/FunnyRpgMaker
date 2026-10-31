/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180178f1f */

undefined8 FUN_180178f1f(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_18017905b();
  if (iVar1 != 0) {
    iVar1 = FUN_18017905b(param_2 * param_1,param_3);
    if (iVar1 != 0) {
      uVar2 = FUN_180179085(param_2 * param_1 * param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}


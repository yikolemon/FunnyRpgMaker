/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180178f69 */

undefined8 FUN_180178f69(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_18017905b();
  if (iVar1 != 0) {
    uVar2 = FUN_180179085(param_2 * param_1,param_3);
    return uVar2;
  }
  return 0;
}


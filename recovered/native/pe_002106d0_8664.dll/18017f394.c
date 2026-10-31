/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f394 */

undefined8 FUN_18017f394(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_18017f33a();
  if (iVar1 != 0) {
    uVar2 = FUN_18012be7d((longlong)(param_3 * param_4 * param_2 * param_1));
    return uVar2;
  }
  return 0;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180178ee1 */

undefined8 FUN_180178ee1(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_180178f1f();
  if (iVar1 != 0) {
    uVar2 = FUN_18012be7d((longlong)(param_2 * param_1 * param_3 + param_4));
    return uVar2;
  }
  return 0;
}


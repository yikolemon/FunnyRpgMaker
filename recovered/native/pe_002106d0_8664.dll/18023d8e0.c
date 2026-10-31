/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d8e0 */

void FUN_18023d8e0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_180246a20();
  if ((iVar1 == 0) && (param_2 == 1)) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(param_1,0,param_3);
  }
  FUN_18027fda8(param_5,param_6);
  return;
}


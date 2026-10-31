/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026d280 */

int FUN_18026d280(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) && (DAT_180420d48 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (DAT_18034e400 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_18026d220(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_180001162(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVar1 == 0)) {
    FUN_180001162(param_1,0,param_3);
    FUN_18026d180(param_3 != 0);
    if (DAT_18034e400 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(param_1,0,param_3);
    }
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_18026d220(param_1,param_2,param_3);
    iVar1 = 0;
    if (iVar2 != 0) {
      if (DAT_18034e400 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(param_1,param_2,param_3);
      }
    }
  }
  return iVar1;
}


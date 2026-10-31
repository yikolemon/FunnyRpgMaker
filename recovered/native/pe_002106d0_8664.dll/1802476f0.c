/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802476f0 */

void FUN_1802476f0(undefined8 param_1,longlong *param_2,byte *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*param_3 & 1) == 0) && (iVar1 = *(int *)(param_3 + 0x18), iVar1 != 0)) {
    uVar2 = FUN_18026d740(param_2,param_3 + 8);
    if ((*param_3 & 4) == 0) {
      FUN_1802476d0(param_1,param_4 + iVar1,uVar2);
    }
    else {
      FUN_1802476e0();
    }
  }
  else {
    FUN_1802a82f0(param_1,param_2,(longlong)*(int *)(param_3 + 0x14));
    if (((*param_3 & 8) != 0) && (*param_2 != 0)) {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      return;
    }
  }
  return;
}


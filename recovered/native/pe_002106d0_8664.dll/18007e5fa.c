/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007e5fa */

void FUN_18007e5fa(longlong *param_1,longlong param_2,undefined1 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    FUN_1800161d6();
    lVar1 = *param_1;
    thunk_FUN_1802a89a0(lVar1,*param_3,param_2,param_4,param_1,uVar2);
    param_1[1] = lVar1 + param_2;
  }
  return;
}


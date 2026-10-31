/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a0c57 */

undefined8
FUN_1801a0c57(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1801006f9();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180107ee8();
    uVar2 = FUN_1801a0c9d(param_1,param_2,param_3,param_4,uVar2);
  }
  return uVar2;
}


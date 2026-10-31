/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180021da2 */

undefined8
FUN_180021da2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = param_1;
  (*(code *)*param_1)();
  FUN_18023ea60();
  thunk_FUN_1802464a0(param_1,8,param_3,param_4,puVar1,param_1,uVar2);
  return 0;
}


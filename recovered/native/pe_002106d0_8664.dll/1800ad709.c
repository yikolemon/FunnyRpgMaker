/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ad709 */

undefined8 FUN_1800ad709(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 local_a0 [10];
  undefined8 *local_50;
  undefined8 **local_48;
  longlong local_40 [2];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_50 = local_a0;
  ppuVar2 = &PTR_DAT_1802b72d0;
  puVar3 = local_50;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = &local_50;
  FUN_18005a110(local_40);
  FUN_1800addc5(param_1,param_2,local_40);
  FUN_1800603f0(local_40,local_40,*(undefined8 *)(local_40[0] + 8));
  thunk_FUN_1802464a0(local_40[0],0x30);
  return param_1;
}


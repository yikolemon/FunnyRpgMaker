/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bebd9 */

undefined8 FUN_1402bebd9(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_a0 [10];
  undefined8 *local_50;
  undefined8 **local_48;
  longlong local_40 [2];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_50 = local_a0;
  puVar2 = &DAT_1404c87a0;
  puVar3 = local_50;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = &local_50;
  FUN_14026b5e0(local_40);
  FUN_1402bf295(param_1,param_2,local_40);
  FUN_1402718c0(local_40,local_40,*(undefined8 *)(local_40[0] + 8));
  thunk_FUN_1404a2310(local_40[0],0x30);
  return param_1;
}


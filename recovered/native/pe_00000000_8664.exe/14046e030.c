/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14046e030 */

undefined8 * FUN_14046e030(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_18 [2];
  
  *(undefined4 *)(param_1 + 1) = param_3;
  puVar1 = param_1 + 2;
  *param_1 = &DAT_1405390c8;
  *puVar1 = 0;
  uVar2 = FUN_14048129c();
  if (puVar1 != local_18) {
    thunk_FUN_1404a2310(*puVar1);
    *puVar1 = uVar2;
    uVar2 = 0;
  }
  thunk_FUN_1404a2310(uVar2);
  return param_1;
}


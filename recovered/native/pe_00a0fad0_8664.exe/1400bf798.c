/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bf798 */

undefined8 * FUN_1400bf798(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_20 = param_1;
  FUN_14000169c(local_70,&DAT_1401728de);
  FUN_14000169c(local_50,&DAT_1401728de);
  puVar1 = local_20 + 3;
  FUN_1400bca0a(puVar1,local_70,local_50);
  local_30 = puVar1;
  FUN_1400017de(local_50);
  FUN_1400017de(local_70);
  *(undefined1 *)(local_20 + 0xe) = 0;
  *(undefined4 *)((longlong)local_20 + 0x74) = 0;
  local_28 = local_20 + 0xf;
  FUN_14000169c(local_28,&DAT_1401728de);
  *(undefined4 *)(local_20 + 0x13) = 0;
  return local_20;
}


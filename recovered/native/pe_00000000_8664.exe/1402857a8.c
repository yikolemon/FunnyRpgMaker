/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402857a8 */

undefined8 * FUN_1402857a8(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = param_1;
  FUN_1402859e0(local_28,&local_28,param_2);
  *local_18 = &DAT_1404c9b28;
  return local_18;
}


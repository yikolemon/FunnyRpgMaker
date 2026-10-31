/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402859e0 */

undefined8 * FUN_1402859e0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [32];
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140213362(local_48,param_3);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1402144e2(param_1,&local_58,local_48);
  local_28 = param_1;
  FUN_1402133c2(local_48);
  *local_28 = &DAT_1404bd958;
  return local_28;
}


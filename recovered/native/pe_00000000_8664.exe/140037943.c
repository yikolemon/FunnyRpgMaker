/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140037943 */

void FUN_140037943(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = *param_3;
  uStack_20 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  FUN_1400027d2(local_48,*param_2);
  FUN_1400379ce(param_1,local_48,&local_28);
  return;
}


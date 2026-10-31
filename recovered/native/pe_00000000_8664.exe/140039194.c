/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140039194 */

undefined8 FUN_140039194(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *local_250;
  undefined8 local_248;
  undefined8 local_240;
  code *local_238;
  undefined1 local_230 [504];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_250 = local_230;
  local_248 = 0;
  local_238 = FUN_14001d464;
  local_240 = 500;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_14001a34e(&local_250,&local_28,&local_38,0);
  FUN_14003925b(param_1,&local_250);
  if (local_250 != local_230) {
    thunk_FUN_1401aea30();
  }
  return param_1;
}


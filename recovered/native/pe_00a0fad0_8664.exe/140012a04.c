/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140012a04 */

undefined8 * FUN_140012a04(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 local_e8 [64];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  longlong local_48;
  longlong local_40 [2];
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140017322(local_e8,&local_29);
  FUN_140016ae0(param_3,&local_48,local_e8);
  if (local_48 == local_40[0]) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    FUN_14001700e(&local_a8,local_40[0] - local_48 >> 3,&local_48,local_40);
    FUN_14000169c(local_68,"Positionals");
    FUN_1400173aa(param_1,local_88,local_68);
    (**(code **)(*param_1 + 0x10))(param_1,param_2,local_88,1,&local_a8);
  }
  FUN_140016e5c(&local_48);
  return param_2;
}


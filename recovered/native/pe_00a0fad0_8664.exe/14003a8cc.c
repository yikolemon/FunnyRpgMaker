/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003a8cc */

undefined8 FUN_14003a8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = param_3;
  local_20 = param_2;
  FUN_14000169c(local_b0,&DAT_14017146a);
  FUN_1400198e7(local_90,local_28,local_b0);
  FUN_140006fbc(local_50,"Could not convert: ",local_20);
  FUN_14000ed8c(local_70,local_50,&DAT_1401722a4);
  FUN_140018470(local_d0);
  FUN_14002a174(param_1,local_d0);
  FUN_1400017de(local_70);
  FUN_1400017de(local_50);
  local_30 = param_1;
  FUN_1400017de(local_90);
  uVar1 = local_30;
  FUN_1400017de(local_20);
  FUN_14000eeca(local_28);
  return uVar1;
}


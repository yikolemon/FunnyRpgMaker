/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006bdec */

undefined8 FUN_14006bdec(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined8 **local_50 [3];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_14000169c(local_b0,&DAT_1401728de);
  FUN_14000169c(local_70,"type_error");
  FUN_140063b62(local_90,local_70,param_2);
  FUN_140063a73(local_50,local_90,local_b0,param_3);
  FUN_1400017de(local_90);
  FUN_1400017de(local_70);
  FUN_1400017de(local_b0);
  pppuVar1 = local_50;
  if (0xf < local_38) {
    pppuVar1 = (undefined8 ***)local_50[0];
  }
  FUN_14006c83c(param_1,param_2,pppuVar1);
  FUN_1400017de(local_50);
  return param_1;
}


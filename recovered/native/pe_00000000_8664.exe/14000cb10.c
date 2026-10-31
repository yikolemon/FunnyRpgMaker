/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000cb10 */

undefined8 FUN_14000cb10(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined8 **local_50 [3];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1400027d2(local_b0,&DAT_140edcdbf);
  FUN_1400027d2(local_70,"out_of_range");
  FUN_140005d80(local_90,local_70,param_2);
  FUN_140005c91(local_50,local_90,local_b0,param_3);
  FUN_14000109c(local_90);
  FUN_14000109c(local_70);
  FUN_14000109c(local_b0);
  pppuVar1 = local_50;
  if (0xf < local_38) {
    pppuVar1 = (undefined8 ***)local_50[0];
  }
  FUN_14000d5e2(param_1,param_2,pppuVar1);
  FUN_14000109c(local_50);
  return param_1;
}


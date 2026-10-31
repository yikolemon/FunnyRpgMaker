/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140009aba */

undefined8
FUN_140009aba(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined8 **local_58 [3];
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1400027d2(local_d8,&DAT_140edcdbf);
  FUN_140011442(local_b8,param_3);
  FUN_1400027d2(local_78,"parse_error");
  FUN_140005d80(local_98,local_78,param_2);
  FUN_1400112b1(local_58,local_98,"parse error",local_b8,&DAT_140edae05,local_d8,param_4);
  FUN_14000109c(local_98);
  FUN_14000109c(local_78);
  FUN_14000109c(local_b8);
  FUN_14000109c(local_d8);
  pppuVar1 = local_58;
  if (0xf < local_40) {
    pppuVar1 = (undefined8 ***)local_58[0];
  }
  FUN_14001150a(param_1,param_2,*param_3,pppuVar1);
  FUN_14000109c(local_58);
  return param_1;
}


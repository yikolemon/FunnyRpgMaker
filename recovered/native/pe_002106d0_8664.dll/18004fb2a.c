/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004fb2a */

undefined8
FUN_18004fb2a(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_180001e92(local_d8,&DAT_1803861e4);
  FUN_1800559aa(local_b8,param_3);
  FUN_180001e92(local_78,"parse_error");
  FUN_180017774(local_98,local_78,param_2);
  FUN_180055819(local_58,local_98,"parse error",local_b8,&DAT_18037bce0,local_d8,param_4);
  FUN_180001ef2(local_98);
  FUN_180001ef2(local_78);
  FUN_180001ef2(local_b8);
  FUN_180001ef2(local_d8);
  pppuVar1 = local_58;
  if (0xf < local_40) {
    pppuVar1 = (undefined8 ***)local_58[0];
  }
  FUN_180055a72(param_1,param_2,*param_3,pppuVar1);
  FUN_180001ef2(local_58);
  return param_1;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180053314 */

undefined8 FUN_180053314(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined8 **local_50 [3];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_180001e92(local_b0,&DAT_1803861e4);
  FUN_180001e92(local_70,"invalid_iterator");
  FUN_180017774(local_90,local_70,param_2);
  FUN_180017686(local_50,local_90,local_b0,param_3);
  FUN_180001ef2(local_90);
  FUN_180001ef2(local_70);
  FUN_180001ef2(local_b0);
  pppuVar1 = local_50;
  if (0xf < local_38) {
    pppuVar1 = (undefined8 ***)local_50[0];
  }
  FUN_180053608(param_1,param_2,pppuVar1);
  FUN_180001ef2(local_50);
  return param_1;
}


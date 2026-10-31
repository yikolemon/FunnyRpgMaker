/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b936 */

undefined8
FUN_18001b936(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **local_50 [2];
  longlong local_40;
  ulonglong local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_180017a78(local_50,param_3,param_4,&local_29);
  pppuVar1 = local_50;
  if (0xf < local_38) {
    pppuVar1 = (undefined8 ***)local_50[0];
  }
  (**(code **)(*(longlong *)*param_1 + 0x20))
            ((longlong *)*param_1,param_2,pppuVar1,local_40 + (longlong)pppuVar1);
  FUN_180001ef2(local_50);
  return param_2;
}


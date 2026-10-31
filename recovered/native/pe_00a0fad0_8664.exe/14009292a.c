/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009292a */

undefined8
FUN_14009292a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **local_50 [2];
  longlong local_40;
  ulonglong local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140079c34(local_50,param_3,param_4,&local_29);
  pppuVar1 = local_50;
  if (7 < local_38) {
    pppuVar1 = (undefined8 ***)local_50[0];
  }
  (**(code **)(*(longlong *)*param_1 + 0x20))
            ((longlong *)*param_1,param_2,pppuVar1,(longlong)pppuVar1 + local_40 * 2);
  FUN_140005242(local_50);
  return param_2;
}


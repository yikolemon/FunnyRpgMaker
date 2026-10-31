/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005fd70 */

undefined8
FUN_14005fd70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **local_50 [2];
  longlong local_40;
  ulonglong local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_14004060c(local_50,param_3,param_4,&local_29);
  pppuVar1 = local_50;
  if (7 < local_38) {
    pppuVar1 = (undefined8 ***)local_50[0];
  }
  (**(code **)(*(longlong *)*param_1 + 0x20))
            ((longlong *)*param_1,param_2,pppuVar1,(longlong)pppuVar1 + local_40 * 2);
  FUN_140001e90(local_50);
  return param_2;
}


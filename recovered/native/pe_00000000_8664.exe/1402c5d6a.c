/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c5d6a */

undefined8 FUN_1402c5d6a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 7;
  FUN_140215f74(&local_58,param_1[2],0);
  pppuVar2 = &local_58;
  if (7 < local_40) {
    pppuVar2 = (undefined8 ***)local_58;
  }
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_1402c5e50(param_1,(longlong)param_1 + *plVar1 * 2,pppuVar2,0x5c,0x2f);
  local_68 = &local_58;
  if (7 < local_40) {
    local_68 = local_58;
  }
  local_60 = local_48;
  FUN_140216adc(param_2,&local_68,param_3);
  FUN_1402125bc(&local_58);
  return param_2;
}


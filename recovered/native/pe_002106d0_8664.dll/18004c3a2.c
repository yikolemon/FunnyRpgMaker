/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004c3a2 */

undefined8
FUN_18004c3a2(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  undefined1 local_70 [64];
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_3;
  FUN_18004c49e(local_70,param_3);
  FUN_18004cda0(param_1,param_2,local_70,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff,param_5,param_6);
  plVar1 = (longlong *)local_30[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != local_30);
  }
  return param_1;
}


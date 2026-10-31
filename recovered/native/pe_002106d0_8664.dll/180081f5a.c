/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180081f5a */

undefined8
FUN_180081f5a(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  undefined1 local_70 [64];
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = param_2;
  local_28 = param_3;
  FUN_18004c49e(local_70,param_3);
  FUN_18008292c(param_1,local_30,local_70,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff,param_5,param_6);
  FUN_180082084(local_30);
  plVar1 = (longlong *)local_28[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != local_28);
  }
  return param_1;
}


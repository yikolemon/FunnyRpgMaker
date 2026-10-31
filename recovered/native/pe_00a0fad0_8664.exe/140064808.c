/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140064808 */

undefined8
FUN_140064808(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5)

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
  FUN_14002ca6e(local_70,param_3);
  FUN_140065170(param_1,local_30,local_70,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff,param_5);
  FUN_14006492a(local_30);
  plVar1 = (longlong *)local_28[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != local_28);
  }
  return param_1;
}


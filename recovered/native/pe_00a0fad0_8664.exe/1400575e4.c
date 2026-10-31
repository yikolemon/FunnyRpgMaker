/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400575e4 */

undefined8
FUN_1400575e4(undefined8 param_1,longlong *param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  longlong local_168 [7];
  longlong *local_130;
  undefined1 local_120 [160];
  undefined1 local_80 [64];
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = param_1;
  local_28 = param_3;
  FUN_140057552(param_1,0);
  FUN_14002d81a(local_80,local_28);
  local_38 = *(undefined8 *)((longlong)param_2 + (longlong)*(int *)(*param_2 + 4) + 0x48);
  local_40 = param_2;
  FUN_140064808(local_168,&local_40,local_80,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff,param_5);
  FUN_140064960(local_168,1,local_30);
  FUN_1400653bc(local_120);
  if (local_130 != (longlong *)0x0) {
    (**(code **)(*local_130 + 0x20))(local_130,local_130 != local_168);
  }
  plVar1 = (longlong *)local_28[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != local_28);
  }
  return local_30;
}


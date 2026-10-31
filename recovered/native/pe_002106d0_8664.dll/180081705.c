/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180081705 */

longlong * FUN_180081705(longlong *param_1,undefined8 param_2)

{
  undefined1 local_160 [56];
  undefined8 local_128;
  longlong local_120 [7];
  longlong *local_e8;
  undefined1 local_d8 [168];
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_128 = 0;
  local_28 = *(undefined8 *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
  local_30 = param_1;
  FUN_180081f5a(local_120,&local_30,local_160,1,0,0);
  FUN_1800820ba(local_120,0,param_2);
  FUN_180082b8a(local_d8);
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x20))(local_e8,local_e8 != local_120);
  }
  return param_1;
}


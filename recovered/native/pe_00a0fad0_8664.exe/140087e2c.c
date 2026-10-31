/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140087e2c */

longlong * FUN_140087e2c(longlong *param_1,undefined8 param_2)

{
  undefined1 local_158 [56];
  undefined8 local_120;
  longlong local_118 [7];
  longlong *local_e0;
  undefined1 local_d0 [160];
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_120 = 0;
  local_28 = *(undefined8 *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
  local_30 = param_1;
  FUN_140064808(local_118,&local_30,local_158,1,0);
  FUN_140064960(local_118,0,param_2);
  FUN_1400653bc(local_d0);
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x20))(local_e0,local_e0 != local_118);
  }
  return param_1;
}


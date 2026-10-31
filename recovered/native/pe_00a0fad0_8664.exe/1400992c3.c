/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400992c3 */

undefined8 FUN_1400992c3(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 local_140 [16];
  longlong local_130;
  undefined1 local_128 [16];
  uint auStack_118 [52];
  code *local_48;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_140009eb0(local_140,1);
  plVar1 = (longlong *)FUN_1400052b8(&local_130,"0x");
  FUN_1400857d9(&local_31,0x30);
  *(undefined1 *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x58) = local_31;
  FUN_1400da260(&local_48,2);
  (*local_48)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4),local_40);
  *(uint *)((longlong)auStack_118 + (longlong)*(int *)(local_130 + 4)) =
       *(uint *)((longlong)auStack_118 + (longlong)*(int *)(local_130 + 4)) & 0xfffff1ff | 0x800;
  FUN_1400056d6(&local_130,param_2);
  FUN_1400170f8(local_128,param_1);
  FUN_140009ff0(local_140);
  return param_1;
}


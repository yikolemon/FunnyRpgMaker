/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a6b6f */

undefined8 FUN_1400a6b6f(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 local_140 [16];
  longlong local_130;
  undefined1 local_128 [16];
  uint auStack_118 [52];
  code *local_48;
  undefined8 local_40;
  undefined2 local_32;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_14006249e(local_140,1);
  plVar1 = (longlong *)FUN_14006329e(&local_130,&DAT_140172d5a);
  FUN_1400a8a67(&local_32,0x30);
  *(undefined2 *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x58) = local_32;
  FUN_1400da260(&local_48,2);
  (*local_48)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4),local_40);
  *(uint *)((longlong)auStack_118 + (longlong)*(int *)(local_130 + 4)) =
       *(uint *)((longlong)auStack_118 + (longlong)*(int *)(local_130 + 4)) & 0xfffff1ff | 0x800;
  FUN_1400a8a6e(&local_130,param_2);
  FUN_140058e64(local_128,param_1);
  FUN_140058b56(local_140);
  return param_1;
}


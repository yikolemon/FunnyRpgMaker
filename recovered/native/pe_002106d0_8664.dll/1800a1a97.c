/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a1a97 */

undefined8 FUN_1800a1a97(undefined8 param_1,undefined1 param_2)

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
  FUN_1800a3658(local_140,1);
  plVar1 = (longlong *)FUN_1800a3793(&local_130,&DAT_1803864d2);
  FUN_1800a39b6(&local_32,0x30);
  *(undefined2 *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x58) = local_32;
  FUN_1802449f0(&local_48,2);
  (*local_48)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4),local_40);
  *(uint *)((longlong)auStack_118 + (longlong)*(int *)(local_130 + 4)) =
       *(uint *)((longlong)auStack_118 + (longlong)*(int *)(local_130 + 4)) & 0xfffff1ff | 0x800;
  FUN_1800a39be(&local_130,param_2);
  FUN_1800a6830(local_128,param_1);
  FUN_1800a3ba4(local_140);
  return param_1;
}


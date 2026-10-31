/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007af6a */

undefined8 FUN_18007af6a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 local_158 [16];
  longlong local_148;
  undefined1 local_140 [16];
  uint auStack_130 [16];
  undefined1 auStack_f0 [144];
  code *local_60;
  undefined8 local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_18007b962(local_158,1);
  for (lVar1 = 0; lVar1 != 0x40; lVar1 = lVar1 + 8) {
    *(uint *)((longlong)auStack_130 + (longlong)*(int *)(local_148 + 4)) =
         *(uint *)((longlong)auStack_130 + (longlong)*(int *)(local_148 + 4)) & 0xfffff1ff | 0x800;
    FUN_1802449f0(&local_60,0x10);
    (*local_60)((longlong)*(int *)(local_148 + 4) + (longlong)&local_148,local_58);
    FUN_18007ba9d(&local_49,0x30);
    auStack_f0[*(int *)(local_148 + 4)] = local_49;
    FUN_18007baa4(&local_148,*(undefined8 *)(param_2 + lVar1));
  }
  FUN_18007e330(local_140,param_1);
  FUN_18007bc8a(local_158);
  return param_1;
}


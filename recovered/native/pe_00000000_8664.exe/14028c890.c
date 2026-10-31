/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028c890 */

longlong * FUN_14028c890(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined1 local_38 [8];
  char local_30;
  longlong *local_28;
  uint local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = param_1;
  FUN_14028c56e(local_38);
  local_1c = 4;
  if (local_30 == '\x01') {
    iVar1 = FUN_14028c630(*(undefined8 *)
                           ((longlong)local_28 + (longlong)*(int *)(*local_28 + 4) + 0x48),
                          CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_2) & 0xffffffff);
    local_1c = (uint)(iVar1 == -1) << 2;
  }
  lVar2 = (longlong)*(int *)(*local_28 + 4);
  FUN_1402856fa((longlong)local_28 + lVar2,
                (uint)(*(longlong *)((longlong)local_28 + lVar2 + 0x48) == 0) << 2 |
                local_1c | *(uint *)((longlong)local_28 + lVar2 + 0x10),0);
  FUN_14028c66e(local_38);
  return local_28;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400163f5 */

longlong * FUN_1400163f5(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  longlong lVar3;
  undefined1 local_48 [8];
  char local_40;
  uint local_34;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_14000cd6c(local_48);
  if (local_40 != '\x01') {
    local_34 = 0;
    goto code_r0x0001400164b1;
  }
  lVar2 = *(longlong *)((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x28);
  lVar3 = 1;
  if (1 < lVar2) {
    lVar3 = lVar2;
  }
  lVar3 = lVar3 + -1;
  lVar2 = (longlong)*(int *)(*local_30 + 4);
  if ((*(uint *)((longlong)local_30 + lVar2 + 0x18) & 0x1c0) == 0x40) {
code_r0x00014001651a:
    iVar1 = FUN_140016aa2(*(undefined8 *)((longlong)local_30 + lVar2 + 0x48),
                          CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_2) & 0xffffffff);
    local_34 = (uint)(iVar1 == -1) << 2;
  }
  else {
    local_34 = 0;
    while( true ) {
      if ((local_34 != 0) || (lVar3 == 0)) break;
      iVar1 = FUN_140016aa2(*(undefined8 *)
                             ((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x48),
                            *(undefined1 *)
                             ((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x58));
      local_34 = (uint)(iVar1 == -1) << 2;
      lVar3 = lVar3 + -1;
    }
    if (local_34 == 0) {
      lVar2 = (longlong)*(int *)(*local_30 + 4);
      goto code_r0x00014001651a;
    }
  }
  for (; (local_34 == 0 && (0 < lVar3)); lVar3 = lVar3 + -1) {
    iVar1 = FUN_140016aa2(*(undefined8 *)
                           ((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x48),
                          *(undefined1 *)
                           ((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x58));
    local_34 = (uint)(iVar1 == -1) << 2;
  }
code_r0x0001400164b1:
  *(undefined8 *)((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x28) = 0;
  lVar2 = (longlong)*(int *)(*local_30 + 4);
  FUN_14000a9f0((longlong)local_30 + lVar2,
                (uint)(*(longlong *)((longlong)local_30 + lVar2 + 0x48) == 0) << 2 |
                local_34 | *(uint *)((longlong)local_30 + lVar2 + 0x10),0);
  FUN_14000ce2e(local_48);
  return local_30;
}


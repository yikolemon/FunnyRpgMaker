/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006bc7a */

longlong * FUN_14006bc7a(longlong *param_1,undefined2 param_2)

{
  short sVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  undefined1 local_38 [8];
  char local_30;
  longlong *local_28;
  uint local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = param_1;
  FUN_14003dcba(local_38);
  local_1c = 4;
  if (local_30 == '\x01') {
    sVar1 = FUN_14005a4c0(*(undefined8 *)
                           ((longlong)local_28 + (longlong)*(int *)(*local_28 + 4) + 0x48),
                          CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),param_2) & 0xffffffff);
    local_1c = (uint)(sVar1 == -1) << 2;
  }
  lVar2 = (longlong)*(int *)(*local_28 + 4);
  FUN_140013624((longlong)local_28 + lVar2,
                (uint)(*(longlong *)((longlong)local_28 + lVar2 + 0x48) == 0) << 2 |
                local_1c | *(uint *)((longlong)local_28 + lVar2 + 0x10),0);
  FUN_14003dd7c(local_38);
  return local_28;
}


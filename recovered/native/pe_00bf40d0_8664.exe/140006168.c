/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140006168 */

longlong * FUN_140006168(longlong *param_1,undefined2 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  longlong local_38;
  char local_30;
  longlong *local_28;
  uint local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = param_1;
  FUN_140004d42(&local_38,param_1);
  local_1c = 4;
  if (local_30 == '\x01') {
    uVar1 = FUN_140004f14(*(longlong **)
                           ((longlong)local_28 + (longlong)*(int *)(*local_28 + 4) + 0x48),
                          (uint)CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),param_2));
    local_1c = (uint)((short)uVar1 == -1) << 2;
  }
  lVar2 = (longlong)*(int *)(*local_28 + 4);
  FUN_140005d34((longlong)local_28 + lVar2,
                (uint)(*(longlong *)((longlong)local_28 + lVar2 + 0x48) == 0) << 2 |
                local_1c | *(uint *)((longlong)local_28 + lVar2 + 0x10),'\0');
  FUN_140004f4e(&local_38);
  return local_28;
}


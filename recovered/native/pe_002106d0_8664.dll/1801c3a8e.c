/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c3a8e */

void FUN_1801c3a8e(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar2 = **(longlong **)(param_2 + 0x30);
  FUN_1801003f2(local_60);
  FUN_1801004b6(local_60,0x7fffffff,DAT_1802bb8e0);
  while( true ) {
    cVar1 = FUN_180100a32(local_60);
    if (cVar1 == '\0') break;
    for (; (local_58 < local_5c && (lVar2 != 0)); lVar2 = FUN_1801c3bda(param_1,local_60,lVar2)) {
    }
  }
  for (; lVar2 != 0; lVar2 = FUN_1801c3bda(param_1,local_60,lVar2)) {
  }
  FUN_1801007c2(local_60,local_58);
  thunk_FUN_180100412(local_60);
  return;
}


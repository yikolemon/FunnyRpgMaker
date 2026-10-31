/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140109792 */

void FUN_140109792(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar2 = **(longlong **)(param_2 + 0x30);
  FUN_1400796ae(local_60);
  FUN_140079772(local_60,0x7fffffff,DAT_1401c86a4);
  while( true ) {
    cVar1 = FUN_140079cee(local_60);
    if (cVar1 == '\0') break;
    for (; (local_58 < local_5c && (lVar2 != 0)); lVar2 = FUN_1401098de(param_1,local_60,lVar2)) {
    }
  }
  for (; lVar2 != 0; lVar2 = FUN_1401098de(param_1,local_60,lVar2)) {
  }
  FUN_140079a7e(local_60,local_58);
  thunk_FUN_1400796ce(local_60);
  return;
}


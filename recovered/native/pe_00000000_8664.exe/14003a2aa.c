/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003a2aa */

void FUN_14003a2aa(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 **ppuVar2;
  undefined1 *local_1a8;
  longlong local_1a0;
  undefined1 *local_158;
  longlong local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  code *local_130;
  undefined1 local_128 [256];
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_1;
  FUN_1400378a0();
  ppuVar2 = &local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *ppuVar2 = (undefined1 *)*param_2;
    param_2 = param_2 + 1;
    ppuVar2 = ppuVar2 + 1;
  }
  local_140 = 0;
  local_130 = FUN_1400199de;
  local_148 = local_128;
  local_138 = 0xfa;
  FUN_140019fc2(&local_148,local_1a8,local_1a8 + local_1a0);
  FUN_140019fc2(&local_148,local_158,local_150 + (longlong)local_158);
  local_1a8 = local_148;
  local_158 = local_148 + local_1a0;
  FUN_14003a43c(local_28 + 0x58,&local_1a8);
  if (local_148 != local_128) {
    thunk_FUN_1401aea30();
  }
  FUN_14018a340(local_28);
  return;
}


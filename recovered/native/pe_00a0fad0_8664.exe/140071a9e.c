/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140071a9e */

longlong FUN_140071a9e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = param_3;
  local_48 = param_1;
  while (local_48 != param_2) {
    local_40 = param_3;
    local_38 = lVar1;
    FUN_140071b52(lVar1,local_48 + 0x20);
    lVar1 = lVar1 + 0x30;
    FUN_14001010a(&local_48);
  }
  return lVar1;
}


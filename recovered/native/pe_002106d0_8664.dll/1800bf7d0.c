/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf7d0 */

longlong FUN_1800bf7d0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = param_3;
  while (bVar2 = param_2 != 0, param_2 = param_2 + -1, bVar2) {
    local_50 = 0;
    local_48 = param_3;
    local_40 = lVar1;
    FUN_1800bf8d2(lVar1,param_1,&local_50);
    lVar1 = lVar1 + 0x28;
    param_1 = param_1 + 0x20;
  }
  return lVar1;
}


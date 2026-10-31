/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ccb80 */

void FUN_1800ccb80(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong local_38 [2];
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = param_2;
  FUN_180044980();
  plVar2 = local_28;
  local_20 = param_1;
  cVar1 = FUN_18001a1ef(local_28,0);
  if (cVar1 == '\0') {
    FUN_1800ccc60(local_20 + 0xf0,local_38,*plVar2 + 8);
    plVar2 = local_28;
    FUN_180022b6e(local_38[0] + 0x30,local_28);
  }
  FUN_180022ada(local_20 + 0x1d8,plVar2);
  FUN_18023d6e0(local_20);
  FUN_18004363a(local_28);
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a8162 */

undefined8 FUN_1800a8162(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = param_2;
  FUN_180081664(param_2,0);
  local_58 = 0;
  uStack_50 = 0;
  FUN_18008d278(local_68,&local_58,0,2);
  uVar2 = FUN_18008cfa6(local_40,"events");
  FUN_1800856c4(uVar2,local_68);
  lVar1 = *(longlong *)(param_1 + 0xb8);
  for (lVar3 = *(longlong *)(param_1 + 0xb0); lVar3 != lVar1; lVar3 = lVar3 + 0x80) {
    uVar2 = FUN_18008cfa6(local_40,"events");
    FUN_1800aaef0(lVar3,&local_58);
    FUN_18008cffa(uVar2,&local_58);
    FUN_18007ff6e(&local_58);
  }
  return local_40;
}


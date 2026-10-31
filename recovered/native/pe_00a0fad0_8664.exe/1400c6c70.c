/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c6c70 */

undefined8 FUN_1400c6c70(longlong param_1,undefined8 param_2)

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
  FUN_140057552(param_2,0);
  local_58 = 0;
  uStack_50 = 0;
  FUN_14008e0cc(local_68,&local_58,0,2);
  uVar2 = FUN_140057b3c(local_40,"events");
  FUN_14005783a(uVar2,local_68);
  lVar1 = *(longlong *)(param_1 + 0xb8);
  for (lVar3 = *(longlong *)(param_1 + 0xb0); lVar3 != lVar1; lVar3 = lVar3 + 0x80) {
    uVar2 = FUN_140057b3c(local_40,"events");
    FUN_1400c9c42(lVar3,&local_58);
    FUN_140057df4(uVar2,&local_58);
    FUN_1400578a6(&local_58);
  }
  return local_40;
}


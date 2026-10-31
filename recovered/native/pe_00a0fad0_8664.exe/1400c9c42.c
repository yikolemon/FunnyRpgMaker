/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c9c42 */

undefined8 FUN_1400c9c42(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = param_2;
  FUN_140057552(param_2,0);
  FUN_14008df96(local_98,param_1);
  uVar2 = FUN_140057b3c(local_40,"id");
  FUN_14005783a(uVar2,local_98);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1401cc8c0) {
    FUN_1400dd790(&DAT_1401cc8c0);
    if (DAT_1401cc8c0 == -1) {
      FUN_14007709a(&DAT_1401cc848);
      FUN_1400d3740(&LAB_140088654);
      _Init_thread_footer(&DAT_1401cc8c0);
    }
  }
  if (*(ulonglong *)(param_1 + 0x20) < 8) {
    lVar3 = param_1 + 8;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 8);
  }
  FUN_140031ece(&DAT_1401cc848,&local_68,lVar3,lVar3 + *(longlong *)(param_1 + 0x18) * 2);
  FUN_140057eb8(local_88,&local_68);
  uVar2 = FUN_140057b3c(local_40,"name");
  FUN_14005783a(uVar2,local_88);
  FUN_1400017de(&local_68);
  local_68 = 0;
  uStack_60 = 0;
  FUN_14008e0cc(local_78,&local_68,0,2);
  uVar2 = FUN_140057b3c(local_40,"pages");
  FUN_14005783a(uVar2,local_78);
  lVar1 = *(longlong *)(param_1 + 0x38);
  for (lVar3 = *(longlong *)(param_1 + 0x30); lVar3 != lVar1; lVar3 = lVar3 + 0xa0) {
    uVar2 = FUN_140057b3c(local_40,"pages");
    FUN_1400c9f5a(lVar3,&local_68);
    FUN_140057df4(uVar2,&local_68);
    FUN_1400578a6(&local_68);
  }
  return local_40;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c374e */

undefined8 FUN_1400c374e(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_2;
  FUN_140057552(param_2,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1401cc8c0) {
    FUN_1400dd790(&DAT_1401cc8c0);
    if (DAT_1401cc8c0 == -1) {
      FUN_14007709a(&DAT_1401cc848);
      FUN_1400d3740(&LAB_140088654);
      _Init_thread_footer(&DAT_1401cc8c0);
    }
  }
  if (*(ulonglong *)(param_1 + 0x90) < 8) {
    lVar4 = param_1 + 0x78;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x78);
  }
  FUN_140031ece(&DAT_1401cc848,&local_78,lVar4,lVar4 + *(longlong *)(param_1 + 0x88) * 2);
  FUN_140057eb8(local_d8,&local_78);
  uVar2 = FUN_140057b3c(local_50,"Title");
  FUN_14005783a(uVar2,local_d8);
  FUN_1400017de(&local_78);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1401cc8c0) {
    FUN_1400dd790(&DAT_1401cc8c0);
    if (DAT_1401cc8c0 == -1) {
      FUN_14007709a(&DAT_1401cc848);
      FUN_1400d3740(&LAB_140088654);
      _Init_thread_footer(&DAT_1401cc8c0);
    }
  }
  if (*(ulonglong *)(param_1 + 0x140) < 8) {
    lVar4 = param_1 + 0x128;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x128);
  }
  FUN_140031ece(&DAT_1401cc848,&local_78,lVar4,lVar4 + *(longlong *)(param_1 + 0x138) * 2);
  FUN_140057eb8(local_c8,&local_78);
  uVar2 = FUN_140057b3c(local_50,"TitlePlus");
  FUN_14005783a(uVar2,local_c8);
  FUN_1400017de(&local_78);
  if (9 < *(uint *)(param_1 + 0x70)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_1401cc8c0) {
      FUN_1400dd790(&DAT_1401cc8c0);
      if (DAT_1401cc8c0 == -1) {
        FUN_14007709a(&DAT_1401cc848);
        FUN_1400d3740(&LAB_140088654);
        _Init_thread_footer(&DAT_1401cc8c0);
      }
    }
    if (*(ulonglong *)(param_1 + 0x1a0) < 8) {
      lVar4 = param_1 + 0x188;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x188);
    }
    FUN_140031ece(&DAT_1401cc848,&local_78,lVar4,lVar4 + *(longlong *)(param_1 + 0x198) * 2);
    FUN_140057eb8(local_b8,&local_78);
    uVar2 = FUN_140057b3c(local_50,"StartUpMsg");
    FUN_14005783a(uVar2,local_b8);
    FUN_1400017de(&local_78);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_1401cc8c0) {
      FUN_1400dd790(&DAT_1401cc8c0);
      if (DAT_1401cc8c0 == -1) {
        FUN_14007709a(&DAT_1401cc848);
        FUN_1400d3740(&LAB_140088654);
        _Init_thread_footer(&DAT_1401cc8c0);
      }
    }
    if (*(ulonglong *)(param_1 + 0x1c0) < 8) {
      lVar4 = param_1 + 0x1a8;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x1a8);
    }
    FUN_140031ece(&DAT_1401cc848,&local_78,lVar4,lVar4 + *(longlong *)(param_1 + 0x1b8) * 2);
    FUN_140057eb8(local_a8,&local_78);
    uVar2 = FUN_140057b3c(local_50,"TitleMsg");
    FUN_14005783a(uVar2,local_a8);
    FUN_1400017de(&local_78);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1401cc8c0) {
    FUN_1400dd790(&DAT_1401cc8c0);
    if (DAT_1401cc8c0 == -1) {
      FUN_14007709a(&DAT_1401cc848);
      FUN_1400d3740(&LAB_140088654);
      _Init_thread_footer(&DAT_1401cc8c0);
    }
  }
  if (*(ulonglong *)(param_1 + 0xe8) < 8) {
    lVar4 = param_1 + 0xd0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0xd0);
  }
  FUN_140031ece(&DAT_1401cc848,&local_78,lVar4,lVar4 + *(longlong *)(param_1 + 0xe0) * 2);
  FUN_140057eb8(local_98,&local_78);
  uVar2 = FUN_140057b3c(local_50,"MainFont");
  FUN_14005783a(uVar2,local_98);
  FUN_1400017de(&local_78);
  local_78 = 0;
  uStack_70 = 0;
  FUN_14008e0cc(local_88,&local_78,0,2);
  uVar2 = FUN_140057b3c(local_50,"SubFonts");
  FUN_14005783a(uVar2,local_88);
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  for (puVar3 = *(undefined8 **)(param_1 + 0xf0); puVar3 != puVar1; puVar3 = puVar3 + 4) {
    uVar2 = FUN_140057b3c(local_50,"SubFonts");
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_1401cc8c0) {
      FUN_1400dd790(&DAT_1401cc8c0);
      if (DAT_1401cc8c0 == -1) {
        FUN_14007709a(&DAT_1401cc848);
        FUN_1400d3740(&LAB_140088654);
        _Init_thread_footer(&DAT_1401cc8c0);
      }
    }
    puVar5 = puVar3;
    if (7 < (ulonglong)puVar3[3]) {
      puVar5 = (undefined8 *)*puVar3;
    }
    FUN_140031ece(&DAT_1401cc848,&local_78,puVar5,(longlong)puVar5 + puVar3[2] * 2);
    FUN_140057eb8(local_e8,&local_78);
    FUN_140057df4(uVar2,local_e8);
    FUN_1400578a6(local_e8);
    FUN_1400017de(&local_78);
  }
  return local_50;
}


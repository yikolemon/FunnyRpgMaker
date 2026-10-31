/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180071538 */

undefined8 FUN_180071538(longlong param_1,undefined8 param_2)

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
  FUN_180081664(param_2,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180417d40) {
    FUN_18023d500(&DAT_180417d40);
    if (DAT_180417d40 == -1) {
      FUN_18007645e(&DAT_180417cc8);
      FUN_18023d710(&LAB_180081b19);
      _Init_thread_footer(&DAT_180417d40);
    }
  }
  if (*(ulonglong *)(param_1 + 0x90) < 8) {
    lVar4 = param_1 + 0x78;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x78);
  }
  FUN_1800770d6(&DAT_180417cc8,&local_78,lVar4,lVar4 + *(longlong *)(param_1 + 0x88) * 2);
  FUN_18008cf26(local_d8,&local_78);
  uVar2 = FUN_18008cfa6(local_50,"Title");
  FUN_1800856c4(uVar2,local_d8);
  FUN_180001ef2(&local_78);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180417d40) {
    FUN_18023d500(&DAT_180417d40);
    if (DAT_180417d40 == -1) {
      FUN_18007645e(&DAT_180417cc8);
      FUN_18023d710(&LAB_180081b19);
      _Init_thread_footer(&DAT_180417d40);
    }
  }
  if (*(ulonglong *)(param_1 + 0x140) < 8) {
    lVar4 = param_1 + 0x128;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x128);
  }
  FUN_1800770d6(&DAT_180417cc8,&local_78,lVar4,lVar4 + *(longlong *)(param_1 + 0x138) * 2);
  FUN_18008cf26(local_c8,&local_78);
  uVar2 = FUN_18008cfa6(local_50,"TitlePlus");
  FUN_1800856c4(uVar2,local_c8);
  FUN_180001ef2(&local_78);
  if (9 < *(uint *)(param_1 + 0x70)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_180417d40) {
      FUN_18023d500(&DAT_180417d40);
      if (DAT_180417d40 == -1) {
        FUN_18007645e(&DAT_180417cc8);
        FUN_18023d710(&LAB_180081b19);
        _Init_thread_footer(&DAT_180417d40);
      }
    }
    if (*(ulonglong *)(param_1 + 0x1a0) < 8) {
      lVar4 = param_1 + 0x188;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x188);
    }
    FUN_1800770d6(&DAT_180417cc8,&local_78,lVar4,lVar4 + *(longlong *)(param_1 + 0x198) * 2);
    FUN_18008cf26(local_b8,&local_78);
    uVar2 = FUN_18008cfa6(local_50,"StartUpMsg");
    FUN_1800856c4(uVar2,local_b8);
    FUN_180001ef2(&local_78);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_180417d40) {
      FUN_18023d500(&DAT_180417d40);
      if (DAT_180417d40 == -1) {
        FUN_18007645e(&DAT_180417cc8);
        FUN_18023d710(&LAB_180081b19);
        _Init_thread_footer(&DAT_180417d40);
      }
    }
    if (*(ulonglong *)(param_1 + 0x1c0) < 8) {
      lVar4 = param_1 + 0x1a8;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x1a8);
    }
    FUN_1800770d6(&DAT_180417cc8,&local_78,lVar4,lVar4 + *(longlong *)(param_1 + 0x1b8) * 2);
    FUN_18008cf26(local_a8,&local_78);
    uVar2 = FUN_18008cfa6(local_50,"TitleMsg");
    FUN_1800856c4(uVar2,local_a8);
    FUN_180001ef2(&local_78);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180417d40) {
    FUN_18023d500(&DAT_180417d40);
    if (DAT_180417d40 == -1) {
      FUN_18007645e(&DAT_180417cc8);
      FUN_18023d710(&LAB_180081b19);
      _Init_thread_footer(&DAT_180417d40);
    }
  }
  if (*(ulonglong *)(param_1 + 0xe8) < 8) {
    lVar4 = param_1 + 0xd0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0xd0);
  }
  FUN_1800770d6(&DAT_180417cc8,&local_78,lVar4,lVar4 + *(longlong *)(param_1 + 0xe0) * 2);
  FUN_18008cf26(local_98,&local_78);
  uVar2 = FUN_18008cfa6(local_50,"MainFont");
  FUN_1800856c4(uVar2,local_98);
  FUN_180001ef2(&local_78);
  local_78 = 0;
  uStack_70 = 0;
  FUN_18008d278(local_88,&local_78,0,2);
  uVar2 = FUN_18008cfa6(local_50,"SubFonts");
  FUN_1800856c4(uVar2,local_88);
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  for (puVar3 = *(undefined8 **)(param_1 + 0xf0); puVar3 != puVar1; puVar3 = puVar3 + 4) {
    uVar2 = FUN_18008cfa6(local_50,"SubFonts");
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_180417d40) {
      FUN_18023d500(&DAT_180417d40);
      if (DAT_180417d40 == -1) {
        FUN_18007645e(&DAT_180417cc8);
        FUN_18023d710(&LAB_180081b19);
        _Init_thread_footer(&DAT_180417d40);
      }
    }
    puVar5 = puVar3;
    if (7 < (ulonglong)puVar3[3]) {
      puVar5 = (undefined8 *)*puVar3;
    }
    FUN_1800770d6(&DAT_180417cc8,&local_78,puVar5,(longlong)puVar5 + puVar3[2] * 2);
    FUN_18008cf26(local_e8,&local_78);
    FUN_18008cffa(uVar2,local_e8);
    FUN_18007ff6e(local_e8);
    FUN_180001ef2(&local_78);
  }
  return local_50;
}


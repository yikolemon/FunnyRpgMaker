/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aaef0 */

undefined8 FUN_1800aaef0(longlong param_1,undefined8 param_2)

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
  FUN_180081664(param_2,0);
  FUN_18008f7e8(local_98,param_1);
  uVar2 = FUN_18008cfa6(local_40,&DAT_18036a525);
  FUN_1800856c4(uVar2,local_98);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180417d40) {
    FUN_18023d500(&DAT_180417d40);
    if (DAT_180417d40 == -1) {
      FUN_18007645e(&DAT_180417cc8);
      FUN_18023d710(&LAB_180081b19);
      _Init_thread_footer(&DAT_180417d40);
    }
  }
  if (*(ulonglong *)(param_1 + 0x20) < 8) {
    lVar3 = param_1 + 8;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 8);
  }
  FUN_1800770d6(&DAT_180417cc8,&local_68,lVar3,lVar3 + *(longlong *)(param_1 + 0x18) * 2);
  FUN_18008cf26(local_88,&local_68);
  uVar2 = FUN_18008cfa6(local_40,"name");
  FUN_1800856c4(uVar2,local_88);
  FUN_180001ef2(&local_68);
  local_68 = 0;
  uStack_60 = 0;
  FUN_18008d278(local_78,&local_68,0,2);
  uVar2 = FUN_18008cfa6(local_40,"pages");
  FUN_1800856c4(uVar2,local_78);
  lVar1 = *(longlong *)(param_1 + 0x38);
  for (lVar3 = *(longlong *)(param_1 + 0x30); lVar3 != lVar1; lVar3 = lVar3 + 0xa0) {
    uVar2 = FUN_18008cfa6(local_40,"pages");
    FUN_1800ab208(lVar3,&local_68);
    FUN_18008cffa(uVar2,&local_68);
    FUN_18007ff6e(&local_68);
  }
  return local_40;
}


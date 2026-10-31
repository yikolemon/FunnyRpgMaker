/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008f076 */

undefined8 FUN_18008f076(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  ulonglong local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_48 = param_2;
  FUN_180081664(param_2,0);
  FUN_18008f7e8(local_b0,param_1 + 8);
  uVar2 = FUN_18008cfa6(local_48,&DAT_18036a525);
  FUN_1800856c4(uVar2,local_b0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2c) < DAT_180417d40) && (FUN_18023d500(&DAT_180417d40), DAT_180417d40 == -1)) {
    FUN_18007645e(&DAT_180417cc8);
    FUN_18023d710(&LAB_180081b19);
    _Init_thread_footer(&DAT_180417d40);
  }
  if (*(ulonglong *)(param_1 + 0x40) < 8) {
    lVar3 = param_1 + 0x28;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  FUN_1800770d6(&DAT_180417cc8,&local_68,lVar3,lVar3 + *(longlong *)(param_1 + 0x38) * 2);
  FUN_18008cf26(local_a0,&local_68);
  uVar2 = FUN_18008cfa6(local_48,"name");
  FUN_1800856c4(uVar2,local_a0);
  FUN_180001ef2(&local_68);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2c) < DAT_180417d40) && (FUN_18023d500(&DAT_180417d40), DAT_180417d40 == -1)) {
    FUN_18007645e(&DAT_180417cc8);
    FUN_18023d710(&LAB_180081b19);
    _Init_thread_footer(&DAT_180417d40);
  }
  if (*(ulonglong *)(param_1 + 0x98) < 8) {
    lVar3 = param_1 + 0x80;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x80);
  }
  FUN_1800770d6(&DAT_180417cc8,&local_68,lVar3,lVar3 + *(longlong *)(param_1 + 0x90) * 2);
  FUN_18008cf26(local_90,&local_68);
  uVar2 = FUN_18008cfa6(local_48,"description");
  FUN_1800856c4(uVar2,local_90);
  FUN_180001ef2(&local_68);
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  FUN_18008d278(local_80,&local_68,0,2);
  uVar2 = FUN_18008cfa6(local_48,"commands");
  FUN_1800856c4(uVar2,local_80);
  local_70 = 0;
  do {
    if ((ulonglong)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 4) <= local_70)
    {
      return local_48;
    }
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x48) + local_70 * 0x10);
    (**(code **)*puVar1)(puVar1,&local_68);
    if ((char)local_68 != '\0') {
      if ((char)local_68 == '\x01') {
        if (*plStack_60 != plStack_60[1]) goto LAB_18008f295;
      }
      else if (((char)local_68 != '\x02') || (*plStack_60 != plStack_60[1])) {
LAB_18008f295:
        FUN_18008a2f4(local_c0,&local_70);
        uVar2 = FUN_18008cfa6(&local_68,"index");
        FUN_1800856c4(uVar2,local_c0);
        uVar2 = FUN_18008cfa6(local_48,"commands");
        FUN_18008f85a(uVar2,&local_68);
      }
    }
    FUN_18007ff6e(&local_68);
    local_70 = local_70 + 1;
  } while( true );
}


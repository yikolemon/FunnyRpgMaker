/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008d824 */

undefined8 FUN_14008d824(longlong param_1,undefined8 param_2)

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
  FUN_140057552(param_2,0);
  FUN_14008df96(local_b0,param_1 + 8);
  uVar2 = FUN_140057b3c(local_48,"id");
  FUN_14005783a(uVar2,local_b0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_1401cc8c0) && (FUN_1400dd790(&DAT_1401cc8c0), DAT_1401cc8c0 == -1)) {
    FUN_14007709a(&DAT_1401cc848);
    FUN_1400d3740(&LAB_140088654);
    _Init_thread_footer(&DAT_1401cc8c0);
  }
  if (*(ulonglong *)(param_1 + 0x40) < 8) {
    lVar3 = param_1 + 0x28;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  FUN_140031ece(&DAT_1401cc848,&local_68,lVar3,lVar3 + *(longlong *)(param_1 + 0x38) * 2);
  FUN_140057eb8(local_a0,&local_68);
  uVar2 = FUN_140057b3c(local_48,"name");
  FUN_14005783a(uVar2,local_a0);
  FUN_1400017de(&local_68);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_1401cc8c0) && (FUN_1400dd790(&DAT_1401cc8c0), DAT_1401cc8c0 == -1)) {
    FUN_14007709a(&DAT_1401cc848);
    FUN_1400d3740(&LAB_140088654);
    _Init_thread_footer(&DAT_1401cc8c0);
  }
  if (*(ulonglong *)(param_1 + 0x98) < 8) {
    lVar3 = param_1 + 0x80;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x80);
  }
  FUN_140031ece(&DAT_1401cc848,&local_68,lVar3,lVar3 + *(longlong *)(param_1 + 0x90) * 2);
  FUN_140057eb8(local_90,&local_68);
  uVar2 = FUN_140057b3c(local_48,"description");
  FUN_14005783a(uVar2,local_90);
  FUN_1400017de(&local_68);
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  FUN_14008e0cc(local_80,&local_68,0,2);
  uVar2 = FUN_140057b3c(local_48,"commands");
  FUN_14005783a(uVar2,local_80);
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
        if (*plStack_60 != plStack_60[1]) goto LAB_14008da43;
      }
      else if (((char)local_68 != '\x02') || (*plStack_60 != plStack_60[1])) {
LAB_14008da43:
        FUN_14006e0c4(local_c0,&local_70);
        uVar2 = FUN_140057b3c(&local_68,"index");
        FUN_14005783a(uVar2,local_c0);
        uVar2 = FUN_140057b3c(local_48,"commands");
        FUN_14008e008(uVar2,&local_68);
      }
    }
    FUN_1400578a6(&local_68);
    local_70 = local_70 + 1;
  } while( true );
}


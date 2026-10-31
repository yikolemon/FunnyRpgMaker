/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009ca00 */

undefined8 FUN_14009ca00(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 ***local_98 [2];
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x30)) &&
     (*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x10))) {
    FUN_140057552(param_2,0);
  }
  else {
    local_58 = param_1;
    local_50 = param_2;
    FUN_140057552(param_2,0);
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(local_58 + 0x20));
    FUN_14009e130(local_d8);
    uVar3 = FUN_140057b3c(local_50,&DAT_140170236);
    FUN_14005783a(uVar3,local_d8);
    FUN_14009e1a4(local_58,local_98);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_1401cc8c0) && (FUN_1400dd790(&DAT_1401cc8c0), DAT_1401cc8c0 == -1)) {
      FUN_14007709a(&DAT_1401cc848);
      FUN_1400d3740(&LAB_140088654);
      _Init_thread_footer(&DAT_1401cc8c0);
    }
    ppppuVar4 = local_98;
    if (7 < local_80) {
      ppppuVar4 = (undefined8 ****)local_98[0];
    }
    FUN_140031ece(&DAT_1401cc848,&local_78,ppppuVar4,(longlong)ppppuVar4 + local_88 * 2);
    FUN_140057eb8(local_c8,&local_78);
    uVar3 = FUN_140057b3c(local_50,"codeStr");
    FUN_14005783a(uVar3,local_c8);
    FUN_1400017de(&local_78);
    FUN_140005242(local_98);
    if (*(longlong *)(local_58 + 0x28) != *(longlong *)(local_58 + 0x30)) {
      local_78 = 0;
      uStack_70 = 0;
      FUN_14008e0cc(local_b8,&local_78,0,2);
      uVar3 = FUN_140057b3c(local_50,"stringArgs");
      FUN_14005783a(uVar3,local_b8);
      puVar1 = *(undefined8 **)(local_58 + 0x30);
      for (puVar7 = *(undefined8 **)(local_58 + 0x28); puVar7 != puVar1; puVar7 = puVar7 + 4) {
        uVar3 = FUN_140057b3c(local_50,"stringArgs");
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 4) < DAT_1401cc8c0) && (FUN_1400dd790(&DAT_1401cc8c0), DAT_1401cc8c0 == -1))
        {
          FUN_14007709a(&DAT_1401cc848);
          FUN_1400d3740(&LAB_140088654);
          _Init_thread_footer(&DAT_1401cc8c0);
        }
        puVar6 = puVar7;
        if (7 < (ulonglong)puVar7[3]) {
          puVar6 = (undefined8 *)*puVar7;
        }
        FUN_140031ece(&DAT_1401cc848,&local_78,puVar6,(longlong)puVar6 + puVar7[2] * 2);
        FUN_140057eb8(local_98,&local_78);
        FUN_140057df4(uVar3,local_98);
        FUN_1400578a6(local_98);
        FUN_1400017de(&local_78);
      }
    }
    param_2 = local_50;
    if (*(longlong *)(local_58 + 8) != *(longlong *)(local_58 + 0x10)) {
      local_78 = 0;
      uStack_70 = 0;
      FUN_14008e0cc(local_a8,&local_78,0,2);
      uVar3 = FUN_140057b3c(local_50,"intArgs");
      FUN_14005783a(uVar3,local_a8);
      lVar2 = *(longlong *)(local_58 + 0x10);
      for (lVar5 = *(longlong *)(local_58 + 8); param_2 = local_50, lVar5 != lVar2;
          lVar5 = lVar5 + 4) {
        uVar3 = FUN_140057b3c(local_50,"intArgs");
        FUN_14008df96(&local_78,lVar5);
        FUN_140057df4(uVar3,&local_78);
        FUN_1400578a6(&local_78);
      }
    }
  }
  return param_2;
}


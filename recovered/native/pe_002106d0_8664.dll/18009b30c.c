/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009b30c */

undefined8 FUN_18009b30c(longlong param_1,undefined8 param_2)

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
    FUN_180081664(param_2,0);
  }
  else {
    local_58 = param_1;
    local_50 = param_2;
    FUN_180081664(param_2,0);
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(local_58 + 0x20));
    FUN_18009c90c(local_d8);
    uVar3 = FUN_18008cfa6(local_50,"code");
    FUN_1800856c4(uVar3,local_d8);
    FUN_18009c980(local_58,local_98);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180417d40) && (FUN_18023d500(&DAT_180417d40), DAT_180417d40 == -1)) {
      FUN_18007645e(&DAT_180417cc8);
      FUN_18023d710(&LAB_180081b19);
      _Init_thread_footer(&DAT_180417d40);
    }
    ppppuVar4 = local_98;
    if (7 < local_80) {
      ppppuVar4 = (undefined8 ****)local_98[0];
    }
    FUN_1800770d6(&DAT_180417cc8,&local_78,ppppuVar4,(longlong)ppppuVar4 + local_88 * 2);
    FUN_18008cf26(local_c8,&local_78);
    uVar3 = FUN_18008cfa6(local_50,"codeStr");
    FUN_1800856c4(uVar3,local_c8);
    FUN_180001ef2(&local_78);
    FUN_1800010ec(local_98);
    if (*(longlong *)(local_58 + 0x28) != *(longlong *)(local_58 + 0x30)) {
      local_78 = 0;
      uStack_70 = 0;
      FUN_18008d278(local_b8,&local_78,0,2);
      uVar3 = FUN_18008cfa6(local_50,"stringArgs");
      FUN_1800856c4(uVar3,local_b8);
      puVar1 = *(undefined8 **)(local_58 + 0x30);
      for (puVar7 = *(undefined8 **)(local_58 + 0x28); puVar7 != puVar1; puVar7 = puVar7 + 4) {
        uVar3 = FUN_18008cfa6(local_50,"stringArgs");
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2c) < DAT_180417d40) &&
           (FUN_18023d500(&DAT_180417d40), DAT_180417d40 == -1)) {
          FUN_18007645e(&DAT_180417cc8);
          FUN_18023d710(&LAB_180081b19);
          _Init_thread_footer(&DAT_180417d40);
        }
        puVar6 = puVar7;
        if (7 < (ulonglong)puVar7[3]) {
          puVar6 = (undefined8 *)*puVar7;
        }
        FUN_1800770d6(&DAT_180417cc8,&local_78,puVar6,(longlong)puVar6 + puVar7[2] * 2);
        FUN_18008cf26(local_98,&local_78);
        FUN_18008cffa(uVar3,local_98);
        FUN_18007ff6e(local_98);
        FUN_180001ef2(&local_78);
      }
    }
    param_2 = local_50;
    if (*(longlong *)(local_58 + 8) != *(longlong *)(local_58 + 0x10)) {
      local_78 = 0;
      uStack_70 = 0;
      FUN_18008d278(local_a8,&local_78,0,2);
      uVar3 = FUN_18008cfa6(local_50,"intArgs");
      FUN_1800856c4(uVar3,local_a8);
      lVar2 = *(longlong *)(local_58 + 0x10);
      for (lVar5 = *(longlong *)(local_58 + 8); param_2 = local_50, lVar5 != lVar2;
          lVar5 = lVar5 + 4) {
        uVar3 = FUN_18008cfa6(local_50,"intArgs");
        FUN_18008f7e8(&local_78,lVar5);
        FUN_18008cffa(uVar3,&local_78);
        FUN_18007ff6e(&local_78);
      }
    }
  }
  return param_2;
}


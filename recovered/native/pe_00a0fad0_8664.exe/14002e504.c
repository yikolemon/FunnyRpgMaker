/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002e504 */

undefined * FUN_14002e504(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [38];
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  puVar3 = *(undefined **)(param_1 + 0x28);
  puVar1 = *(undefined **)(param_1 + 0x30);
  if (puVar3 != puVar1) {
    do {
      FUN_140006874(local_188,puVar3);
      cVar2 = FUN_140030de8(param_2,local_188);
      if (cVar2 != '\0') {
        return puVar3;
      }
      FUN_140006874(local_168,puVar3);
      cVar2 = FUN_140030cdc(param_2,local_168);
      if (cVar2 != '\0') {
        return puVar3;
      }
      puVar3 = puVar3 + 0x20;
    } while (puVar3 != puVar1);
  }
  puVar3 = *(undefined **)(param_1 + 0x40);
  puVar1 = *(undefined **)(param_1 + 0x48);
  if (puVar3 != puVar1) {
    do {
      FUN_140006874(local_148,puVar3);
      cVar2 = FUN_140030cdc(param_2,local_148);
      if (cVar2 != '\0') {
        return puVar3;
      }
      if (*(longlong *)(puVar3 + 0x10) == 1) {
        FUN_140006874(local_128,puVar3);
        cVar2 = FUN_140030de8(param_2,local_128);
        if (cVar2 != '\0') {
          return puVar3;
        }
      }
      puVar3 = puVar3 + 0x20;
    } while (puVar3 != puVar1);
  }
  if (((*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x30)) &&
      (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_1 + 0x48))) &&
     (*(longlong *)(param_1 + 0x98) != 0)) {
    puVar3 = (undefined *)(param_1 + 0x88);
    FUN_140006874(local_c8,puVar3);
    cVar2 = FUN_140030de8(param_2,local_c8);
    if (cVar2 != '\0') {
      return puVar3;
    }
    FUN_140006874(local_a8,puVar3);
    local_41 = 1;
    cVar2 = FUN_140030cdc(param_2,local_a8);
    if (cVar2 != '\0') {
      return puVar3;
    }
    cVar2 = FUN_1400170b4(puVar3,param_2 + 0x88);
    if (cVar2 != '\0') {
      return puVar3;
    }
  }
  if (((*(longlong *)(param_2 + 0x28) == *(longlong *)(param_2 + 0x30)) &&
      (*(longlong *)(param_2 + 0x70) == *(longlong *)(param_2 + 0x78))) &&
     (*(longlong *)(param_2 + 0x98) != 0)) {
    puVar3 = (undefined *)(param_2 + 0x88);
    FUN_140006874(local_88,puVar3);
    cVar2 = FUN_140030de8(param_1,local_88);
    if (cVar2 != '\0') {
      return puVar3;
    }
    FUN_140006874(local_68,puVar3);
    local_42 = 1;
    cVar2 = FUN_140030cdc(param_1,local_68);
    if (cVar2 != '\0') {
      return puVar3;
    }
    cVar2 = FUN_1400170b4(param_1 + 0x88,puVar3);
    if (cVar2 != '\0') {
      return puVar3;
    }
  }
  if ((*(char *)(param_1 + 0x21) != '\0') || (*(char *)(param_1 + 0x22) != '\0')) {
    puVar3 = *(undefined **)(param_2 + 0x28);
    puVar1 = *(undefined **)(param_2 + 0x30);
    if (puVar3 != puVar1) {
      do {
        FUN_140006874(local_108,puVar3);
        cVar2 = FUN_140030de8(param_1,local_108);
        if (cVar2 != '\0') {
          return puVar3;
        }
        puVar3 = puVar3 + 0x20;
      } while (puVar3 != puVar1);
    }
    puVar3 = *(undefined **)(param_2 + 0x40);
    puVar1 = *(undefined **)(param_2 + 0x48);
    if (puVar3 != puVar1) {
      do {
        FUN_140006874(local_e8,puVar3);
        cVar2 = FUN_140030cdc(param_1,local_e8);
        if (cVar2 != '\0') {
          return puVar3;
        }
        puVar3 = puVar3 + 0x20;
      } while (puVar3 != puVar1);
    }
  }
  return &DAT_14013bd30;
}


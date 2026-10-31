/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006668e */

ulonglong FUN_14006668e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong local_128 [3];
  ulonglong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined **local_e8;
  ulonglong local_e0;
  undefined **local_c8;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  ulonglong local_68 [4];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_14006966e(local_128);
  lVar1 = param_1 + 0x48;
code_r0x0001400666e4:
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
    local_68[0] = CONCAT71(local_68[0]._1_7_,1);
    FUN_14006d0c8(param_2,&local_e8,local_68,0);
    break;
  case 2:
    local_68[0] = (ulonglong)local_68[0]._1_7_ << 8;
    FUN_14006d0c8(param_2,&local_e8,local_68,0);
    break;
  case 3:
    local_68[0] = 0;
    FUN_14006d440(param_2,&local_e8,local_68,0);
    break;
  case 4:
    FUN_14006dabc(param_2,&local_e8,param_1 + 0x98,0);
    break;
  case 5:
    local_68[0] = *(ulonglong *)(param_1 + 200);
    FUN_14006ddc0(param_2,&local_e8,local_68,0);
    break;
  case 6:
    local_68[0] = *(ulonglong *)(param_1 + 0xc0);
    FUN_14006d744(param_2,&local_e8,local_68,0);
    break;
  case 7:
    if (0x7fefffffffffffff < (*(ulonglong *)(param_1 + 0xd0) & 0x7fffffffffffffff)) {
      local_108 = CONCAT71(local_108._1_7_,0x27);
      FUN_140067f60(lVar1,local_88);
      FUN_14006a7c9(local_68,"number overflow parsing \'",local_88,&local_108);
      FUN_14006a658(&local_e8,0x196,local_68,0);
      FUN_140067f60(lVar1,local_a8);
      uVar5 = FUN_14006a5ee(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
      uVar8 = (ulonglong)uVar5;
      FUN_1400017de(local_a8);
      FUN_14006803a(&local_e8);
      FUN_1400017de(local_68);
      FUN_1400017de(local_88);
      goto LAB_140066a9d;
    }
    local_68[0] = *(ulonglong *)(param_1 + 0xd0);
    FUN_14006cd3e(param_2,&local_e8,local_68,0);
    break;
  case 8:
    cVar2 = FUN_14006a32c(param_2,0xffffffffffffffff);
    if (cVar2 != '\0') {
      iVar3 = FUN_140065468(lVar1);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 != 10) {
        local_88[0] = 1;
        local_e8 = (undefined **)
                   (((longlong)local_110 >> 0x3f & 0xe000000000000000U) +
                   (local_110 >> 5) * 4 + local_128[0]);
        local_e0 = (ulonglong)((uint)local_110 & 0x1f);
        FUN_140069730(local_128,local_68,&local_e8,1,local_88);
        goto code_r0x0001400666e4;
      }
      cVar2 = FUN_14006a4fe(param_2);
LAB_1400667f2:
      if (cVar2 != '\0') break;
    }
LAB_140066c5f:
    uVar8 = 0;
    goto LAB_140066a9d;
  case 9:
    cVar2 = FUN_140069e00(param_2,0xffffffffffffffff);
    if (cVar2 == '\0') goto LAB_140066c5f;
    iVar3 = FUN_140065468(lVar1);
    *(int *)(param_1 + 0x40) = iVar3;
    if (iVar3 == 0xb) {
      cVar2 = FUN_140069fd2(param_2);
      goto LAB_1400667f2;
    }
    if (iVar3 == 4) {
      cVar2 = FUN_14006a1e0(param_2,param_1 + 0x98);
      if (cVar2 == '\0') goto LAB_140066c5f;
      iVar3 = FUN_140065468(lVar1);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 == 0xc) goto code_r0x000140066a39;
      FUN_14000169c(local_88,"object separator");
      FUN_140067c8c(param_1,local_68,0xc,local_88);
      local_f8 = *(undefined8 *)(param_1 + 0x78);
      local_108 = *(undefined8 *)(param_1 + 0x68);
      uStack_100 = *(undefined8 *)(param_1 + 0x70);
      FUN_140067aa0(&local_e8,0x65,&local_108,local_68,0);
      FUN_140067f60(lVar1,local_a8);
      uVar5 = FUN_140067a36(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
      uVar8 = (ulonglong)uVar5;
      FUN_1400017de(local_a8);
      FUN_14006803a(&local_e8);
      FUN_1400017de(local_68);
      FUN_1400017de(local_88);
    }
    else {
      FUN_14000169c(local_88,"object key");
      FUN_140067c8c(param_1,local_68,4,local_88);
      local_f8 = *(undefined8 *)(param_1 + 0x78);
      local_108 = *(undefined8 *)(param_1 + 0x68);
      uStack_100 = *(undefined8 *)(param_1 + 0x70);
      FUN_140067aa0(&local_e8,0x65,&local_108,local_68,0);
      FUN_140067f60(lVar1,local_a8);
      uVar5 = FUN_140067a36(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
      uVar8 = (ulonglong)uVar5;
      FUN_1400017de(local_a8);
      FUN_14006803a(&local_e8);
      FUN_1400017de(local_68);
      FUN_1400017de(local_88);
    }
    goto LAB_140066a9d;
  default:
    FUN_14000169c(local_88,"value");
    FUN_140067c8c(param_1,local_68,0x10,local_88);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_140067aa0(&local_e8,0x65,&local_108,local_68,0);
    FUN_140067f60(lVar1,local_a8);
    uVar5 = FUN_140067a36(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
    uVar8 = (ulonglong)uVar5;
    FUN_1400017de(local_a8);
    local_e8 = nlohmann::json_abi_v3_11_2::detail::exception::vftable;
    local_c8 = std::exception::vftable;
    FUN_140107df0();
    local_e8 = std::exception::vftable;
    FUN_140107df0();
    FUN_1400017de(local_68);
    FUN_1400017de(local_88);
LAB_140066a9d:
    FUN_1400696ea(local_128);
    return uVar8 & 0xffffffff;
  case 0xe:
    FUN_14000169c(local_88,"value");
    FUN_140067c8c(param_1,local_68,0,local_88);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_140067aa0(&local_e8,0x65,&local_108,local_68,0);
    FUN_140067f60(lVar1,local_a8);
    uVar5 = FUN_140067a36(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
    uVar8 = (ulonglong)uVar5;
    FUN_1400017de(local_a8);
    local_e8 = nlohmann::json_abi_v3_11_2::detail::exception::vftable;
    local_c8 = std::exception::vftable;
    FUN_140107df0();
    local_e8 = std::exception::vftable;
    FUN_140107df0();
    FUN_1400017de(local_68);
    FUN_1400017de(local_88);
    goto LAB_140066a9d;
  }
  do {
    if (local_110 == 0) {
      uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto LAB_140066a9d;
    }
    uVar5 = (uint)local_110 & 0x1f;
    uVar8 = (ulonglong)uVar5;
    uVar5 = 1 << ((char)uVar5 - 1U & 0x1f);
    if (uVar8 == 0) {
      uVar5 = 0x80000000;
    }
    lVar9 = (local_110 >> 5) * 4 + local_128[0];
    uVar6 = (longlong)local_110 >> 0x3f & 0xe000000000000000;
    puVar7 = (uint *)(lVar9 + uVar6 + (uVar8 - 1 >> 5) * 4);
    if (uVar8 == 0) {
      puVar7 = (uint *)((uVar6 - 4) + lVar9);
    }
    if ((*puVar7 & uVar5) == 0) {
      iVar3 = FUN_140065468(lVar1);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 == 0xd) {
        iVar3 = FUN_140065468(lVar1);
        *(int *)(param_1 + 0x40) = iVar3;
        if (iVar3 != 4) {
          FUN_14000169c(local_88,"object key");
          FUN_140067c8c(param_1,local_68,4,local_88);
          local_f8 = *(undefined8 *)(param_1 + 0x78);
          local_108 = *(undefined8 *)(param_1 + 0x68);
          uStack_100 = *(undefined8 *)(param_1 + 0x70);
          FUN_140067aa0(&local_e8,0x65,&local_108,local_68,0);
          FUN_140067f60(lVar1,local_a8);
          uVar5 = FUN_140067a36(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
          uVar8 = (ulonglong)uVar5;
          FUN_1400017de(local_a8);
          FUN_14006803a(&local_e8);
          FUN_1400017de(local_68);
          FUN_1400017de(local_88);
          goto LAB_140066a9d;
        }
        cVar2 = FUN_14006a1e0(param_2,param_1 + 0x98);
        if (cVar2 == '\0') goto LAB_140066c5f;
        iVar3 = FUN_140065468(lVar1);
        *(int *)(param_1 + 0x40) = iVar3;
        if (iVar3 == 0xc) {
          uVar4 = FUN_140065468(lVar1);
          *(undefined4 *)(param_1 + 0x40) = uVar4;
          goto code_r0x0001400666e4;
        }
        FUN_14000169c(local_88,"object separator");
        FUN_140067c8c(param_1,local_68,0xc,local_88);
        local_f8 = *(undefined8 *)(param_1 + 0x78);
        local_108 = *(undefined8 *)(param_1 + 0x68);
        uStack_100 = *(undefined8 *)(param_1 + 0x70);
        FUN_140067aa0(&local_e8,0x65,&local_108,local_68,0);
        FUN_140067f60(lVar1,local_a8);
        uVar5 = FUN_140067a36(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
        uVar8 = (ulonglong)uVar5;
        FUN_1400017de(local_a8);
        FUN_14006803a(&local_e8);
        FUN_1400017de(local_68);
        FUN_1400017de(local_88);
        goto LAB_140066a9d;
      }
      if (iVar3 != 0xb) {
        FUN_14000169c(local_88,"object");
        FUN_140067c8c(param_1,local_68,0xb,local_88);
        local_f8 = *(undefined8 *)(param_1 + 0x78);
        local_108 = *(undefined8 *)(param_1 + 0x68);
        uStack_100 = *(undefined8 *)(param_1 + 0x70);
        FUN_140067aa0(&local_e8,0x65,&local_108,local_68,0);
        FUN_140067f60(lVar1,local_a8);
        uVar5 = FUN_140067a36(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
        uVar8 = (ulonglong)uVar5;
        FUN_1400017de(local_a8);
        FUN_14006803a(&local_e8);
        FUN_1400017de(local_68);
        FUN_1400017de(local_88);
        goto LAB_140066a9d;
      }
      cVar2 = FUN_140069fd2(param_2);
    }
    else {
      iVar3 = FUN_140065468(lVar1);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 == 0xd) goto LAB_14006699a;
      if (iVar3 != 10) {
        FUN_14000169c(local_88,"array");
        FUN_140067c8c(param_1,local_68,10,local_88);
        local_f8 = *(undefined8 *)(param_1 + 0x78);
        local_108 = *(undefined8 *)(param_1 + 0x68);
        uStack_100 = *(undefined8 *)(param_1 + 0x70);
        FUN_140067aa0(&local_e8,0x65,&local_108,local_68,0);
        FUN_140067f60(lVar1,local_a8);
        uVar5 = FUN_140067a36(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
        uVar8 = (ulonglong)uVar5;
        FUN_1400017de(local_a8);
        FUN_14006803a(&local_e8);
        FUN_1400017de(local_68);
        FUN_1400017de(local_88);
        goto LAB_140066a9d;
      }
      cVar2 = FUN_14006a4fe(param_2);
    }
    if (cVar2 == '\0') goto LAB_140066c5f;
    FUN_14006a8aa(local_128);
  } while( true );
code_r0x000140066a39:
  local_88[0] = 0;
  local_e8 = (undefined **)
             (((longlong)local_110 >> 0x3f & 0xe000000000000000U) +
             (local_110 >> 5) * 4 + local_128[0]);
  local_e0 = (ulonglong)((uint)local_110 & 0x1f);
  FUN_140069730(local_128,local_68,&local_e8,1,local_88);
  uVar4 = FUN_140065468(lVar1);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  goto code_r0x0001400666e4;
LAB_14006699a:
  uVar4 = FUN_140065468(lVar1);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  goto code_r0x0001400666e4;
}


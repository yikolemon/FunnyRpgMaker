/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140068258 */

ulonglong FUN_140068258(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
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
  undefined1 local_68 [32];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_14006966e(local_128);
  lVar1 = param_1 + 0x48;
code_r0x0001400682ae:
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
    local_e8 = (undefined **)CONCAT71(local_e8._1_7_,1);
    FUN_14006f6f4(param_2,&local_e8);
    break;
  case 2:
    local_e8 = (undefined **)((ulonglong)local_e8._1_7_ << 8);
    FUN_14006f6f4(param_2,&local_e8);
    break;
  case 3:
    local_e8 = (undefined **)0x0;
    FUN_14006f96e(param_2,&local_e8);
    break;
  case 4:
    FUN_14006fe5e(param_2,param_1 + 0x98);
    break;
  case 5:
    local_e8 = *(undefined ***)(param_1 + 200);
    FUN_1400700da(param_2,&local_e8);
    break;
  case 6:
    local_e8 = *(undefined ***)(param_1 + 0xc0);
    FUN_14006fbe4(param_2,&local_e8);
    break;
  case 7:
    if (0x7fefffffffffffff < ((ulonglong)*(undefined ***)(param_1 + 0xd0) & 0x7fffffffffffffff)) {
      local_108 = CONCAT71(local_108._1_7_,0x27);
      FUN_140067f60(lVar1,local_68);
      FUN_14006a7c9(local_88,"number overflow parsing \'",local_68,&local_108);
      FUN_14006a658(&local_e8,0x196,local_88,0);
      FUN_140067f60(lVar1,local_a8);
      uVar5 = FUN_14006f18c(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
      uVar9 = (ulonglong)uVar5;
      FUN_1400017de(local_a8);
      FUN_14006803a(&local_e8);
      FUN_1400017de(local_88);
      FUN_1400017de(local_68);
      goto LAB_140068620;
    }
    local_e8 = *(undefined ***)(param_1 + 0xd0);
    FUN_14006f47a(param_2,&local_e8);
    break;
  case 8:
    cVar2 = FUN_14006f04e(param_2,0xffffffffffffffff);
    if (cVar2 == '\0') {
LAB_140068aa2:
      uVar9 = 0;
      goto LAB_140068620;
    }
    iVar3 = FUN_140065468(lVar1);
    *(int *)(param_1 + 0x40) = iVar3;
    if (iVar3 == 10) {
      *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -8;
      break;
    }
    local_68[0] = 1;
    local_e8 = (undefined **)
               (((longlong)local_110 >> 0x3f & 0xe000000000000000U) +
               (local_110 >> 5) * 4 + local_128[0]);
    local_e0 = (ulonglong)((uint)local_110 & 0x1f);
    FUN_140069730(local_128,local_88,&local_e8,1,local_68);
    goto code_r0x0001400682ae;
  case 9:
    cVar2 = FUN_14006ef10(param_2,0xffffffffffffffff);
    if (cVar2 == '\0') goto LAB_140068aa2;
    iVar3 = FUN_140065468(lVar1);
    *(int *)(param_1 + 0x40) = iVar3;
    if (iVar3 == 0xb) {
      *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -8;
      break;
    }
    if (iVar3 == 4) {
      uVar7 = FUN_14006c912(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + -8) + 8),
                            param_1 + 0x98);
      *(undefined8 *)(param_2 + 0x20) = uVar7;
      iVar3 = FUN_140065468(lVar1);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 == 0xc) goto code_r0x0001400685bc;
      FUN_14000169c(local_68,"object separator");
      FUN_140067c8c(param_1,local_88,0xc,local_68);
      local_f8 = *(undefined8 *)(param_1 + 0x78);
      local_108 = *(undefined8 *)(param_1 + 0x68);
      uStack_100 = *(undefined8 *)(param_1 + 0x70);
      FUN_140067aa0(&local_e8,0x65,&local_108,local_88,0);
      FUN_140067f60(lVar1,local_a8);
      uVar5 = FUN_1400695b8(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
      uVar9 = (ulonglong)uVar5;
      FUN_1400017de(local_a8);
      FUN_14006803a(&local_e8);
      FUN_1400017de(local_88);
      FUN_1400017de(local_68);
    }
    else {
      FUN_14000169c(local_68,"object key");
      FUN_140067c8c(param_1,local_88,4,local_68);
      local_f8 = *(undefined8 *)(param_1 + 0x78);
      local_108 = *(undefined8 *)(param_1 + 0x68);
      uStack_100 = *(undefined8 *)(param_1 + 0x70);
      FUN_140067aa0(&local_e8,0x65,&local_108,local_88,0);
      FUN_140067f60(lVar1,local_a8);
      uVar5 = FUN_1400695b8(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
      uVar9 = (ulonglong)uVar5;
      FUN_1400017de(local_a8);
      FUN_14006803a(&local_e8);
      FUN_1400017de(local_88);
      FUN_1400017de(local_68);
    }
    goto LAB_140068620;
  default:
    FUN_14000169c(local_68,"value");
    FUN_140067c8c(param_1,local_88,0x10,local_68);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_140067aa0(&local_e8,0x65,&local_108,local_88,0);
    FUN_140067f60(lVar1,local_a8);
    uVar5 = FUN_1400695b8(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
    uVar9 = (ulonglong)uVar5;
    FUN_1400017de(local_a8);
    local_e8 = nlohmann::json_abi_v3_11_2::detail::exception::vftable;
    local_c8 = std::exception::vftable;
    FUN_140107df0();
    local_e8 = std::exception::vftable;
    FUN_140107df0();
    FUN_1400017de(local_88);
    FUN_1400017de(local_68);
LAB_140068620:
    FUN_1400696ea(local_128);
    return uVar9 & 0xffffffff;
  case 0xe:
    FUN_14000169c(local_68,"value");
    FUN_140067c8c(param_1,local_88,0,local_68);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_140067aa0(&local_e8,0x65,&local_108,local_88,0);
    FUN_140067f60(lVar1,local_a8);
    uVar5 = FUN_1400695b8(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
    uVar9 = (ulonglong)uVar5;
    FUN_1400017de(local_a8);
    local_e8 = nlohmann::json_abi_v3_11_2::detail::exception::vftable;
    local_c8 = std::exception::vftable;
    FUN_140107df0();
    local_e8 = std::exception::vftable;
    FUN_140107df0();
    FUN_1400017de(local_88);
    FUN_1400017de(local_68);
    goto LAB_140068620;
  }
  do {
    if (local_110 == 0) {
      uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto LAB_140068620;
    }
    uVar5 = (uint)local_110 & 0x1f;
    uVar9 = (ulonglong)uVar5;
    uVar5 = 1 << ((char)uVar5 - 1U & 0x1f);
    if (uVar9 == 0) {
      uVar5 = 0x80000000;
    }
    lVar10 = (local_110 >> 5) * 4 + local_128[0];
    uVar6 = (longlong)local_110 >> 0x3f & 0xe000000000000000;
    puVar8 = (uint *)(lVar10 + uVar6 + (uVar9 - 1 >> 5) * 4);
    if (uVar9 == 0) {
      puVar8 = (uint *)((uVar6 - 4) + lVar10);
    }
    if ((*puVar8 & uVar5) == 0) {
      iVar3 = FUN_140065468(lVar1);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 == 0xd) goto code_r0x0001400684b9;
      if (iVar3 != 0xb) {
        FUN_14000169c(local_68,"object");
        FUN_140067c8c(param_1,local_88,0xb,local_68);
        local_f8 = *(undefined8 *)(param_1 + 0x78);
        local_108 = *(undefined8 *)(param_1 + 0x68);
        uStack_100 = *(undefined8 *)(param_1 + 0x70);
        FUN_140067aa0(&local_e8,0x65,&local_108,local_88,0);
        FUN_140067f60(lVar1,local_a8);
        uVar5 = FUN_1400695b8(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
        uVar9 = (ulonglong)uVar5;
        FUN_1400017de(local_a8);
        FUN_14006803a(&local_e8);
        FUN_1400017de(local_88);
        FUN_1400017de(local_68);
        goto LAB_140068620;
      }
    }
    else {
      iVar3 = FUN_140065468(lVar1);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 == 0xd) {
        uVar4 = FUN_140065468(lVar1);
        *(undefined4 *)(param_1 + 0x40) = uVar4;
        goto code_r0x0001400682ae;
      }
      if (iVar3 != 10) {
        FUN_14000169c(local_68,"array");
        FUN_140067c8c(param_1,local_88,10,local_68);
        local_f8 = *(undefined8 *)(param_1 + 0x78);
        local_108 = *(undefined8 *)(param_1 + 0x68);
        uStack_100 = *(undefined8 *)(param_1 + 0x70);
        FUN_140067aa0(&local_e8,0x65,&local_108,local_88,0);
        FUN_140067f60(lVar1,local_a8);
        uVar5 = FUN_1400695b8(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
        uVar9 = (ulonglong)uVar5;
        FUN_1400017de(local_a8);
        FUN_14006803a(&local_e8);
        FUN_1400017de(local_88);
        FUN_1400017de(local_68);
        goto LAB_140068620;
      }
    }
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -8;
    FUN_14006a8aa(local_128);
  } while( true );
code_r0x0001400685bc:
  local_68[0] = 0;
  local_e8 = (undefined **)
             (((longlong)local_110 >> 0x3f & 0xe000000000000000U) +
             (local_110 >> 5) * 4 + local_128[0]);
  local_e0 = (ulonglong)((uint)local_110 & 0x1f);
  FUN_140069730(local_128,local_88,&local_e8,1,local_68);
  uVar4 = FUN_140065468(lVar1);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  goto code_r0x0001400682ae;
code_r0x0001400684b9:
  iVar3 = FUN_140065468(lVar1);
  *(int *)(param_1 + 0x40) = iVar3;
  if (iVar3 != 4) {
    FUN_14000169c(local_68,"object key");
    FUN_140067c8c(param_1,local_88,4,local_68);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_140067aa0(&local_e8,0x65,&local_108,local_88,0);
    FUN_140067f60(lVar1,local_a8);
    uVar5 = FUN_1400695b8(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
    uVar9 = (ulonglong)uVar5;
    FUN_1400017de(local_a8);
    FUN_14006803a(&local_e8);
    FUN_1400017de(local_88);
    FUN_1400017de(local_68);
    goto LAB_140068620;
  }
  uVar7 = FUN_14006c912(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + -8) + 8),
                        param_1 + 0x98);
  *(undefined8 *)(param_2 + 0x20) = uVar7;
  iVar3 = FUN_140065468(lVar1);
  *(int *)(param_1 + 0x40) = iVar3;
  if (iVar3 != 0xc) {
    FUN_14000169c(local_68,"object separator");
    FUN_140067c8c(param_1,local_88,0xc,local_68);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_140067aa0(&local_e8,0x65,&local_108,local_88,0);
    FUN_140067f60(lVar1,local_a8);
    uVar5 = FUN_1400695b8(param_2,*(undefined8 *)(param_1 + 0x68),local_a8,&local_e8);
    uVar9 = (ulonglong)uVar5;
    FUN_1400017de(local_a8);
    FUN_14006803a(&local_e8);
    FUN_1400017de(local_88);
    FUN_1400017de(local_68);
    goto LAB_140068620;
  }
  uVar4 = FUN_140065468(lVar1);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  goto code_r0x0001400682ae;
}


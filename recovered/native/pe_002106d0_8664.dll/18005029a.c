/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005029a */

ulonglong FUN_18005029a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_128 [3];
  ulonglong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined **local_e8;
  ulonglong local_e0;
  undefined **local_c8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_18001cad2(local_128);
  lVar1 = param_1 + 0x48;
code_r0x0001800502f0:
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
    local_e8 = (undefined **)CONCAT71(local_e8._1_7_,1);
    FUN_18005657e(param_2,&local_e8);
    break;
  case 2:
    local_e8 = (undefined **)((ulonglong)local_e8._1_7_ << 8);
    FUN_18005657e(param_2,&local_e8);
    break;
  case 3:
    local_e8 = (undefined **)0x0;
    FUN_1800567f8(param_2,&local_e8);
    break;
  case 4:
    if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
      lVar11 = param_1 + 0x98;
      if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
        lVar11 = *(longlong *)(param_1 + 0x98);
      }
      *(undefined1 *)(lVar11 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
    }
    FUN_180056ce8(param_2,param_1 + 0x98);
    break;
  case 5:
    local_e8 = *(undefined ***)(param_1 + 200);
    FUN_180056f64(param_2,&local_e8);
    break;
  case 6:
    local_e8 = *(undefined ***)(param_1 + 0xc0);
    FUN_180056a6e(param_2,&local_e8);
    break;
  case 7:
    ppuVar3 = *(undefined ***)(param_1 + 0xd0);
    if (0x7fefffffffffffff < ((ulonglong)ppuVar3 & 0x7fffffffffffffff)) {
      local_108 = CONCAT71(local_108._1_7_,0x27);
      FUN_18004ffea(lVar1,local_68);
      FUN_1800524ab(local_88,"number overflow parsing \'",local_68,&local_108);
      FUN_18005233a(&local_e8,0x196,local_88,0);
      FUN_18004ffea(lVar1,&local_a8);
      uVar7 = FUN_180056016(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
      uVar10 = (ulonglong)uVar7;
      FUN_180001ef2(&local_a8);
      FUN_180059918(&local_e8);
      FUN_180001ef2(local_88);
      FUN_180001ef2(local_68);
      goto LAB_18005076b;
    }
    if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
      lVar11 = param_1 + 0x98;
      if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
        lVar11 = *(longlong *)(param_1 + 0x98);
      }
      *(undefined1 *)(lVar11 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
    }
    local_e8 = ppuVar3;
    FUN_180056304(param_2,&local_e8);
    break;
  case 8:
    cVar4 = FUN_180055ef2(param_2,0xffffffffffffffff);
    if (cVar4 == '\0') {
LAB_180050b6b:
      uVar10 = 0;
      goto LAB_18005076b;
    }
    iVar5 = FUN_18004d054(lVar1);
    *(int *)(param_1 + 0x40) = iVar5;
    if (iVar5 == 10) {
      *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -8;
      break;
    }
    local_68[0] = 1;
    local_e8 = (undefined **)
               (((longlong)local_110 >> 0x3f & 0xe000000000000000U) +
               (local_110 >> 5) * 4 + local_128[0]);
    local_e0 = (ulonglong)((uint)local_110 & 0x1f);
    FUN_18001f704(local_128,local_88,&local_e8,1,local_68);
    goto code_r0x0001800502f0;
  case 9:
    cVar4 = FUN_180055dce(param_2,0xffffffffffffffff);
    if (cVar4 == '\0') goto LAB_180050b6b;
    iVar5 = FUN_18004d054(lVar1);
    *(int *)(param_1 + 0x40) = iVar5;
    if (iVar5 == 0xb) {
      *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -8;
      break;
    }
    if (iVar5 == 4) {
      if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
        lVar11 = param_1 + 0x98;
        if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
          lVar11 = *(longlong *)(param_1 + 0x98);
        }
        *(undefined1 *)(lVar11 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
      }
      FUN_180053b36(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + -8) + 8),&local_e8
                    ,param_1 + 0x98);
      *(undefined ***)(param_2 + 0x20) = local_e8 + 8;
      iVar5 = FUN_18004d054(lVar1);
      *(int *)(param_1 + 0x40) = iVar5;
      if (iVar5 == 0xc) goto code_r0x0001800506b2;
      FUN_180001e92(local_68,"object separator");
      FUN_18004fd16(param_1,local_88,0xc,local_68);
      local_f8 = *(undefined8 *)(param_1 + 0x78);
      local_108 = *(undefined8 *)(param_1 + 0x68);
      uStack_100 = *(undefined8 *)(param_1 + 0x70);
      FUN_18004fb2a(&local_e8,0x65,&local_108,local_88,0);
      FUN_18004ffea(lVar1,&local_a8);
      uVar7 = FUN_180051a78(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
      uVar10 = (ulonglong)uVar7;
      FUN_180001ef2(&local_a8);
      FUN_180059918(&local_e8);
      FUN_180001ef2(local_88);
      FUN_180001ef2(local_68);
    }
    else {
      FUN_180001e92(local_68,"object key");
      FUN_18004fd16(param_1,local_88,4,local_68);
      local_f8 = *(undefined8 *)(param_1 + 0x78);
      local_108 = *(undefined8 *)(param_1 + 0x68);
      uStack_100 = *(undefined8 *)(param_1 + 0x70);
      FUN_18004fb2a(&local_e8,0x65,&local_108,local_88,0);
      FUN_18004ffea(lVar1,&local_a8);
      uVar7 = FUN_180051a78(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
      uVar10 = (ulonglong)uVar7;
      FUN_180001ef2(&local_a8);
      FUN_180059918(&local_e8);
      FUN_180001ef2(local_88);
      FUN_180001ef2(local_68);
    }
    goto LAB_18005076b;
  default:
    FUN_180001e92(local_68,"value");
    FUN_18004fd16(param_1,local_88,0x10,local_68);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_18004fb2a(&local_e8,0x65,&local_108,local_88,0);
    FUN_18004ffea(lVar1,&local_a8);
    uVar7 = FUN_180051a78(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
    uVar10 = (ulonglong)uVar7;
    FUN_180001ef2(&local_a8);
    local_e8 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
    local_c8 = std::exception::vftable;
    FUN_18026ea90();
    local_e8 = std::exception::vftable;
    FUN_18026ea90();
    FUN_180001ef2(local_88);
    FUN_180001ef2(local_68);
LAB_18005076b:
    FUN_18001cd6c(local_128);
    return uVar10 & 0xffffffff;
  case 0xe:
    FUN_180001e92(local_68,"value");
    FUN_18004fd16(param_1,local_88,0,local_68);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_18004fb2a(&local_e8,0x65,&local_108,local_88,0);
    FUN_18004ffea(lVar1,&local_a8);
    uVar7 = FUN_180051a78(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
    uVar10 = (ulonglong)uVar7;
    FUN_180001ef2(&local_a8);
    local_e8 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
    local_c8 = std::exception::vftable;
    FUN_18026ea90();
    local_e8 = std::exception::vftable;
    FUN_18026ea90();
    FUN_180001ef2(local_88);
    FUN_180001ef2(local_68);
    goto LAB_18005076b;
  case 0xf:
    puVar2 = (undefined8 *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 1) {
      FUN_180001e92(local_88,
                    "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                   );
      local_98 = *(undefined8 *)(param_1 + 0x78);
      local_a8 = *puVar2;
      uStack_a0 = *(undefined8 *)(param_1 + 0x70);
      FUN_18004fb2a(&local_e8,0x65,&local_a8,local_88,0);
      FUN_18004ffea(lVar1,local_68);
      uVar7 = FUN_180051a78(param_2,*puVar2,local_68,&local_e8);
      uVar10 = (ulonglong)uVar7;
      FUN_180001ef2(local_68);
      FUN_180059918(&local_e8);
      FUN_180001ef2(local_88);
    }
    else {
      FUN_180001e92(local_68,"value");
      FUN_18004fd16(param_1,local_88,0x10,local_68);
      local_f8 = *(undefined8 *)(param_1 + 0x78);
      local_108 = *puVar2;
      uStack_100 = *(undefined8 *)(param_1 + 0x70);
      FUN_18004fb2a(&local_e8,0x65,&local_108,local_88,0);
      FUN_18004ffea(lVar1,&local_a8);
      uVar7 = FUN_180051a78(param_2,*puVar2,&local_a8,&local_e8);
      uVar10 = (ulonglong)uVar7;
      FUN_180001ef2(&local_a8);
      local_e8 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
      local_c8 = std::exception::vftable;
      FUN_18026ea90();
      local_e8 = std::exception::vftable;
      FUN_18026ea90();
      FUN_180001ef2(local_88);
      FUN_180001ef2(local_68);
    }
    goto LAB_18005076b;
  }
  do {
    if (local_110 == 0) {
      uVar10 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto LAB_18005076b;
    }
    uVar7 = (uint)local_110 & 0x1f;
    uVar10 = (ulonglong)uVar7;
    uVar7 = 1 << ((char)uVar7 - 1U & 0x1f);
    if (uVar10 == 0) {
      uVar7 = 0x80000000;
    }
    lVar11 = (local_110 >> 5) * 4 + local_128[0];
    uVar8 = (longlong)local_110 >> 0x3f & 0xe000000000000000;
    puVar9 = (uint *)(lVar11 + uVar8 + (uVar10 - 1 >> 5) * 4);
    if (uVar10 == 0) {
      puVar9 = (uint *)((uVar8 - 4) + lVar11);
    }
    if ((*puVar9 & uVar7) == 0) {
      iVar5 = FUN_18004d054(lVar1);
      *(int *)(param_1 + 0x40) = iVar5;
      if (iVar5 == 0xd) {
        iVar5 = FUN_18004d054(lVar1);
        *(int *)(param_1 + 0x40) = iVar5;
        if ((iVar5 != 0xb) || (*(char *)(param_1 + 0xe9) == '\0')) goto LAB_1800505a1;
      }
      else if (iVar5 != 0xb) {
        FUN_180001e92(local_68,"object");
        FUN_18004fd16(param_1,local_88,0xb,local_68);
        local_f8 = *(undefined8 *)(param_1 + 0x78);
        local_108 = *(undefined8 *)(param_1 + 0x68);
        uStack_100 = *(undefined8 *)(param_1 + 0x70);
        FUN_18004fb2a(&local_e8,0x65,&local_108,local_88,0);
        FUN_18004ffea(lVar1,&local_a8);
        uVar7 = FUN_180051a78(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
        uVar10 = (ulonglong)uVar7;
        FUN_180001ef2(&local_a8);
        FUN_180059918(&local_e8);
        FUN_180001ef2(local_88);
        FUN_180001ef2(local_68);
        goto LAB_18005076b;
      }
    }
    else {
      iVar5 = FUN_18004d054(lVar1);
      *(int *)(param_1 + 0x40) = iVar5;
      if (iVar5 == 0xd) {
        iVar5 = FUN_18004d054(lVar1);
        *(int *)(param_1 + 0x40) = iVar5;
        if ((iVar5 != 10) || (*(char *)(param_1 + 0xe9) == '\0')) goto code_r0x0001800502f0;
      }
      else if (iVar5 != 10) {
        FUN_180001e92(local_68,"array");
        FUN_18004fd16(param_1,local_88,10,local_68);
        local_f8 = *(undefined8 *)(param_1 + 0x78);
        local_108 = *(undefined8 *)(param_1 + 0x68);
        uStack_100 = *(undefined8 *)(param_1 + 0x70);
        FUN_18004fb2a(&local_e8,0x65,&local_108,local_88,0);
        FUN_18004ffea(lVar1,&local_a8);
        uVar7 = FUN_180051a78(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
        uVar10 = (ulonglong)uVar7;
        FUN_180001ef2(&local_a8);
        FUN_180059918(&local_e8);
        FUN_180001ef2(local_88);
        FUN_180001ef2(local_68);
        goto LAB_18005076b;
      }
    }
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -8;
    FUN_18005258c(local_128);
  } while( true );
code_r0x0001800506b2:
  local_68[0] = 0;
  local_e8 = (undefined **)
             (((longlong)local_110 >> 0x3f & 0xe000000000000000U) +
             (local_110 >> 5) * 4 + local_128[0]);
  local_e0 = (ulonglong)((uint)local_110 & 0x1f);
  FUN_18001f704(local_128,local_88,&local_e8,1,local_68);
  uVar6 = FUN_18004d054(lVar1);
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  goto code_r0x0001800502f0;
LAB_1800505a1:
  if (iVar5 != 4) {
    FUN_180001e92(local_68,"object key");
    FUN_18004fd16(param_1,local_88,4,local_68);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_18004fb2a(&local_e8,0x65,&local_108,local_88,0);
    FUN_18004ffea(lVar1,&local_a8);
    uVar7 = FUN_180051a78(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
    uVar10 = (ulonglong)uVar7;
    FUN_180001ef2(&local_a8);
    FUN_180059918(&local_e8);
    FUN_180001ef2(local_88);
    FUN_180001ef2(local_68);
    goto LAB_18005076b;
  }
  if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
    lVar11 = param_1 + 0x98;
    if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
      lVar11 = *(longlong *)(param_1 + 0x98);
    }
    *(undefined1 *)(lVar11 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
  }
  FUN_180053b36(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + -8) + 8),&local_e8);
  *(undefined ***)(param_2 + 0x20) = local_e8 + 8;
  iVar5 = FUN_18004d054(lVar1);
  *(int *)(param_1 + 0x40) = iVar5;
  if (iVar5 != 0xc) {
    FUN_180001e92(local_68,"object separator");
    FUN_18004fd16(param_1,local_88,0xc,local_68);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_18004fb2a(&local_e8,0x65,&local_108,local_88,0);
    FUN_18004ffea(lVar1,&local_a8);
    uVar7 = FUN_180051a78(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
    uVar10 = (ulonglong)uVar7;
    FUN_180001ef2(&local_a8);
    FUN_180059918(&local_e8);
    FUN_180001ef2(local_88);
    FUN_180001ef2(local_68);
    goto LAB_18005076b;
  }
  uVar6 = FUN_18004d054(lVar1);
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  goto code_r0x0001800502f0;
}


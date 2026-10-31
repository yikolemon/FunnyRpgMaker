/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004e2ba */

ulonglong FUN_18004e2ba(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
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
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_88 [32];
  ulonglong local_68 [4];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_18001cad2(local_128);
  lVar1 = param_1 + 0x48;
code_r0x00018004e310:
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
    local_68[0] = CONCAT71(local_68[0]._1_7_,1);
    FUN_180054400(param_2,&local_e8,local_68,0);
    break;
  case 2:
    local_68[0] = (ulonglong)local_68[0]._1_7_ << 8;
    FUN_180054400(param_2,&local_e8,local_68,0);
    break;
  case 3:
    local_68[0] = 0;
    FUN_180054778(param_2,&local_e8,local_68,0);
    break;
  case 4:
    if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
      lVar10 = param_1 + 0x98;
      if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
        lVar10 = *(longlong *)(param_1 + 0x98);
      }
      *(undefined1 *)(lVar10 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
    }
    FUN_180054df4(param_2,&local_e8,param_1 + 0x98,0);
    break;
  case 5:
    local_68[0] = *(ulonglong *)(param_1 + 200);
    FUN_1800550f8(param_2,&local_e8,local_68,0);
    break;
  case 6:
    local_68[0] = *(ulonglong *)(param_1 + 0xc0);
    FUN_180054a7c(param_2,&local_e8,local_68,0);
    break;
  case 7:
    uVar9 = *(ulonglong *)(param_1 + 0xd0);
    if (0x7fefffffffffffff < (uVar9 & 0x7fffffffffffffff)) {
      local_108 = CONCAT71(local_108._1_7_,0x27);
      FUN_18004ffea(lVar1,local_88);
      FUN_1800524ab(local_68,"number overflow parsing \'",local_88,&local_108);
      FUN_18005233a(&local_e8,0x196,local_68,0);
      FUN_18004ffea(lVar1,&local_a8);
      uVar6 = FUN_1800522d0(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
      uVar9 = (ulonglong)uVar6;
      FUN_180001ef2(&local_a8);
      FUN_180059918(&local_e8);
      FUN_180001ef2(local_68);
      FUN_180001ef2(local_88);
      goto LAB_18004e7b7;
    }
    if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
      lVar10 = param_1 + 0x98;
      if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
        lVar10 = *(longlong *)(param_1 + 0x98);
      }
      *(undefined1 *)(lVar10 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
    }
    local_68[0] = uVar9;
    FUN_180054076(param_2,&local_e8,local_68,0);
    break;
  case 8:
    cVar3 = FUN_180052028(param_2,0xffffffffffffffff);
    if (cVar3 != '\0') {
      iVar4 = FUN_18004d054(lVar1);
      *(int *)(param_1 + 0x40) = iVar4;
      if (iVar4 != 10) {
        local_88[0] = 1;
        local_e8 = (undefined **)
                   (((longlong)local_110 >> 0x3f & 0xe000000000000000U) +
                   (local_110 >> 5) * 4 + local_128[0]);
        local_e0 = (ulonglong)((uint)local_110 & 0x1f);
        FUN_18001f704(local_128,local_68,&local_e8,1,local_88);
        goto code_r0x00018004e310;
      }
      cVar3 = FUN_1800521e0(param_2);
LAB_18004e508:
      if (cVar3 != '\0') break;
    }
LAB_18004e7d6:
    uVar9 = 0;
    goto LAB_18004e7b7;
  case 9:
    cVar3 = FUN_180051b2e(param_2,0xffffffffffffffff);
    if (cVar3 == '\0') goto LAB_18004e7d6;
    iVar4 = FUN_18004d054(lVar1);
    *(int *)(param_1 + 0x40) = iVar4;
    if (iVar4 == 0xb) {
      cVar3 = FUN_180051ce6(param_2);
      goto LAB_18004e508;
    }
    if (iVar4 == 4) {
      if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
        lVar10 = param_1 + 0x98;
        if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
          lVar10 = *(longlong *)(param_1 + 0x98);
        }
        *(undefined1 *)(lVar10 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
      }
      cVar3 = FUN_180051ed2(param_2,param_1 + 0x98);
      if (cVar3 == '\0') goto LAB_18004e7d6;
      iVar4 = FUN_18004d054(lVar1);
      *(int *)(param_1 + 0x40) = iVar4;
      if (iVar4 == 0xc) goto code_r0x00018004e6fe;
      FUN_180001e92(local_88,"object separator");
      FUN_18004fd16(param_1,local_68,0xc,local_88);
      local_f8 = *(undefined8 *)(param_1 + 0x78);
      local_108 = *(undefined8 *)(param_1 + 0x68);
      uStack_100 = *(undefined8 *)(param_1 + 0x70);
      FUN_18004fb2a(&local_e8,0x65,&local_108,local_68,0);
      FUN_18004ffea(lVar1,&local_a8);
      uVar6 = FUN_18004fac0(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
      uVar9 = (ulonglong)uVar6;
      FUN_180001ef2(&local_a8);
      FUN_180059918(&local_e8);
      FUN_180001ef2(local_68);
      FUN_180001ef2(local_88);
    }
    else {
      FUN_180001e92(local_88,"object key");
      FUN_18004fd16(param_1,local_68,4,local_88);
      local_f8 = *(undefined8 *)(param_1 + 0x78);
      local_108 = *(undefined8 *)(param_1 + 0x68);
      uStack_100 = *(undefined8 *)(param_1 + 0x70);
      FUN_18004fb2a(&local_e8,0x65,&local_108,local_68,0);
      FUN_18004ffea(lVar1,&local_a8);
      uVar6 = FUN_18004fac0(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
      uVar9 = (ulonglong)uVar6;
      FUN_180001ef2(&local_a8);
      FUN_180059918(&local_e8);
      FUN_180001ef2(local_68);
      FUN_180001ef2(local_88);
    }
    goto LAB_18004e7b7;
  default:
    FUN_180001e92(local_88,"value");
    FUN_18004fd16(param_1,local_68,0x10,local_88);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_18004fb2a(&local_e8,0x65,&local_108,local_68,0);
    FUN_18004ffea(lVar1,&local_a8);
    uVar6 = FUN_18004fac0(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
    uVar9 = (ulonglong)uVar6;
    FUN_180001ef2(&local_a8);
    local_e8 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
    local_c8 = std::exception::vftable;
    FUN_18026ea90();
    local_e8 = std::exception::vftable;
    FUN_18026ea90();
    FUN_180001ef2(local_68);
    FUN_180001ef2(local_88);
LAB_18004e7b7:
    FUN_18001cd6c(local_128);
    return uVar9 & 0xffffffff;
  case 0xe:
    FUN_180001e92(local_88,"value");
    FUN_18004fd16(param_1,local_68,0,local_88);
    local_f8 = *(undefined8 *)(param_1 + 0x78);
    local_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_100 = *(undefined8 *)(param_1 + 0x70);
    FUN_18004fb2a(&local_e8,0x65,&local_108,local_68,0);
    FUN_18004ffea(lVar1,&local_a8);
    uVar6 = FUN_18004fac0(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
    uVar9 = (ulonglong)uVar6;
    FUN_180001ef2(&local_a8);
    local_e8 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
    local_c8 = std::exception::vftable;
    FUN_18026ea90();
    local_e8 = std::exception::vftable;
    FUN_18026ea90();
    FUN_180001ef2(local_68);
    FUN_180001ef2(local_88);
    goto LAB_18004e7b7;
  case 0xf:
    puVar2 = (undefined8 *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 1) {
      FUN_180001e92(local_68,
                    "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                   );
      local_98 = *(undefined8 *)(param_1 + 0x78);
      local_a8 = *puVar2;
      uStack_a0 = *(undefined8 *)(param_1 + 0x70);
      FUN_18004fb2a(&local_e8,0x65,&local_a8,local_68,0);
      FUN_18004ffea(lVar1,local_88);
      uVar6 = FUN_18004fac0(param_2,*puVar2,local_88,&local_e8);
      uVar9 = (ulonglong)uVar6;
      FUN_180001ef2(local_88);
      FUN_180059918(&local_e8);
      FUN_180001ef2(local_68);
    }
    else {
      FUN_180001e92(local_88,"value");
      FUN_18004fd16(param_1,local_68,0x10,local_88);
      local_f8 = *(undefined8 *)(param_1 + 0x78);
      local_108 = *puVar2;
      uStack_100 = *(undefined8 *)(param_1 + 0x70);
      FUN_18004fb2a(&local_e8,0x65,&local_108,local_68,0);
      FUN_18004ffea(lVar1,&local_a8);
      uVar6 = FUN_18004fac0(param_2,*puVar2,&local_a8,&local_e8);
      uVar9 = (ulonglong)uVar6;
      FUN_180001ef2(&local_a8);
      local_e8 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
      local_c8 = std::exception::vftable;
      FUN_18026ea90();
      local_e8 = std::exception::vftable;
      FUN_18026ea90();
      FUN_180001ef2(local_68);
      FUN_180001ef2(local_88);
    }
    goto LAB_18004e7b7;
  }
  do {
    if (local_110 == 0) {
      uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto LAB_18004e7b7;
    }
    uVar6 = (uint)local_110 & 0x1f;
    uVar9 = (ulonglong)uVar6;
    uVar6 = 1 << ((char)uVar6 - 1U & 0x1f);
    if (uVar9 == 0) {
      uVar6 = 0x80000000;
    }
    lVar10 = (local_110 >> 5) * 4 + local_128[0];
    uVar7 = (longlong)local_110 >> 0x3f & 0xe000000000000000;
    puVar8 = (uint *)(lVar10 + uVar7 + (uVar9 - 1 >> 5) * 4);
    if (uVar9 == 0) {
      puVar8 = (uint *)((uVar7 - 4) + lVar10);
    }
    if ((*puVar8 & uVar6) == 0) {
      iVar4 = FUN_18004d054(lVar1);
      *(int *)(param_1 + 0x40) = iVar4;
      if (iVar4 == 0xd) {
        iVar4 = FUN_18004d054(lVar1);
        *(int *)(param_1 + 0x40) = iVar4;
        if ((iVar4 != 0xb) || (*(char *)(param_1 + 0xe9) == '\0')) {
          if (iVar4 != 4) {
            FUN_180001e92(local_88,"object key");
            FUN_18004fd16(param_1,local_68,4,local_88);
            local_f8 = *(undefined8 *)(param_1 + 0x78);
            local_108 = *(undefined8 *)(param_1 + 0x68);
            uStack_100 = *(undefined8 *)(param_1 + 0x70);
            FUN_18004fb2a(&local_e8,0x65,&local_108,local_68,0);
            FUN_18004ffea(lVar1,&local_a8);
            uVar6 = FUN_18004fac0(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
            uVar9 = (ulonglong)uVar6;
            FUN_180001ef2(&local_a8);
            FUN_180059918(&local_e8);
            FUN_180001ef2(local_68);
            FUN_180001ef2(local_88);
            goto LAB_18004e7b7;
          }
          if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
            lVar10 = param_1 + 0x98;
            if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
              lVar10 = *(longlong *)(param_1 + 0x98);
            }
            *(undefined1 *)(lVar10 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
          }
          cVar3 = FUN_180051ed2(param_2,param_1 + 0x98);
          if (cVar3 == '\0') goto LAB_18004e7d6;
          iVar4 = FUN_18004d054(lVar1);
          *(int *)(param_1 + 0x40) = iVar4;
          if (iVar4 != 0xc) {
            FUN_180001e92(local_88,"object separator");
            FUN_18004fd16(param_1,local_68,0xc,local_88);
            local_f8 = *(undefined8 *)(param_1 + 0x78);
            local_108 = *(undefined8 *)(param_1 + 0x68);
            uStack_100 = *(undefined8 *)(param_1 + 0x70);
            FUN_18004fb2a(&local_e8,0x65,&local_108,local_68,0);
            FUN_18004ffea(lVar1,&local_a8);
            uVar6 = FUN_18004fac0(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
            uVar9 = (ulonglong)uVar6;
            FUN_180001ef2(&local_a8);
            FUN_180059918(&local_e8);
            FUN_180001ef2(local_68);
            FUN_180001ef2(local_88);
            goto LAB_18004e7b7;
          }
          uVar5 = FUN_18004d054(lVar1);
          *(undefined4 *)(param_1 + 0x40) = uVar5;
          goto code_r0x00018004e310;
        }
      }
      else if (iVar4 != 0xb) {
        FUN_180001e92(local_88,"object");
        FUN_18004fd16(param_1,local_68,0xb,local_88);
        local_f8 = *(undefined8 *)(param_1 + 0x78);
        local_108 = *(undefined8 *)(param_1 + 0x68);
        uStack_100 = *(undefined8 *)(param_1 + 0x70);
        FUN_18004fb2a(&local_e8,0x65,&local_108,local_68,0);
        FUN_18004ffea(lVar1,&local_a8);
        uVar6 = FUN_18004fac0(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
        uVar9 = (ulonglong)uVar6;
        FUN_180001ef2(&local_a8);
        FUN_180059918(&local_e8);
        FUN_180001ef2(local_68);
        FUN_180001ef2(local_88);
        goto LAB_18004e7b7;
      }
      cVar3 = FUN_180051ce6(param_2);
    }
    else {
      iVar4 = FUN_18004d054(lVar1);
      *(int *)(param_1 + 0x40) = iVar4;
      if (iVar4 == 0xd) {
        iVar4 = FUN_18004d054(lVar1);
        *(int *)(param_1 + 0x40) = iVar4;
        if ((iVar4 != 10) || (*(char *)(param_1 + 0xe9) == '\0')) goto code_r0x00018004e310;
      }
      else if (iVar4 != 10) {
        FUN_180001e92(local_88,"array");
        FUN_18004fd16(param_1,local_68,10,local_88);
        local_f8 = *(undefined8 *)(param_1 + 0x78);
        local_108 = *(undefined8 *)(param_1 + 0x68);
        uStack_100 = *(undefined8 *)(param_1 + 0x70);
        FUN_18004fb2a(&local_e8,0x65,&local_108,local_68,0);
        FUN_18004ffea(lVar1,&local_a8);
        uVar6 = FUN_18004fac0(param_2,*(undefined8 *)(param_1 + 0x68),&local_a8,&local_e8);
        uVar9 = (ulonglong)uVar6;
        FUN_180001ef2(&local_a8);
        FUN_180059918(&local_e8);
        FUN_180001ef2(local_68);
        FUN_180001ef2(local_88);
        goto LAB_18004e7b7;
      }
      cVar3 = FUN_1800521e0(param_2);
    }
    if (cVar3 == '\0') goto LAB_18004e7d6;
    FUN_18005258c(local_128);
  } while( true );
code_r0x00018004e6fe:
  local_88[0] = 0;
  local_e8 = (undefined **)
             (((longlong)local_110 >> 0x3f & 0xe000000000000000U) +
             (local_110 >> 5) * 4 + local_128[0]);
  local_e0 = (ulonglong)((uint)local_110 & 0x1f);
  FUN_18001f704(local_128,local_68,&local_e8,1,local_88);
  uVar5 = FUN_18004d054(lVar1);
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  goto code_r0x00018004e310;
}


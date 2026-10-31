/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10084940 */

undefined4 FUN_10084940(int param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_c8 [4];
  int local_c4;
  int local_c0;
  undefined8 *local_bc;
  undefined8 local_b8;
  undefined **local_a8;
  undefined1 local_a4 [12];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined4 local_48;
  int local_40;
  uint local_34;
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_c8;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c3200;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_1001cd06();
  local_18 = 6;
  local_bc = (undefined8 *)(local_c4 + 0x5c);
  local_c0 = local_c4 + 0x30;
code_r0x100849a2:
  switch(*(undefined4 *)(local_c4 + 0x28)) {
  case 1:
    local_b8 = CONCAT71(local_b8._1_7_,1);
    FUN_10089a7a(&local_b8);
    break;
  case 2:
    local_b8 = (ulonglong)local_b8._1_7_ << 8;
    FUN_10089a7a(&local_b8);
    break;
  case 3:
    local_b8 = local_b8 & 0xffffffff00000000;
    FUN_10089d12(&local_b8);
    break;
  case 4:
    if ((*(int *)(local_c4 + 0x90) != 0x2e) && (*(int *)(local_c4 + 0x94) != -1)) {
      puVar7 = local_bc;
      if (0xf < *(uint *)(local_c4 + 0x70)) {
        puVar7 = *(undefined8 **)(local_c4 + 0x5c);
      }
      *(undefined1 *)((int)puVar7 + *(int *)(local_c4 + 0x94)) = 0x2e;
    }
    FUN_1008a23e(local_bc);
    break;
  case 5:
    local_b8 = *(ulonglong *)(local_c4 + 0x80);
    FUN_1008a4e0(&local_b8);
    break;
  case 6:
    local_b8 = *(ulonglong *)(local_c4 + 0x78);
    FUN_10089fa6(&local_b8);
    break;
  case 7:
    uVar1 = *(ulonglong *)(local_c4 + 0x88);
    local_30._4_4_ = (uint)(uVar1 >> 0x20);
    local_30 = uVar1;
    if (0x7fefffff < (local_30._4_4_ & 0x7fffffff)) {
      local_50 = CONCAT71(local_50._1_7_,0x27);
      FUN_1004edf4(local_80);
      local_18 = 7;
      FUN_10050f4a(local_98,"number overflow parsing \'",local_80,&local_50);
      local_18 = 8;
      FUN_10050e0e(&local_b8,0x196,local_98,0);
      local_18 = 9;
      FUN_1004edf4(&local_68);
      local_18 = 10;
      uVar5 = FUN_10054aae(*(undefined4 *)(local_c4 + 0x44),&local_68,&local_b8);
      local_18 = 0xffffffff;
      FUN_10001fee();
      FUN_1005852c();
      FUN_10001fee();
      FUN_10001fee();
      goto code_r0x10084de7;
    }
    if ((*(int *)(local_c4 + 0x90) != 0x2e) && (*(int *)(local_c4 + 0x94) != -1)) {
      puVar7 = local_bc;
      if (0xf < *(uint *)(local_c4 + 0x70)) {
        puVar7 = *(undefined8 **)(local_c4 + 0x5c);
      }
      *(undefined1 *)((int)puVar7 + *(int *)(local_c4 + 0x94)) = 0x2e;
    }
    local_b8 = uVar1;
    FUN_100897e2(&local_b8);
    break;
  case 8:
    cVar2 = FUN_10089406(0xffffffff);
    if (cVar2 == '\0') {
LAB_100852fc:
      uVar5 = 0;
      goto code_r0x10084de7;
    }
    iVar3 = FUN_10081e88();
    *(int *)(local_c4 + 0x28) = iVar3;
    if (iVar3 == 10) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
      break;
    }
    local_98[0] = 1;
    FUN_1001f6b2(&local_b8,((int)local_34 >> 0x1f & 0xe0000000U) + (local_34 >> 5) * 4 + local_40,
                 local_34 & 0x1f,1,local_98);
    goto code_r0x100849a2;
  case 9:
    cVar2 = FUN_100892d8(0xffffffff);
    if (cVar2 == '\0') goto LAB_100852fc;
    iVar3 = FUN_10081e88();
    *(int *)(local_c4 + 0x28) = iVar3;
    if (iVar3 == 0xb) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
      break;
    }
    if (iVar3 == 4) {
      if ((*(int *)(local_c4 + 0x90) != 0x2e) && (*(int *)(local_c4 + 0x94) != -1)) {
        puVar7 = local_bc;
        if (0xf < *(uint *)(local_c4 + 0x70)) {
          puVar7 = *(undefined8 **)(local_c4 + 0x5c);
        }
        *(undefined1 *)((int)puVar7 + *(int *)(local_c4 + 0x94)) = 0x2e;
      }
      uVar5 = FUN_10087942(local_bc);
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      iVar3 = FUN_10081e88();
      *(int *)(local_c4 + 0x28) = iVar3;
      if (iVar3 == 0xc) goto code_r0x10084d4d;
      FUN_10001f66("object separator");
      local_18 = 0x2a;
      FUN_100844f8(local_98,0xc,local_80);
      local_18 = 0x2b;
      local_48 = *(undefined4 *)(local_c4 + 0x4c);
      local_50 = *(undefined8 *)(local_c4 + 0x44);
      FUN_1004e9e2(&local_b8,0x65,&local_50,local_98,0);
      local_18 = 0x2c;
      FUN_1004edf4(&local_68);
      local_18 = 0x2d;
      uVar5 = FUN_100505f0(*(undefined4 *)(local_c4 + 0x44),&local_68,&local_b8);
      local_18 = 0xffffffff;
      FUN_10001fee();
      FUN_1005852c();
      FUN_10001fee();
      FUN_10001fee();
    }
    else {
      FUN_10001f66("object key");
      local_18 = 0x2e;
      FUN_100844f8(local_98,4,local_80);
      local_18 = 0x2f;
      local_48 = *(undefined4 *)(local_c4 + 0x4c);
      local_50 = *(undefined8 *)(local_c4 + 0x44);
      FUN_1004e9e2(&local_b8,0x65,&local_50,local_98,0);
      local_18 = 0x30;
      FUN_1004edf4(&local_68);
      local_18 = 0x31;
      uVar5 = FUN_100505f0(*(undefined4 *)(local_c4 + 0x44),&local_68,&local_b8);
      local_18 = 0xffffffff;
      FUN_10001fee();
      FUN_1005852c();
      FUN_10001fee();
      FUN_10001fee();
    }
    goto code_r0x10084de7;
  default:
    FUN_10001f66("value");
    local_18 = 0x1b;
    FUN_100844f8(local_98,0x10,local_80);
    local_18 = 0x1c;
    local_48 = *(undefined4 *)(local_c4 + 0x4c);
    local_50 = *(undefined8 *)(local_c4 + 0x44);
    FUN_1004e9e2(&local_b8,0x65,&local_50,local_98,0);
    local_18 = 0x1d;
    FUN_1004edf4(&local_68);
    local_18 = 0x1e;
    uVar5 = FUN_100505f0(*(undefined4 *)(local_c4 + 0x44),&local_68,&local_b8);
    local_18 = 0xffffffff;
    FUN_10001fee();
    local_b8._0_4_ = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
    local_18 = 0xffffffff;
    local_a8 = std::exception::vftable;
    FUN_10259020(local_a4);
    local_b8 = CONCAT44(local_b8._4_4_,std::exception::vftable);
    FUN_10259020((int)&local_b8 + 4);
    FUN_10001fee();
    FUN_10001fee();
code_r0x10084de7:
    local_18 = 0xffffffff;
    FUN_1001cf94();
    ExceptionList = local_20;
    return uVar5;
  case 0xe:
    FUN_10001f66("value");
    local_18 = 0x26;
    FUN_100844f8(local_98,0,local_80);
    local_18 = 0x27;
    local_48 = *(undefined4 *)(local_c4 + 0x4c);
    local_50 = *(undefined8 *)(local_c4 + 0x44);
    FUN_1004e9e2(&local_b8,0x65,&local_50,local_98,0);
    local_18 = 0x28;
    FUN_1004edf4(&local_68);
    local_18 = 0x29;
    uVar5 = FUN_100505f0(*(undefined4 *)(local_c4 + 0x44),&local_68,&local_b8);
    local_18 = 0xffffffff;
    FUN_10001fee();
    local_b8._0_4_ = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
    local_18 = 0xffffffff;
    local_a8 = std::exception::vftable;
    FUN_10259020(local_a4);
    local_b8 = CONCAT44(local_b8._4_4_,std::exception::vftable);
    FUN_10259020((int)&local_b8 + 4);
    FUN_10001fee();
    FUN_10001fee();
    goto code_r0x10084de7;
  case 0xf:
    local_bc = (undefined8 *)(local_c4 + 0x44);
    if (*(int *)(local_c4 + 0x44) == 1) {
      FUN_10001f66(
                  "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                  );
      local_18 = 0x23;
      local_60 = *(undefined4 *)(local_bc + 1);
      local_68 = *local_bc;
      FUN_1004e9e2(&local_b8,0x65,&local_68,local_98,0);
      local_18 = 0x24;
      FUN_1004edf4(local_80);
      local_18 = 0x25;
      uVar5 = FUN_100505f0(*(undefined4 *)local_bc,local_80,&local_b8);
      local_18 = 0xffffffff;
      FUN_10001fee();
      FUN_1005852c();
      FUN_10001fee();
    }
    else {
      FUN_10001f66("value");
      local_18 = 0x1f;
      FUN_100844f8(local_98,0x10,local_80);
      local_18 = 0x20;
      local_48 = *(undefined4 *)(local_bc + 1);
      local_50 = *local_bc;
      FUN_1004e9e2(&local_b8,0x65,&local_50,local_98,0);
      local_18 = 0x21;
      FUN_1004edf4(&local_68);
      local_18 = 0x22;
      uVar5 = FUN_100505f0(*(undefined4 *)local_bc,&local_68,&local_b8);
      local_18 = 0xffffffff;
      FUN_10001fee();
      local_b8._0_4_ = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
      local_18 = 0xffffffff;
      local_a8 = std::exception::vftable;
      FUN_10259020(local_a4);
      local_b8 = CONCAT44(local_b8._4_4_,std::exception::vftable);
      FUN_10259020((int)&local_b8 + 4);
      FUN_10001fee();
      FUN_10001fee();
    }
    goto code_r0x10084de7;
  }
  do {
    if (local_34 == 0) {
      uVar5 = 1;
      goto code_r0x10084de7;
    }
    uVar8 = local_34 & 0x1f;
    uVar9 = 1 << ((char)uVar8 - 1U & 0x1f);
    if (uVar8 == 0) {
      uVar9 = 0x80000000;
    }
    iVar3 = (local_34 >> 5) * 4 + local_40;
    uVar4 = (int)local_34 >> 0x1f & 0xe0000000;
    puVar6 = (uint *)(iVar3 + uVar4 + (uVar8 - 1 >> 5) * 4);
    if (uVar8 == 0) {
      puVar6 = (uint *)((uVar4 - 4) + iVar3);
    }
    if ((*puVar6 & uVar9) == 0) {
      iVar3 = FUN_10081e88();
      *(int *)(local_c4 + 0x28) = iVar3;
      if (iVar3 == 0xd) {
        iVar3 = FUN_10081e88();
        *(int *)(local_c4 + 0x28) = iVar3;
        if ((iVar3 != 0xb) || (*(char *)(local_c4 + 0x99) == '\0')) goto LAB_10084c57;
      }
      else if (iVar3 != 0xb) {
        FUN_10001f66("object");
        local_18 = 0xb;
        FUN_100844f8(local_98,0xb,local_80);
        local_18 = 0xc;
        local_48 = *(undefined4 *)(local_c4 + 0x4c);
        local_50 = *(undefined8 *)(local_c4 + 0x44);
        FUN_1004e9e2(&local_b8,0x65,&local_50,local_98,0);
        local_18 = 0xd;
        FUN_1004edf4(&local_68);
        local_18 = 0xe;
        uVar5 = FUN_100505f0(*(undefined4 *)(local_c4 + 0x44),&local_68,&local_b8);
        local_18 = 0xffffffff;
        FUN_10001fee();
        FUN_1005852c();
        FUN_10001fee();
        FUN_10001fee();
        goto code_r0x10084de7;
      }
    }
    else {
      iVar3 = FUN_10081e88();
      *(int *)(local_c4 + 0x28) = iVar3;
      if (iVar3 == 0xd) {
        iVar3 = FUN_10081e88();
        *(int *)(local_c4 + 0x28) = iVar3;
        if ((iVar3 != 10) || (*(char *)(local_c4 + 0x99) == '\0')) goto code_r0x100849a2;
      }
      else if (iVar3 != 10) {
        FUN_10001f66("array");
        local_18 = 0x17;
        FUN_100844f8(local_98,10,local_80);
        local_18 = 0x18;
        local_48 = *(undefined4 *)(local_c4 + 0x4c);
        local_50 = *(undefined8 *)(local_c4 + 0x44);
        FUN_1004e9e2(&local_b8,0x65,&local_50,local_98,0);
        local_18 = 0x19;
        FUN_1004edf4(&local_68);
        local_18 = 0x1a;
        uVar5 = FUN_100505f0(*(undefined4 *)(local_c4 + 0x44),&local_68,&local_b8);
        local_18 = 0xffffffff;
        FUN_10001fee();
        FUN_1005852c();
        FUN_10001fee();
        FUN_10001fee();
        goto code_r0x10084de7;
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
    FUN_1005103c();
  } while( true );
code_r0x10084d4d:
  local_98[0] = 0;
  FUN_1001f6b2(&local_b8,((int)local_34 >> 0x1f & 0xe0000000U) + (local_34 >> 5) * 4 + local_40,
               local_34 & 0x1f,1,local_98);
  uVar5 = FUN_10081e88();
  *(undefined4 *)(local_c4 + 0x28) = uVar5;
  goto code_r0x100849a2;
LAB_10084c57:
  if (iVar3 != 4) {
    FUN_10001f66("object key");
    local_18 = 0x13;
    FUN_100844f8(local_98,4,local_80);
    local_18 = 0x14;
    local_48 = *(undefined4 *)(local_c4 + 0x4c);
    local_50 = *(undefined8 *)(local_c4 + 0x44);
    FUN_1004e9e2(&local_b8,0x65,&local_50,local_98,0);
    local_18 = 0x15;
    FUN_1004edf4(&local_68);
    local_18 = 0x16;
    uVar5 = FUN_100505f0(*(undefined4 *)(local_c4 + 0x44),&local_68,&local_b8);
    local_18 = 0xffffffff;
    FUN_10001fee();
    FUN_1005852c();
    FUN_10001fee();
    FUN_10001fee();
    goto code_r0x10084de7;
  }
  if ((*(int *)(local_c4 + 0x90) != 0x2e) && (*(int *)(local_c4 + 0x94) != -1)) {
    puVar7 = local_bc;
    if (0xf < *(uint *)(local_c4 + 0x70)) {
      puVar7 = *(undefined8 **)(local_c4 + 0x5c);
    }
    *(undefined1 *)((int)puVar7 + *(int *)(local_c4 + 0x94)) = 0x2e;
  }
  uVar5 = FUN_10087942(local_bc);
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  iVar3 = FUN_10081e88();
  *(int *)(local_c4 + 0x28) = iVar3;
  if (iVar3 != 0xc) {
    FUN_10001f66("object separator");
    local_18 = 0xf;
    FUN_100844f8(local_98,0xc,local_80);
    local_18 = 0x10;
    local_48 = *(undefined4 *)(local_c4 + 0x4c);
    local_50 = *(undefined8 *)(local_c4 + 0x44);
    FUN_1004e9e2(&local_b8,0x65,&local_50,local_98,0);
    local_18 = 0x11;
    FUN_1004edf4(&local_68);
    local_18 = 0x12;
    uVar5 = FUN_100505f0(*(undefined4 *)(local_c4 + 0x44),&local_68,&local_b8);
    local_18 = 0xffffffff;
    FUN_10001fee();
    FUN_1005852c();
    FUN_10001fee();
    FUN_10001fee();
    goto code_r0x10084de7;
  }
  uVar5 = FUN_10081e88();
  *(undefined4 *)(local_c4 + 0x28) = uVar5;
  goto code_r0x100849a2;
}


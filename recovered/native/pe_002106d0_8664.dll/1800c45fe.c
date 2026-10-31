/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c45fe */

bool FUN_1800c45fe(longlong ***param_1)

{
  longlong ***ppplVar1;
  bool bVar2;
  longlong **local_c0;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [32];
  longlong ***local_60;
  longlong local_58;
  longlong ***local_48;
  longlong ***ppplStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (DAT_180417b48 == 0) {
    FUN_1800c4e34(local_90);
    FUN_1800010ec(local_90);
  }
  if (DAT_180417b50 == 0) {
    local_98 = (undefined1 *)((longlong)param_1[1] + (longlong)*param_1);
    FUN_1800b64b4(local_90,param_1,&local_98,
                  "81 FA E0 00 00 00 7C ? 8B 45 08 0F B6 08 81 F9 FC 00 00 00");
    local_48 = (longlong ***)0x0;
    ppplStack_40 = (longlong ***)0x0;
    local_38 = 0;
    local_b8 = local_90;
    local_60 = (longlong ***)&local_60;
    FUN_1800b6f0e(&local_48,1);
    FUN_1800b5f3c(&local_60,&local_48);
    FUN_1800b70f0(&local_48);
    FUN_180001ef2(local_80);
    if (local_58 - (longlong)local_60 == 8) {
      local_c0 = *local_60 + -10;
      ppplVar1 = &local_c0;
      if (local_c0 <= *param_1) {
        ppplVar1 = param_1;
      }
      FUN_1800b64b4(local_90,ppplVar1,local_60,"55 8B EC");
      local_b8 = (undefined1 *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_98 = local_90;
      local_48 = (longlong ***)&local_60;
      FUN_1800b6f0e(&local_b8,1);
      FUN_1800b5f3c(&local_48,&local_b8);
      FUN_1800b70f0(&local_b8);
      FUN_180001ef2(local_80);
      if (local_48 != ppplStack_40) {
        FUN_1800c4edb(local_90,*local_48);
        FUN_1800010ec(local_90);
      }
      FUN_180004cea(&local_48);
    }
    FUN_180004cea(&local_60);
  }
  if (DAT_180417b58 == 0) {
    local_98 = (undefined1 *)((longlong)param_1[1] + (longlong)*param_1);
    FUN_1800b64b4(local_90,param_1,&local_98,"8B 44 24 08 3D B1 04 00 00");
    local_60 = (longlong ***)&local_60;
    local_48 = (longlong ***)0x0;
    ppplStack_40 = (longlong ***)0x0;
    local_38 = 0;
    local_b8 = local_90;
    FUN_1800b6f0e(&local_48,1);
    FUN_1800b5f3c(&local_60,&local_48);
    FUN_1800b70f0(&local_48);
    FUN_180001ef2(local_80);
    if (local_58 - (longlong)local_60 == 8) {
      FUN_1800c4f81(local_90,*local_60);
      FUN_1800010ec(local_90);
    }
    FUN_180004cea(&local_60);
  }
  if (DAT_180417b60 == 0) {
    local_98 = (undefined1 *)((longlong)param_1[1] + (longlong)*param_1);
    FUN_1800b64b4(local_90,param_1,&local_98,"81 ? FE 7F 00 00 0F 84 ???? 81 ? E9 FD 00 00");
    local_48 = (longlong ***)0x0;
    ppplStack_40 = (longlong ***)0x0;
    local_38 = 0;
    local_b8 = local_90;
    local_60 = (longlong ***)&local_60;
    FUN_1800b6f0e(&local_48,1);
    FUN_1800b5f3c(&local_60,&local_48);
    FUN_1800b70f0(&local_48);
    FUN_180001ef2(local_80);
    if (local_58 - (longlong)local_60 == 8) {
      local_c0 = *local_60 + -0x240;
      if (*param_1 < local_c0) {
        param_1 = &local_c0;
      }
      FUN_1800b64b4(local_90,param_1,local_60,"83 EC ? 83 3D ???? 00 75");
      local_b8 = (undefined1 *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_98 = local_90;
      local_48 = (longlong ***)&local_60;
      FUN_1800b6f0e(&local_b8,1);
      FUN_1800b5f3c(&local_48,&local_b8);
      FUN_1800b70f0(&local_b8);
      FUN_180001ef2(local_80);
      if (local_48 != ppplStack_40) {
        FUN_1800c5015(local_90,*local_48);
        FUN_1800010ec(local_90);
      }
      FUN_180004cea(&local_48);
    }
    FUN_180004cea(&local_60);
  }
  bVar2 = true;
  if (((DAT_180417b48 == 0) && (DAT_180417b50 == 0)) && (DAT_180417b58 == 0)) {
    bVar2 = DAT_180417b60 != 0;
  }
  return bVar2;
}


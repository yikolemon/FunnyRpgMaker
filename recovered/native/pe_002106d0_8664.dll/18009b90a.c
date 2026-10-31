/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009b90a */

void FUN_18009b90a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  undefined1 local_140 [56];
  undefined8 local_108;
  char *local_100;
  char *local_f8;
  undefined1 local_f0 [32];
  undefined8 ***local_d0 [2];
  longlong local_c0;
  ulonglong local_b8;
  undefined4 local_b0 [8];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar3 = FUN_180097ab4(param_2,"code");
  if (cVar3 == '\0') {
    FUN_180001e92(local_b0,"command");
    FUN_180001e92(local_d0,"code");
    local_68 = "Key \'{}\' for object \'{}\' not found in patch";
    local_60 = 0x2b;
    FUN_18006b4a7(&local_88,&local_68,local_d0,local_b0);
    local_108 = 0x26000000ed;
    local_100 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Command.hpp"
    ;
    local_f8 = "virtual void __cdecl Command::Command::Patch(const nlohmann::ordered_json &)";
    FUN_180072a20(local_f0);
    FUN_1800b1004(&local_68);
    FUN_18006f972(local_140,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_140,&DAT_1803a63b0);
  }
  local_90 = param_2;
  cVar3 = FUN_180097ab4(param_2,"stringArgs");
  if (cVar3 != '\0') {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar5 != lVar1) {
      do {
        FUN_1800010ec(lVar5);
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != lVar1);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
    }
    local_88 = (char *)FUN_18008d862(local_90,"stringArgs");
    local_60 = 0;
    lStack_58 = 0;
    local_50 = -0x8000000000000000;
    cVar3 = *local_88;
    if (cVar3 == '\0') {
      local_50 = 1;
    }
    else if (cVar3 == '\x02') {
      lStack_58 = **(longlong **)(local_88 + 8);
    }
    else if (cVar3 == '\x01') {
      local_60 = **(longlong **)(local_88 + 8);
    }
    else {
      local_50 = 0;
    }
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0x8000000000000000;
    if (*local_88 == '\x02') {
      uStack_78 = *(undefined8 *)(*(longlong *)(local_88 + 8) + 8);
    }
    else if (*local_88 == '\x01') {
      local_80 = *(undefined8 *)(*(longlong *)(local_88 + 8) + 8);
    }
    else {
      local_70 = 1;
    }
    local_68 = local_88;
    while (cVar3 = FUN_18005324c(&local_68,&local_88), cVar3 == '\0') {
      uVar4 = FUN_18008d8c6(&local_68);
      FUN_18008daae(uVar4,local_d0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_180417dc0) && (FUN_18023d500(&DAT_180417dc0), DAT_180417dc0 == -1)) {
        FUN_18007645e(&DAT_180417d48);
        FUN_18023d710(&LAB_18008bdaa);
        _Init_thread_footer(&DAT_180417dc0);
      }
      ppppuVar6 = local_d0;
      if (0xf < local_b8) {
        ppppuVar6 = (undefined8 ****)local_d0[0];
      }
      FUN_18008bdb6(&DAT_180417d48,local_b0,ppppuVar6,local_c0 + (longlong)ppppuVar6);
      FUN_18008c110(param_1 + 0x28,local_b0);
      FUN_1800010ec(local_b0);
      FUN_180001ef2(local_d0);
      if (*local_68 == '\x02') {
        lStack_58 = lStack_58 + 0x10;
      }
      else if (*local_68 == '\x01') {
        local_60 = local_60 + 0x30;
      }
      else {
        local_50 = local_50 + 1;
      }
    }
  }
  cVar3 = FUN_180097ab4(local_90,"intArgs");
  if (cVar3 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8);
  }
  local_88 = (char *)FUN_18008d862(local_90,"intArgs");
  local_60 = 0;
  lStack_58 = 0;
  local_50 = -0x8000000000000000;
  cVar3 = *local_88;
  if (cVar3 == '\0') {
    local_50 = 1;
  }
  else {
    if (cVar3 == '\x02') {
      lStack_58 = **(longlong **)(local_88 + 8);
      local_80 = 0;
      local_70 = 0x8000000000000000;
      uStack_78 = *(undefined8 *)(*(longlong *)(local_88 + 8) + 8);
      goto LAB_18009bc64;
    }
    if (cVar3 == '\x01') {
      local_60 = **(longlong **)(local_88 + 8);
      uStack_78 = 0;
      local_70 = 0x8000000000000000;
      local_80 = *(undefined8 *)(*(longlong *)(local_88 + 8) + 8);
      goto LAB_18009bc64;
    }
    local_50 = 0;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 1;
LAB_18009bc64:
  local_68 = local_88;
  cVar3 = FUN_18005324c(&local_68,&local_88);
  if (cVar3 == '\0') {
    do {
      uVar4 = FUN_18008d8c6(&local_68);
      local_b0[0] = 0;
      FUN_180097ca8(&DAT_1802b0ea8,uVar4,local_b0);
      puVar2 = *(undefined4 **)(param_1 + 0x10);
      if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
        FUN_18009ab08(param_1 + 8,puVar2,local_b0);
      }
      else {
        *puVar2 = local_b0[0];
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 4;
      }
      if (*local_68 == '\x02') {
        lStack_58 = lStack_58 + 0x10;
      }
      else if (*local_68 == '\x01') {
        local_60 = local_60 + 0x30;
      }
      else {
        local_50 = local_50 + 1;
      }
      cVar3 = FUN_18005324c(&local_68,&local_88);
    } while (cVar3 == '\0');
  }
  return;
}


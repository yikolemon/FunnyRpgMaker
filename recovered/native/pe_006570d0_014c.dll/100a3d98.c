/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a3d98 */

undefined4 __thiscall FUN_100a3d98(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_1bc [36];
  undefined1 local_198 [36];
  undefined1 local_174 [36];
  undefined1 local_150 [36];
  undefined1 local_12c [36];
  int local_108 [2];
  char *local_100;
  char *local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  char *local_f0;
  char *local_ec;
  int local_e0 [2];
  char *local_d8;
  char *local_d4;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  char *local_7c;
  undefined4 uStack_78;
  char *local_74;
  undefined4 uStack_70;
  char *local_6c;
  undefined4 uStack_68;
  char *local_64;
  undefined4 uStack_60;
  wchar_t *local_5c;
  undefined4 uStack_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [6];
  int local_2c;
  int local_28;
  char local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_1bc;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4180;
  local_1c = ExceptionList;
  local_54 = *(int *)(param_2 + 0x28) + -1;
  ExceptionList = &local_1c;
  cVar1 = FUN_100a4ca8(&local_54);
  if (cVar1 != 'f') {
    uVar2 = FUN_100a4ca8(&local_54);
    local_e0[0] = CONCAT31(local_e0[0]._1_3_,uVar2);
    local_f8 = 0x1f5;
    local_f4 = 0x55;
    local_f0 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_ec = "virtual bool __thiscall Map::load(FileCoder &)";
    FUN_10072232(local_44,&local_f8);
    local_14 = 0;
    local_7c = "{}Map terminator not 0x66 (found: {:#02x})";
    uStack_78 = 0x2a;
    FUN_100963a5(&local_c8,"{}Map terminator not 0x66 (found: {:#02x})",0x2a,local_44,local_e0);
    local_14 = 1;
    FUN_1006f6d8(&local_c8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_1bc,&DAT_10367ca8);
  }
  uVar3 = FUN_10077b66();
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  local_2c = param_2 + 0x10;
  uVar2 = FUN_10077c4c();
  *(undefined1 *)(param_1 + 0x3c) = uVar2;
  FUN_1008a8f0(&local_c8);
  local_14 = 2;
  FUN_100128b2(&local_c8);
  local_14 = 0xffffffff;
  FUN_10001134();
  uVar3 = FUN_10077b66();
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  uVar3 = FUN_10077b66();
  *(undefined4 *)(param_1 + 100) = uVar3;
  uVar3 = FUN_10077b66();
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  local_50 = FUN_10077b66();
  local_48 = local_50;
  local_28 = param_1;
  if (0x66 < *(uint *)(param_1 + 0x38)) {
    uVar3 = FUN_10077b66();
    iVar4 = local_28;
    *(undefined4 *)(local_28 + 0x58) = uVar3;
    uVar3 = FUN_10077b66();
    *(undefined4 *)(iVar4 + 0x5c) = uVar3;
    DAT_1039cbb8 = 1;
  }
  iVar4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = *(int *)(param_2 + 0x24);
  }
  if (iVar4 == local_54) {
    local_21 = FUN_10077c4c();
    goto LAB_100a3fd4;
  }
  if (DAT_1039cbc8 == '\x01') {
    iVar4 = FUN_10077b66();
    if (iVar4 != -1) {
      if (*(int *)(param_2 + 4) == 0) {
        local_c8 = *(int *)(param_2 + 0x24) + -4;
        FUN_100770a2(&local_c8);
      }
      goto code_r0x100a3ee9;
    }
  }
  else {
code_r0x100a3ee9:
    local_44[0] = *(int *)(local_28 + 100) * *(int *)(local_28 + 0x68) * *(int *)(local_28 + 0x5c) *
                  4;
    FUN_10076b48(&local_c8,local_44);
    iVar4 = local_28;
    local_14 = 3;
    if ((int *)(local_28 + 0x6c) != &local_c8) {
      FUN_10004eae();
      *(ulonglong *)(iVar4 + 0x6c) = CONCAT44(uStack_c4,local_c8);
      *(undefined4 *)(iVar4 + 0x74) = local_c0;
      local_c8 = 0;
      uStack_c4 = 0;
      local_c0 = 0;
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
  }
  local_4c = local_28 + 0x78;
  while( true ) {
    local_21 = FUN_10077c4c();
    if (local_21 != 'o') break;
    FUN_100a4dae();
    local_14 = 4;
    cVar1 = FUN_100a4f00(param_2);
    if (cVar1 == '\0') {
      local_108[0] = (*(int *)(local_28 + 0x7c) - *(int *)(local_28 + 0x78) >> 2) * 0x286bca1b;
      local_e0[0] = 0x21f;
      local_e0[1] = 0x56;
      local_d8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp"
      ;
      local_d4 = "virtual bool __thiscall Map::load(FileCoder &)";
      FUN_10072232(&local_f8,local_e0);
      local_14 = 5;
      local_74 = "{}Event initialization failed at index {}";
      uStack_70 = 0x29;
      FUN_1008abf0(local_44,"{}Event initialization failed at index {}",0x29,&local_f8,local_108);
      local_14 = 6;
      FUN_1006f6d8(local_44);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_198,&DAT_10367ca8);
    }
    FUN_100a631c(&local_c8);
    local_14 = 0xffffffff;
    FUN_100a49ca();
  }
  local_e0[0] = (*(int *)(local_28 + 0x7c) - *(int *)(local_28 + 0x78) >> 2) * 0x286bca1b;
  if (local_e0[0] - local_48 != 0) {
    local_f8 = 0x225;
    local_f4 = 0x55;
    local_f0 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_ec = "virtual bool __thiscall Map::load(FileCoder &)";
    FUN_10072232(local_44,&local_f8);
    local_14 = 7;
    local_6c = "{}Expected {} Events, but read: {} Events";
    uStack_68 = 0x29;
    FUN_1007d8ca(&local_c8,"{}Expected {} Events, but read: {} Events",0x29,local_44,&local_50,
                 local_e0);
    local_14 = 8;
    FUN_1006f6d8(&local_c8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_174,&DAT_10367ca8);
  }
LAB_100a3fd4:
  if (local_21 != 'f') {
    local_f8 = 0x22b;
    local_f4 = 0x6c;
    local_f0 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_ec = "virtual bool __thiscall Map::load(FileCoder &)";
    FUN_10072232(local_44,&local_f8);
    local_14 = 9;
    local_64 = "{}Unexpected event terminator (found: {:#02x}, expected: {:#02x})";
    uStack_60 = 0x41;
    FUN_10097c90(&local_c8,"{}Unexpected event terminator (found: {:#02x}, expected: {:#02x})",0x41,
                 local_44,&local_21,&DAT_1029680c);
    local_14 = 10;
    FUN_1006f6d8(&local_c8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_150,&DAT_10367ca8);
  }
  if ((*(int *)(param_2 + 4) == 0) && (*(uint *)(param_2 + 0x28) <= *(uint *)(param_2 + 0x24))) {
    ExceptionList = local_1c;
    return 1;
  }
  FUN_1006ad36(&local_f8);
  local_14 = 0xb;
  FUN_10003728(&local_f8);
  local_14 = 0xc;
  local_108[0] = 0x22e;
  local_108[1] = 0x52;
  local_100 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
  local_fc = "virtual bool __thiscall Map::load(FileCoder &)";
  FUN_10080602(local_e0,local_108);
  local_14 = 0xd;
  local_5c = L"{}Map [{}] has more data than expected";
  uStack_58 = 0x26;
  FUN_100805a1(&local_c8,L"{}Map [{}] has more data than expected",0x26,local_e0,local_44);
  local_14 = 0xe;
  FUN_1008069c(&local_c8);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_12c,&DAT_10367ca8);
}


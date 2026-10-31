/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a88ec */

undefined8 FUN_1800a88ec(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 local_298 [56];
  undefined1 local_260 [56];
  undefined1 local_228 [56];
  undefined1 local_1f0 [56];
  undefined1 local_1b8 [56];
  char *local_180;
  undefined8 local_178;
  char *local_170;
  undefined8 local_168;
  char *local_160;
  undefined8 local_158;
  undefined1 local_150 [160];
  longlong local_b0;
  char *local_a8;
  char *local_a0;
  undefined8 local_98;
  char *local_90;
  char *local_88;
  undefined1 local_78 [36];
  uint local_54;
  int local_50;
  char local_49 [9];
  
  local_49[1] = -2;
  local_49[2] = -1;
  local_49[3] = -1;
  local_49[4] = -1;
  local_49[5] = -1;
  local_49[6] = -1;
  local_49[7] = -1;
  local_49[8] = -1;
  cVar2 = FUN_18009c3da(param_2,param_1 + 0x14);
  if (cVar2 == '\0') {
    local_98 = 0x240000013d;
    local_90 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_88 = "bool __cdecl Event::Init(FileCoder &)";
    FUN_180072a20(local_78);
    FUN_180020b6a(local_150,local_78,"MAGIC invalid");
    FUN_18006f972(local_298,local_150);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_298,&DAT_1803a63b0);
  }
  lVar1 = param_2 + 0x10;
  uVar3 = FUN_180078646(lVar1);
  *param_1 = uVar3;
  FUN_18008b8a0(param_2,local_150);
  FUN_180012524(param_1 + 2,local_150);
  FUN_1800010ec(local_150);
  uVar3 = FUN_180078646(lVar1);
  param_1[10] = uVar3;
  uVar3 = FUN_180078646(lVar1);
  param_1[0xb] = uVar3;
  local_54 = FUN_180078646(lVar1);
  uVar5 = (ulonglong)local_54;
  cVar2 = FUN_18009c3da(param_2,param_1 + 0x1a);
  if (cVar2 == '\0') {
    local_98 = 0x2400000145;
    local_90 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_88 = "bool __cdecl Event::Init(FileCoder &)";
    FUN_180072a20(local_78);
    FUN_180020b6a(local_150,local_78,"MAGIC invalid");
    FUN_18006f972(local_260,local_150);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_260,&DAT_1803a63b0);
  }
  local_50 = 0;
  iVar4 = 0;
  while( true ) {
    local_49[0] = FUN_180078732(lVar1);
    if (local_49[0] != 'y') break;
    FUN_1800a904a(local_150);
    cVar2 = FUN_1800a91a8(local_150,param_2,iVar4);
    if (cVar2 == '\0') {
      local_b0 = 0x540000014d;
      local_a8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp"
      ;
      local_a0 = "bool __cdecl Event::Init(FileCoder &)";
      FUN_180072a20(&local_98);
      local_180 = "{}Page initialization failed at index {}";
      local_178 = 0x28;
      FUN_18008bbb3(local_78,&local_180,&local_98,&local_50);
      FUN_18006f972(local_228,local_78);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_228,&DAT_1803a63b0);
    }
    FUN_1800a99c4(param_1 + 0xc,local_150);
    iVar4 = iVar4 + 1;
    local_50 = iVar4;
    FUN_1800a850c(local_150);
  }
  local_b0 = (*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 0xc) >> 5) *
             -0x3333333333333333;
  if (local_b0 - uVar5 != 0) {
    local_98 = 0x5200000154;
    local_90 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_88 = "bool __cdecl Event::Init(FileCoder &)";
    FUN_180072a20(local_78);
    local_170 = "{}Expected {} Pages, but read: {} Pages";
    local_168 = 0x27;
    FUN_180097b83(local_150,&local_170,local_78,&local_54,&local_b0);
    FUN_18006f972(local_1f0,local_150);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_1f0,&DAT_1803a63b0);
  }
  if (local_49[0] == 'p') {
    *(undefined1 *)(param_1 + 0x12) = 1;
    return 1;
  }
  local_98 = 0x5700000157;
  local_90 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
  local_88 = "bool __cdecl Event::Init(FileCoder &)";
  FUN_180072a20(local_78);
  local_160 = "{}Event terminator not 0x70 (found: {:#02x})";
  local_158 = 0x2c;
  FUN_1800984d1(local_150,&local_160,local_78,local_49);
  FUN_18006f972(local_1b8,local_150);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_1b8,&DAT_1803a63b0);
}


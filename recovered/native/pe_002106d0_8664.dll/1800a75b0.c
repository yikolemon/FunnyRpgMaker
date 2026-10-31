/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a75b0 */

undefined8 FUN_1800a75b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 local_2b8 [56];
  undefined1 local_280 [56];
  undefined1 local_248 [56];
  undefined1 local_210 [56];
  undefined1 local_1d8 [56];
  char *local_1a0;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  char *local_180;
  undefined8 local_178;
  char *local_170;
  undefined8 local_168;
  wchar_t *local_160;
  undefined8 local_158;
  longlong local_150;
  char *local_148;
  char *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulonglong local_b0;
  char *local_a8;
  char *local_a0;
  undefined8 local_90;
  char *local_88;
  char *local_80;
  uint local_6c;
  ulonglong local_68 [4];
  int local_48;
  char local_41 [9];
  
  local_41[1] = -2;
  local_41[2] = -1;
  local_41[3] = -1;
  local_41[4] = -1;
  local_41[5] = -1;
  local_41[6] = -1;
  local_41[7] = -1;
  local_41[8] = -1;
  local_48 = *(int *)(param_2 + 0x3c) + -1;
  cVar2 = FUN_1800a869e(param_2);
  if (cVar2 != 'f') {
    uVar3 = FUN_1800a869e(param_2,&local_48);
    local_b0 = CONCAT71(local_b0._1_7_,uVar3);
    local_90 = 0x55000001f5;
    local_88 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_80 = "virtual bool __cdecl Map::load(FileCoder &)";
    FUN_180072a20(local_68);
    local_1a0 = "{}Map terminator not 0x66 (found: {:#02x})";
    local_198 = 0x2a;
    FUN_1800984d1(&local_138,&local_1a0,local_68,&local_b0);
    FUN_18006f972(local_2b8,&local_138);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_2b8,&DAT_1803a63b0);
  }
  lVar1 = param_2 + 0x10;
  uVar4 = FUN_180078646(lVar1);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  uVar3 = FUN_180078732(lVar1);
  *(undefined1 *)(param_1 + 0x5c) = uVar3;
  FUN_18008b8a0(param_2,&local_138);
  FUN_180012524(param_1 + 0x60,&local_138);
  FUN_1800010ec(&local_138);
  uVar4 = FUN_180078646(lVar1);
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  uVar4 = FUN_180078646(lVar1);
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  uVar4 = FUN_180078646(lVar1);
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  local_6c = FUN_180078646(lVar1);
  uVar6 = (ulonglong)local_6c;
  if (0x66 < *(uint *)(param_1 + 0x58)) {
    uVar4 = FUN_180078646(lVar1);
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    uVar4 = FUN_180078646(lVar1);
    *(undefined4 *)(param_1 + 0x84) = uVar4;
    DAT_180417ca0 = 1;
  }
  iVar5 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar5 = *(int *)(param_2 + 0x38);
  }
  if (iVar5 == local_48) {
    local_41[0] = FUN_180078732(lVar1);
    goto LAB_1800a77f8;
  }
  if (DAT_180417cb8 == '\x01') {
    iVar5 = FUN_180078646(lVar1);
    if (iVar5 != -1) {
      if (*(int *)(param_2 + 4) == 0) {
        local_138 = CONCAT44(local_138._4_4_,*(int *)(param_2 + 0x38) + -4);
        FUN_180077ad8(lVar1);
      }
      goto code_r0x0001800a7706;
    }
  }
  else {
code_r0x0001800a7706:
    local_68[0] = (ulonglong)
                  (uint)(*(int *)(param_1 + 0x8c) * *(int *)(param_1 + 0x90) *
                         *(int *)(param_1 + 0x84) * 4);
    FUN_18007750c(param_2,&local_138);
    if ((undefined8 *)(param_1 + 0x98) != &local_138) {
      FUN_180004cea();
      *(undefined8 *)(param_1 + 0x98) = local_138;
      *(undefined8 *)(param_1 + 0xa0) = uStack_130;
      *(undefined8 *)(param_1 + 0xa8) = local_128;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
    }
    FUN_180004cea(&local_138);
  }
  while( true ) {
    local_41[0] = FUN_180078732(lVar1);
    if (local_41[0] != 'o') break;
    FUN_1800a8788(&local_138);
    cVar2 = FUN_1800a88ec(&local_138,param_2);
    if (cVar2 == '\0') {
      local_150 = *(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 7;
      local_b0 = 0x560000021f;
      local_a8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp"
      ;
      local_a0 = "virtual bool __cdecl Map::load(FileCoder &)";
      FUN_180072a20(&local_90);
      local_190 = "{}Event initialization failed at index {}";
      local_188 = 0x29;
      FUN_1800a8fca(local_68,&local_190,&local_90,&local_150);
      FUN_18006f972(local_280,local_68);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_280,&DAT_1803a63b0);
    }
    FUN_1800aa22e(param_1 + 0xb0,&local_138);
    FUN_1800a83ac(&local_138);
  }
  local_b0 = *(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 7;
  if (local_b0 != uVar6) {
    local_90 = 0x5500000225;
    local_88 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_80 = "virtual bool __cdecl Map::load(FileCoder &)";
    FUN_180072a20(local_68);
    local_180 = "{}Expected {} Events, but read: {} Events";
    local_178 = 0x29;
    FUN_180097b83(&local_138,&local_180,local_68,&local_6c,&local_b0);
    FUN_18006f972(local_248,&local_138);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_248,&DAT_1803a63b0);
  }
LAB_1800a77f8:
  if (local_41[0] != 'f') {
    local_90 = 0x6c0000022b;
    local_88 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_80 = "virtual bool __cdecl Map::load(FileCoder &)";
    FUN_180072a20(local_68);
    local_170 = "{}Unexpected event terminator (found: {:#02x}, expected: {:#02x})";
    local_168 = 0x41;
    FUN_18009a587(&local_138,&local_170,local_68,local_41,&DAT_1802ba72c);
    FUN_18006f972(local_210,&local_138);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_210,&DAT_1803a63b0);
  }
  if ((*(int *)(param_2 + 4) == 0) && (*(uint *)(param_2 + 0x3c) <= *(uint *)(param_2 + 0x38))) {
    return CONCAT71((uint7)(uint3)(*(uint *)(param_2 + 0x3c) >> 8),1);
  }
  FUN_18006acce(param_1 + 8,&local_90);
  FUN_18000358a(local_68,&local_90);
  local_150 = 0x520000022e;
  local_148 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
  local_140 = "virtual bool __cdecl Map::load(FileCoder &)";
  FUN_18008148e(&local_b0);
  local_160 = L"{}Map [{}] has more data than expected";
  local_158 = 0x26;
  FUN_180081409(&local_138,&local_160,&local_b0,local_68);
  FUN_18008150c(local_1d8,&local_138);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_1d8,&DAT_1803a63b0);
}


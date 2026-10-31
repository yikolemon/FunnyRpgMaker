/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c5f70 */

undefined8 FUN_1400c5f70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_2a0 [56];
  undefined1 local_268 [56];
  undefined1 local_230 [56];
  undefined1 local_1f8 [56];
  undefined8 local_1c0;
  char *local_1b8;
  char *local_1b0;
  undefined1 local_1a8 [32];
  undefined8 local_188;
  char *local_180;
  char *local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_e0;
  char *local_d8;
  char *local_d0;
  undefined1 local_c0 [32];
  undefined8 local_a0;
  char *local_98;
  char *local_90;
  undefined1 local_80 [32];
  ulonglong local_60 [4];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0x10;
  uVar4 = FUN_14008aab0(lVar1);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  uVar2 = FUN_14008ab9c(lVar1);
  *(undefined1 *)(param_1 + 0x5c) = uVar2;
  FUN_14009aeee(param_2,&local_168);
  FUN_14000ff1e(param_1 + 0x60,&local_168);
  FUN_140005242(&local_168);
  uVar4 = FUN_14008aab0(lVar1);
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  uVar4 = FUN_14008aab0(lVar1);
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  uVar4 = FUN_14008aab0(lVar1);
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  uVar5 = FUN_14008aab0(lVar1);
  if (0x66 < *(uint *)(param_1 + 0x58)) {
    uVar4 = FUN_14008aab0(lVar1);
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    uVar4 = FUN_14008aab0(lVar1);
    *(undefined4 *)(param_1 + 0x84) = uVar4;
    DAT_1401cc8c4 = 1;
  }
  if (DAT_1401cc8c6 == '\x01') {
    iVar6 = FUN_14008aab0(lVar1);
    if (iVar6 == -1) goto LAB_1400c60fe;
    if (*(int *)(param_2 + 4) == 0) {
      local_168 = CONCAT44(local_168._4_4_,*(int *)(param_2 + 0x38) + -4);
      FUN_14008a1ac(lVar1);
    }
  }
  local_60[0] = (ulonglong)
                (uint)(*(int *)(param_1 + 0x8c) * *(int *)(param_1 + 0x90) *
                       *(int *)(param_1 + 0x84) * 4);
  FUN_140089bf6(param_2,&local_168);
  if ((undefined8 *)(param_1 + 0x98) != &local_168) {
    FUN_140016e5c();
    *(undefined8 *)(param_1 + 0x98) = local_168;
    *(undefined8 *)(param_1 + 0xa0) = uStack_160;
    *(undefined8 *)(param_1 + 0xa8) = local_158;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
  }
  FUN_140016e5c(&local_168);
LAB_1400c60fe:
  while( true ) {
    uVar4 = FUN_14008ab9c(lVar1);
    if ((char)uVar4 != 'o') break;
    FUN_1400c71ac(&local_168);
    cVar3 = FUN_1400c7310(&local_168,param_2);
    if (cVar3 == '\0') {
      local_a0 = 0x1c000001c7;
      local_98 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
      ;
      local_90 = "virtual bool __cdecl Map::load(FileCoder &)";
      FUN_140087f79(local_80);
      FUN_14000ed8c(local_60,local_80,"Event initialization failed");
      FUN_1400886d4(local_2a0,local_60);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_2a0,&DAT_1401a5720);
    }
    FUN_1400c8f80(param_1 + 0xb0,&local_168);
    FUN_1400c6eba(&local_168);
  }
  if (*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 7 != (ulonglong)uVar5) {
    FUN_14001943c(local_80);
    FUN_140031d26(&local_e0,uVar5);
    local_1c0 = 0x1b000001cd;
    local_1b8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
    ;
    local_1b0 = "virtual bool __cdecl Map::load(FileCoder &)";
    FUN_140087f79(local_1a8);
    FUN_14000ed8c(&local_188,local_1a8,"Expected ");
    FUN_140018470(local_c0);
    FUN_14000ed8c(&local_a0,local_c0," Events, but read: ");
    FUN_140018470(local_60);
    FUN_14000ed8c(&local_168,local_60," Events");
    FUN_1400886d4(local_268,&local_168);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_268,&DAT_1401a5720);
  }
  if ((char)uVar4 == 'f') {
    if ((*(int *)(param_2 + 4) == 0) && (*(uint *)(param_2 + 0x3c) <= *(uint *)(param_2 + 0x38))) {
      return CONCAT71((uint7)(uint3)(*(uint *)(param_2 + 0x3c) >> 8),1);
    }
    FUN_140055d5e(param_1 + 8,&local_a0);
    FUN_14000892c(local_80,&local_a0);
    local_188 = 0x1b000001d3;
    local_180 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
    ;
    local_178 = "virtual bool __cdecl Map::load(FileCoder &)";
    FUN_140087af8(&local_e0);
    FUN_140052f9e(local_c0,&local_e0,L"Map [");
    FUN_140059abc(local_60);
    FUN_140052f9e(&local_168,local_60,L"] has more data than expected");
    FUN_140087b76(local_1f8,&local_168);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_1f8,&DAT_1401a5720);
  }
  FUN_1400992c3(local_80,uVar4);
  local_e0 = 0x1b000001d0;
  local_d8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
  ;
  local_d0 = "virtual bool __cdecl Map::load(FileCoder &)";
  FUN_140087f79(local_c0);
  FUN_14000ed8c(&local_a0,local_c0,"Unexpected event indicator: ");
  FUN_140018470(local_60);
  FUN_14000ed8c(&local_168,local_60," expected 0x66");
  FUN_1400886d4(local_230,&local_168);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_230,&DAT_1401a5720);
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c7310 */

undefined8 FUN_1400c7310(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_2f8 [56];
  undefined1 local_2c0 [56];
  undefined1 local_288 [56];
  undefined1 local_250 [56];
  undefined1 local_218 [56];
  undefined8 local_1e0;
  char *local_1d8;
  char *local_1d0;
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [160];
  undefined8 local_e8;
  char *local_e0;
  char *local_d8;
  undefined1 local_c8 [32];
  undefined8 local_a8;
  char *local_a0;
  char *local_98;
  undefined8 local_88;
  char *local_80;
  char *local_78;
  undefined1 local_68 [32];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar2 = FUN_14009dbfe(param_2,param_1 + 0x14);
  if (cVar2 == '\0') {
    local_88 = 0x2400000115;
    local_80 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
    ;
    local_78 = "bool __cdecl Event::Init(FileCoder &)";
    FUN_140087f79(local_68);
    FUN_14000ed8c(local_188,local_68,"MAGIC invalid");
    FUN_1400886d4(local_2f8,local_188);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_2f8,&DAT_1401a5720);
  }
  lVar1 = param_2 + 0x10;
  uVar3 = FUN_14008aab0(lVar1);
  *param_1 = uVar3;
  FUN_14009aeee(param_2,local_188);
  FUN_14000ff1e(param_1 + 2,local_188);
  FUN_140005242(local_188);
  uVar3 = FUN_14008aab0(lVar1);
  param_1[10] = uVar3;
  uVar3 = FUN_14008aab0(lVar1);
  param_1[0xb] = uVar3;
  uVar4 = FUN_14008aab0(lVar1);
  cVar2 = FUN_14009dbfe(param_2,param_1 + 0x1a);
  if (cVar2 == '\0') {
    local_88 = 0x240000011d;
    local_80 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
    ;
    local_78 = "bool __cdecl Event::Init(FileCoder &)";
    FUN_140087f79(local_68);
    FUN_14000ed8c(local_188,local_68,"MAGIC invalid");
    FUN_1400886d4(local_2c0,local_188);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_2c0,&DAT_1401a5720);
  }
  iVar5 = 0;
  while( true ) {
    uVar3 = FUN_14008ab9c(lVar1);
    if ((char)uVar3 != 'y') break;
    FUN_1400c7c4a(local_188);
    cVar2 = FUN_1400c7da8(local_188,param_2,iVar5);
    if (cVar2 == '\0') {
      local_a8 = 0x1c00000125;
      local_a0 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
      ;
      local_98 = "bool __cdecl Event::Init(FileCoder &)";
      FUN_140087f79(&local_88);
      FUN_14000ed8c(local_68,&local_88,"Page initialization failed");
      FUN_1400886d4(local_288,local_68);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_288,&DAT_1401a5720);
    }
    FUN_1400c8696(param_1 + 0xc,local_188);
    iVar5 = iVar5 + 1;
    FUN_1400c701a(local_188);
  }
  if ((*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 0xc) >> 5) * -0x3333333333333333 -
      (ulonglong)uVar4 != 0) {
    FUN_14001943c(&local_88);
    FUN_140031d26(&local_e8,uVar4);
    local_1e0 = 0x1b0000012c;
    local_1d8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
    ;
    local_1d0 = "bool __cdecl Event::Init(FileCoder &)";
    FUN_140087f79(local_1a8);
    FUN_14000ed8c(local_1c8,local_1a8,"Expected ");
    FUN_140018470(local_c8);
    FUN_14000ed8c(&local_a8,local_c8," Pages, but read: ");
    FUN_140018470(local_68);
    FUN_14000ed8c(local_188,local_68," Pages");
    FUN_1400886d4(local_250,local_188);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_250,&DAT_1401a5720);
  }
  if ((char)uVar3 == 'p') {
    *(undefined1 *)(param_1 + 0x12) = 1;
    return 1;
  }
  FUN_1400992c3(&local_88,uVar3);
  local_e8 = 0x1b0000012f;
  local_e0 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
  ;
  local_d8 = "bool __cdecl Event::Init(FileCoder &)";
  FUN_140087f79(local_c8);
  FUN_14000ed8c(&local_a8,local_c8,"Unexpected event indicator: ");
  FUN_140018470(local_68);
  FUN_14000ed8c(local_188,local_68," expected 0x70");
  FUN_1400886d4(local_218,local_188);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_218,&DAT_1401a5720);
}


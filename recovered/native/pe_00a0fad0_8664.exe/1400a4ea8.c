/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a4ea8 */

undefined8 FUN_1400a4ea8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined1 local_680 [56];
  undefined1 local_648 [56];
  undefined1 local_610 [56];
  undefined1 local_5d8 [56];
  undefined1 local_5a0 [56];
  undefined1 local_568 [56];
  undefined8 local_530;
  char *local_528;
  char *local_520;
  undefined4 local_518;
  int iStack_514;
  undefined8 local_508;
  ulonglong local_500;
  uint local_4e0;
  uint local_4dc;
  undefined4 local_380;
  int iStack_37c;
  undefined8 local_370;
  ulonglong local_368;
  uint local_348;
  uint local_344;
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  char *local_1c0;
  char *local_1b8;
  undefined4 local_1a8 [40];
  undefined1 local_108 [32];
  undefined8 local_e8;
  char *local_e0;
  char *local_d8;
  undefined8 local_c8;
  char *local_c0;
  char *local_b8;
  undefined1 local_a8 [32];
  undefined2 local_88;
  undefined1 local_86;
  undefined8 local_68;
  char *local_60;
  char *local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = param_1 + 0xb;
  puVar8 = &local_518;
  FUN_140055d5e(plVar1,puVar8);
  if (7 < local_500) {
    puVar8 = (undefined4 *)CONCAT44(iStack_514,local_518);
  }
  FUN_14000ffc0(&DAT_1401cc780,puVar8,local_508);
  FUN_140005690(&local_518);
  local_380 = 2;
  local_1a8[0] = 0;
  FUN_140088778(&local_518,plVar1,local_1a8,&local_380,&DAT_1401649dc);
  if ((char)local_518 == '\0') {
    cVar4 = FUN_1400888ec(&local_518,&DAT_1401cc810);
    if (cVar4 == '\0') {
      local_68 = 0x2800000289;
      local_60 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/Database.hpp"
      ;
      local_58 = "bool __cdecl Database::init(void)";
      FUN_140087f79(local_1a8);
      FUN_14000ed8c(&local_380,local_1a8,"MAGIC invalid");
      FUN_1400886d4(local_680,&local_380);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_680,&DAT_1401a5720);
    }
  }
  uVar5 = FUN_14008ab9c(&local_508);
  *(undefined1 *)(param_1 + 6) = uVar5;
  plVar2 = param_1 + 7;
  puVar8 = &local_380;
  FUN_140055d5e(plVar2,puVar8);
  if (7 < local_368) {
    puVar8 = (undefined4 *)CONCAT44(iStack_37c,local_380);
  }
  FUN_14000ffc0(&DAT_1401cc780,puVar8,local_370);
  FUN_140005690(&local_380);
  local_86 = 0;
  local_88 = 0;
  local_1a8[0] = 3;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  FUN_140088778(&local_380,plVar2,&local_68,local_1a8,&local_88);
  uVar6 = FUN_14008aab0(&local_370);
  for (uVar7 = 0; uVar7 < uVar6; uVar7 = uVar7 + 1) {
    FUN_1400a5fe0(local_1a8,&local_380);
    FUN_1400a6c88(param_1,local_1a8);
    FUN_1400a6810(local_1a8);
  }
  if ((iStack_37c != 0) || (local_348 < local_344)) {
    FUN_14000892c(&local_88,plVar2);
    local_e8 = 0x1c00000296;
    local_e0 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/Database.hpp"
    ;
    local_d8 = "bool __cdecl Database::init(void)";
    FUN_140087af8(&local_c8);
    FUN_140052f9e(local_a8,&local_c8,L"Database [");
    FUN_140059abc(&local_68);
    FUN_140052f9e(local_1a8,&local_68,L"] has more data than expected");
    FUN_140087b76(local_648,local_1a8);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_648,&DAT_1401a5720);
  }
  FUN_140088af0(&local_380);
  puVar8 = &local_380;
  FUN_140055d5e(plVar1,puVar8);
  if (7 < local_368) {
    puVar8 = (undefined4 *)CONCAT44(iStack_37c,local_380);
  }
  FUN_14000ffc0(&DAT_1401cc780,puVar8,local_370);
  FUN_140005690(&local_380);
  uVar6 = FUN_14008aab0(&local_508);
  lVar9 = *param_1;
  lVar3 = param_1[1];
  if ((lVar3 - lVar9 >> 5) * -0x3333333333333333 - (ulonglong)uVar6 != 0) {
    FUN_140079b6f(local_1a8,uVar6);
    FUN_1400a84f8(local_a8,(param_1[1] - *param_1 >> 5) * -0x3333333333333333);
    FUN_14000892c(local_108,plVar1);
    local_530 = 0x1b0000029d;
    local_528 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/Database.hpp"
    ;
    local_520 = "bool __cdecl Database::init(void)";
    FUN_140087af8(local_1e8);
    FUN_140052f9e(&local_1c8,local_1e8,L"Database [");
    FUN_140059abc(&local_e8);
    FUN_140052f9e(&local_c8,&local_e8,L"] project and dat type count mismatch expected: ");
    FUN_140059abc(&local_88);
    FUN_140052f9e(&local_68,&local_88,L"  - got: ");
    FUN_140059abc(&local_380);
    FUN_140087b76(local_610,&local_380);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_610,&DAT_1401a5720);
  }
  iVar10 = 0;
  while (lVar9 != lVar3) {
    cVar4 = FUN_1400a6926(lVar9,&local_518);
    iVar10 = iVar10 + 1;
    lVar9 = lVar9 + 0xa0;
    if (cVar4 == '\0') {
      FUN_140031d26(&local_68,iVar10);
      local_c8 = 0x1c000002a7;
      local_c0 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/Database.hpp"
      ;
      local_b8 = "bool __cdecl Database::init(void)";
      FUN_140087f79(local_a8);
      FUN_14000ed8c(&local_88,local_a8,"Failed at readDat for type(");
      FUN_140018470(local_1a8);
      FUN_14000ed8c(&local_380,local_1a8,")");
      FUN_1400886d4(local_5d8,&local_380);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_5d8,&DAT_1401a5720);
    }
  }
  cVar4 = FUN_14008ab9c(&local_508);
  if (cVar4 != (char)param_1[6]) {
    FUN_14000892c(&local_68,plVar1);
    FUN_1400a6b6f(&local_c8,(char)param_1[6]);
    local_1c8 = 0x1b000002ad;
    local_1c0 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/Database.hpp"
    ;
    local_1b8 = "bool __cdecl Database::init(void)";
    FUN_140087af8(local_108);
    FUN_140052f9e(&local_e8,local_108,&DAT_1401740f4);
    FUN_140059abc(local_a8);
    FUN_140052f9e(&local_88,local_a8,L" terminator at the end of \"");
    FUN_140059abc(local_1a8);
    FUN_140052f9e(&local_380,local_1a8,L"\"");
    FUN_140087b76(local_5a0,&local_380);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_5a0,&DAT_1401a5720);
  }
  if ((iStack_514 == 0) && (local_4dc <= local_4e0)) {
    FUN_140088af0(&local_518);
    return 1;
  }
  FUN_14000892c(&local_68,plVar1);
  local_c8 = 0x1b000002b0;
  local_c0 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/Database.hpp"
  ;
  local_b8 = "bool __cdecl Database::init(void)";
  FUN_140087af8(local_a8);
  FUN_140052f9e(&local_88,local_a8,L"Database [");
  FUN_140059abc(local_1a8);
  FUN_140052f9e(&local_380,local_1a8,L"] has more data than expected");
  FUN_140087b76(local_568,&local_380);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_568,&DAT_1401a5720);
}


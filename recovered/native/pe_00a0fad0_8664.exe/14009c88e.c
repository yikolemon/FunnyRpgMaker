/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009c88e */

undefined8 FUN_14009c88e(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_d0 [56];
  undefined8 local_98;
  char *local_90;
  char *local_88;
  undefined1 local_80 [32];
  undefined4 local_60 [8];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0x10;
  uVar3 = FUN_14008ab9c(lVar1);
  *param_1 = uVar3;
  bVar4 = FUN_14008ab9c(lVar1);
  if (bVar4 != 0) {
    uVar6 = (uint)bVar4;
    do {
      local_60[0] = FUN_14008aab0(lVar1);
      puVar2 = *(undefined4 **)(param_1 + 0x10);
      if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
        FUN_14009c238(param_1 + 8,puVar2,local_60);
      }
      else {
        *puVar2 = local_60[0];
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 4;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  cVar5 = FUN_14009dbfe(param_2,&DAT_1401cc7a0);
  if (cVar5 != '\0') {
    return 1;
  }
  local_98 = 0x210000002d;
  local_90 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\RouteCommand.hpp"
  ;
  local_88 = "bool __cdecl RouteCommand::Init(FileCoder &)";
  FUN_140087f79(local_80);
  FUN_14000ed8c(local_60,local_80,"MAGIC invalid");
  FUN_1400886d4(local_d0,local_60);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_d0,&DAT_1401a5720);
}


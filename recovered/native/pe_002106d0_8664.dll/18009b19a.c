/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009b19a */

undefined8 FUN_18009b19a(undefined1 *param_1,longlong param_2)

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
  uVar3 = FUN_180078732(lVar1);
  *param_1 = uVar3;
  bVar4 = FUN_180078732(lVar1);
  if (bVar4 != 0) {
    uVar6 = (uint)bVar4;
    do {
      local_60[0] = FUN_180078646(lVar1);
      puVar2 = *(undefined4 **)(param_1 + 0x10);
      if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
        FUN_18009ab08(param_1 + 8,puVar2,local_60);
      }
      else {
        *puVar2 = local_60[0];
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 4;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  cVar5 = FUN_18009c3da(param_2,&DAT_180417b98);
  if (cVar5 != '\0') {
    return 1;
  }
  local_98 = 0x210000002d;
  local_90 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\RouteCommand.hpp"
  ;
  local_88 = "bool __cdecl RouteCommand::Init(FileCoder &)";
  FUN_180072a20(local_80);
  FUN_180020b6a(local_60,local_80,"MAGIC invalid");
  FUN_18006f972(local_d0,local_60);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_d0,&DAT_1803a63b0);
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100985b4 */

undefined4 __fastcall FUN_100985b4(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined1 local_84 [36];
  undefined4 local_60;
  undefined4 local_5c;
  char *local_58;
  char *local_54;
  undefined1 local_50 [24];
  undefined4 local_38 [6];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_84;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3b70;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  uVar2 = FUN_10077c4c();
  *param_1 = uVar2;
  bVar3 = FUN_10077c4c();
  if (bVar3 != 0) {
    uVar5 = (uint)bVar3;
    do {
      local_38[0] = FUN_10077b66();
      puVar1 = *(undefined4 **)(param_1 + 8);
      if (puVar1 == *(undefined4 **)(param_1 + 0xc)) {
        FUN_10051662(puVar1,local_38);
      }
      else {
        *puVar1 = local_38[0];
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  cVar4 = FUN_100994f0(&DAT_1039cb24);
  if (cVar4 != '\0') {
    ExceptionList = local_1c;
    return 1;
  }
  local_60 = 0x2d;
  local_5c = 0x21;
  local_58 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\RouteCommand.hpp"
  ;
  local_54 = "bool __thiscall RouteCommand::Init(FileCoder &)";
  FUN_10072232(local_50,&local_60);
  local_14 = 0;
  FUN_10020842(local_38,local_50,"MAGIC invalid");
  local_14 = 1;
  FUN_1006f6d8(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_84,&DAT_10367ca8);
}


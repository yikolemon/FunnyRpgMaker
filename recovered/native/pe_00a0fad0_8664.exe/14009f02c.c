/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009f02c */

void FUN_14009f02c(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_110 [56];
  undefined8 local_d8;
  char *local_d0;
  char *local_c8;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  iVar3 = (**(code **)(*param_1 + 0x28))();
  if (iVar3 != 2) {
    uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
    FUN_14002577f(local_80,uVar4);
    local_d8 = 0x1b000001f8;
    local_d0 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Command.hpp"
    ;
    local_c8 = 
    "virtual void __cdecl Command::CommandSpecialClasses::Picture::SetText(const tString &)";
    FUN_140087f79(local_40);
    FUN_14000ed8c(local_60,local_40,"Picture type \"");
    FUN_140018470(local_a0);
    FUN_14000ed8c(local_c0,local_a0,"\" has no text");
    FUN_1400886d4(local_110,local_c0);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_110,&DAT_1401a5720);
  }
  puVar2 = (undefined8 *)param_1[5];
  if (puVar2 != (undefined8 *)param_1[6]) {
    if (puVar2 != param_2) {
      puVar1 = param_2 + 2;
      if (7 < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      FUN_14000ffc0(puVar2,param_2,*puVar1);
      return;
    }
    return;
  }
  FUN_140043d28(param_1 + 5,param_2);
  return;
}


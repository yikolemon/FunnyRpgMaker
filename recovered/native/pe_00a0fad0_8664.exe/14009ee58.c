/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009ee58 */

void FUN_14009ee58(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
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
  iVar2 = (**(code **)(*param_1 + 0x28))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 != 3) {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      FUN_14002577f(local_80,uVar3);
      local_d8 = 0x1b0000020b;
      local_d0 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Command.hpp"
      ;
      local_c8 = 
      "virtual void __cdecl Command::CommandSpecialClasses::Picture::SetFilename(const tString &)";
      FUN_140087f79(local_40);
      FUN_14000ed8c(local_60,local_40,"Picture type \"");
      FUN_140018470(local_a0);
      FUN_14000ed8c(local_c0,local_a0,"\" has no text");
      FUN_1400886d4(local_110,local_c0);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_110,&DAT_1401a5720);
    }
  }
  if ((undefined8 *)param_1[5] != param_2) {
    puVar1 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_14000ffc0((undefined8 *)param_1[5],param_2,*puVar1);
    return;
  }
  return;
}


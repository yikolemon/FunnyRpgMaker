/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009eab8 */

undefined8 FUN_14009eab8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if (iVar1 == 2) {
    if (param_1[5] == param_1[6]) {
      FUN_14000f628(param_2,&DAT_140174404);
    }
    else {
      FUN_14000892c(param_2);
    }
    return param_2;
  }
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_14002577f(local_80,uVar2);
  local_d8 = 0x1b000001ed;
  local_d0 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Command.hpp"
  ;
  local_c8 = 
  "virtual const tString __cdecl Command::CommandSpecialClasses::Picture::Text(void) const";
  FUN_140087f79(local_40);
  FUN_14000ed8c(local_60,local_40,"Picture type \"");
  FUN_140018470(local_a0);
  FUN_14000ed8c(local_c0,local_a0,"\" has no text");
  FUN_1400886d4(local_110,local_c0);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_110,&DAT_1401a5720);
}


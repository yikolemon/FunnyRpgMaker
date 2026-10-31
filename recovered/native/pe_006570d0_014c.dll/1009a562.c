/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009a562 */

undefined4 __thiscall FUN_1009a562(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_90 [36];
  undefined4 local_6c;
  undefined4 local_68;
  char *local_64;
  char *local_60;
  undefined1 local_5c [24];
  undefined1 local_44 [24];
  char *local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_90;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3c60;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))();
    if (iVar1 != 3) {
      local_24 = (**(code **)(*param_1 + 0x18))();
      local_6c = 0x208;
      local_68 = 0x50;
      local_64 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Command.hpp"
      ;
      local_60 = 
      "virtual const tString __thiscall Command::CommandSpecialClasses::Picture::Filename(void) const"
      ;
      FUN_10072232(local_5c,&local_6c);
      local_14 = 0;
      local_2c = "{}Picture type \"{}\" has no filename";
      uStack_28 = 0x23;
      FUN_10079bbc(local_44,0x231033948c,local_5c,&local_24);
      local_14 = 1;
      FUN_1006f6d8(local_44);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_90,&DAT_10367ca8);
    }
  }
  FUN_10003728(param_1[5]);
  ExceptionList = local_1c;
  return param_2;
}


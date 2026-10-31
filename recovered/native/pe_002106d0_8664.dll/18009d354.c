/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009d354 */

undefined8 FUN_18009d354(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_c8 [56];
  undefined8 local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if (iVar1 != 3) {
      local_24 = (**(code **)(*param_1 + 0x30))(param_1);
      local_90 = 0x5000000208;
      local_88 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Command.hpp"
      ;
      local_80 = 
      "virtual const tString __cdecl Command::CommandSpecialClasses::Picture::Filename(void) const";
      FUN_180072a20(local_48);
      local_78 = "{}Picture type \"{}\" has no filename";
      local_70 = 0x23;
      FUN_18007a930(local_68,&local_78,local_48,&local_24);
      FUN_18006f972(local_c8,local_68);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_c8,&DAT_1803a63b0);
    }
  }
  FUN_18000358a(param_2,param_1[5]);
  return param_2;
}


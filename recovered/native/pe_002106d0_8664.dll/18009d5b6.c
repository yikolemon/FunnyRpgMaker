/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009d5b6 */

void FUN_18009d5b6(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
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
  iVar3 = (**(code **)(*param_1 + 0x30))();
  if (iVar3 != 2) {
    local_24 = (**(code **)(*param_1 + 0x30))(param_1);
    local_90 = 0x4c000001fd;
    local_88 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Command.hpp"
    ;
    local_80 = 
    "virtual void __cdecl Command::CommandSpecialClasses::Picture::SetText(const tString &)";
    FUN_180072a20(local_48);
    local_78 = "{}Picture type \"{}\" has no text";
    local_70 = 0x1f;
    FUN_18007a930(local_68,&local_78,local_48,&local_24);
    FUN_18006f972(local_c8,local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_c8,&DAT_1803a63b0);
  }
  puVar2 = (undefined8 *)param_1[5];
  if (puVar2 != (undefined8 *)param_1[6]) {
    if (puVar2 != param_2) {
      puVar1 = param_2 + 2;
      if (7 < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      FUN_180004488(puVar2,param_2,*puVar1);
      return;
    }
    return;
  }
  FUN_18009d706(param_1 + 5,param_2);
  return;
}


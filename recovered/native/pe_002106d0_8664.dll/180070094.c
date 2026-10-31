/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180070094 */

undefined4 FUN_180070094(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_298 [56];
  undefined1 local_260 [56];
  char local_228;
  undefined7 uStack_227;
  undefined8 local_218;
  ulonglong local_210;
  undefined8 local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  char *local_60;
  char *local_58;
  undefined4 local_48 [8];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  plVar1 = param_1 + 1;
  if (plVar1 != param_2) {
    plVar2 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    FUN_180004488(plVar1,param_2,*plVar2);
  }
  if (param_1[3] != 0) {
    pcVar5 = &local_228;
    FUN_18006acce(plVar1,pcVar5);
    if (7 < local_210) {
      pcVar5 = (char *)CONCAT71(uStack_227,local_228);
    }
    FUN_180004488(&DAT_180417b78,pcVar5,local_218);
    FUN_180001e4c(&local_228);
    DAT_180417ca0 = 0;
    local_48[0] = 0;
    FUN_180072cf4(&local_228,plVar1,local_48,(longlong)param_1 + 0x4c,param_1 + 10);
    if (local_228 == '\0') {
      cVar3 = FUN_180072e68(&local_228,param_1 + 5);
      if (cVar3 == '\0') {
        local_90 = 0x1f00000041;
        local_88 = 
        "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\WolfDataBase.hpp"
        ;
        local_80 = "bool __cdecl WolfDataBase::Load(const std::filesystem::path &)";
        FUN_180072a20(&local_68);
        FUN_180020b6a(local_48,&local_68,"MAGIC invalid");
        FUN_18006f972(local_260,local_48);
                    /* WARNING: Subroutine does not return */
        FUN_18026d5b0(local_260,&DAT_1803a63b0);
      }
    }
    if ((char)param_1[9] == '\x01') {
      FUN_180072f02(param_1,local_48);
      FUN_18007f73c(&local_218,local_48);
      FUN_180001e4c(local_48);
    }
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1,&local_228);
    FUN_18007306c(&local_228);
    return uVar4;
  }
  local_68 = 0x5000000037;
  local_60 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\WolfDataBase.hpp"
  ;
  local_58 = "bool __cdecl WolfDataBase::Load(const std::filesystem::path &)";
  FUN_180072a20(local_48);
  local_78 = "{}Trying to load with empty file path";
  local_70 = 0x25;
  FUN_1800729a4(&local_228,&local_78,local_48);
  FUN_18006f972(local_298,&local_228);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_298,&DAT_1803a63b0);
}


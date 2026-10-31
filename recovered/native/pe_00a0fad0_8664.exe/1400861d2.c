/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400861d2 */

undefined4 FUN_1400861d2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_288 [56];
  undefined1 local_250 [56];
  char local_218;
  undefined7 uStack_217;
  undefined8 local_208;
  ulonglong local_200;
  undefined8 local_80;
  char *local_78;
  char *local_70;
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
    FUN_14000ffc0(plVar1,param_2,*plVar2);
  }
  if (param_1[3] != 0) {
    pcVar5 = &local_218;
    FUN_140055d5e(plVar1,pcVar5);
    if (7 < local_200) {
      pcVar5 = (char *)CONCAT71(uStack_217,local_218);
    }
    FUN_14000ffc0(&DAT_1401cc780,pcVar5,local_208);
    FUN_140005690(&local_218);
    DAT_1401cc8c4 = 0;
    local_48[0] = 0;
    FUN_140088778(&local_218,plVar1,local_48,(longlong)param_1 + 0x4c,param_1 + 10);
    if (local_218 == '\0') {
      cVar3 = FUN_1400888ec(&local_218,param_1 + 5);
      if (cVar3 == '\0') {
        local_80 = 0x1f00000041;
        local_78 = 
        "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\WolfDataBase.hpp"
        ;
        local_70 = "bool __cdecl WolfDataBase::Load(const std::filesystem::path &)";
        FUN_140087f79(&local_68);
        FUN_14000ed8c(local_48,&local_68,"MAGIC invalid");
        FUN_1400886d4(local_250,local_48);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_250,&DAT_1401a5720);
      }
    }
    if ((char)param_1[9] == '\x01') {
      FUN_140088986(param_1,local_48);
      FUN_14008cdfa(&local_208,local_48);
      FUN_140005690(local_48);
    }
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1,&local_218);
    FUN_140088af0(&local_218);
    return uVar4;
  }
  local_68 = 0x1b00000037;
  local_60 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\WolfDataBase.hpp"
  ;
  local_58 = "bool __cdecl WolfDataBase::Load(const std::filesystem::path &)";
  FUN_140087f79(local_48);
  FUN_14000ed8c(&local_218,local_48,"Trying to load with empty file path");
  FUN_1400886d4(local_288,&local_218);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_288,&DAT_1401a5720);
}


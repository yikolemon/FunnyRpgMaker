/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006fdba */

undefined4 __thiscall FUN_1006fdba(int *param_1,int *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int **ppiVar3;
  char cVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int *local_1d8;
  int *local_1d4;
  undefined4 local_1d0 [6];
  char *local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  char *local_1a8;
  char *local_1a4;
  undefined4 local_198;
  undefined4 local_194;
  char *local_190;
  char *local_18c;
  char local_188 [352];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_1d8;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c27d0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_1d8 = param_1;
  puVar2 = &stack0xfffffffc;
  ppiVar3 = &local_1d8;
  if (param_1 + 1 != param_2) {
    FUN_10004664();
    puVar2 = local_28;
    ppiVar3 = (int **)local_24;
  }
  local_24 = (undefined1 *)ppiVar3;
  local_28 = puVar2;
  if (local_1d8[5] != 0) {
    FUN_1006ad36(local_188);
    local_18 = 2;
    local_1d4 = param_1 + 1;
    FUN_10004664();
    piVar1 = local_1d4;
    local_18 = 0xffffffff;
    FUN_10001f04();
    DAT_1039cbb8 = 0;
    local_1d0[0] = 0;
    FUN_100724ba(piVar1,local_1d0,local_1d8 + 0xc,local_1d8 + 0xd);
    local_18 = 3;
    if ((local_188[0] == '\0') && (cVar4 = FUN_10072624(local_1d8 + 7), cVar4 == '\0')) {
      local_198 = 0x41;
      local_194 = 0x1f;
      local_190 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\WolfDataBase.hpp"
      ;
      local_18c = "bool __thiscall WolfDataBase::Load(const std::filesystem::path &)";
      FUN_10072232();
      local_18 = 4;
      FUN_10020842(local_1d0,&local_1b0,"MAGIC invalid");
      local_18 = 5;
      FUN_1006f6d8(local_1d0);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0();
    }
    if ((char)local_1d8[0xb] == '\x01') {
      FUN_100726da(local_1d0);
      local_18 = 6;
      FUN_1007e9d4(local_1d0);
      local_18 = 0xffffffff;
      FUN_10001f04();
    }
    local_18 = 3;
    uVar5 = (**(code **)(*local_1d8 + 0xc))(local_188);
    local_18 = 0xffffffff;
    FUN_1007283e();
    *unaff_FS_OFFSET = local_20;
    return uVar5;
  }
  local_1b0 = 0x37;
  local_1ac = 0x50;
  local_1a8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\WolfDataBase.hpp"
  ;
  local_1a4 = "bool __thiscall WolfDataBase::Load(const std::filesystem::path &)";
  FUN_10072232();
  local_18 = 0;
  local_1b8 = "{}Trying to load with empty file path";
  uStack_1b4 = 0x25;
  FUN_100721d6(local_188,0x25103371c1,local_1d0);
  local_18 = 1;
  FUN_1006f6d8(local_188);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0();
}


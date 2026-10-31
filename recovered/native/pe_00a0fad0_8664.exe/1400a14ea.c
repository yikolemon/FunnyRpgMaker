/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a14ea */

void FUN_1400a14ea(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 local_100 [56];
  undefined8 local_c8;
  char *local_c0;
  char *local_b8;
  undefined1 local_b0 [32];
  int local_90 [2];
  undefined8 local_88;
  undefined8 local_70;
  int local_68;
  int local_50 [2];
  undefined8 local_48;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_140007025();
  local_70 = 0xffff00000000;
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  local_68 = FUN_1400dcbb0(puVar4,local_90,3,0xffffffff);
  FUN_140007276(&local_70,local_68,local_90);
  iVar2 = local_68;
  local_48 = FUN_140007025();
  local_50[0] = iVar2;
  iVar1 = (int)local_70;
  if ((int)local_70 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",local_50,param_1);
    }
  }
  else {
    FUN_140007025();
    if (iVar1 != 1) {
      return;
    }
  }
  local_90[0] = 0;
  local_88 = FUN_140007025();
  cVar3 = FUN_14008cf35(param_1,local_90);
  if (local_90[0] == 0) {
    if (cVar3 != '\0') {
      return;
    }
    FUN_140007025();
    local_70 = 0xffff00000000;
    puVar4 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    local_68 = FUN_1400dcbb0(puVar4,local_90,3,0xffffffff);
    FUN_140007276(&local_70,local_68,local_90);
    iVar2 = local_68;
    local_48 = FUN_140007025();
    local_50[0] = iVar2;
    iVar1 = (int)local_70;
    if ((int)local_70 == 0) {
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14004137b("exists",local_50,param_1);
      }
    }
    else {
      FUN_140007025();
      if (iVar1 != 1) {
        return;
      }
    }
    FUN_14000892c(local_50,param_1);
    local_c8 = 0x1c000000b8;
    local_c0 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\WolfRPGUtils.hpp"
    ;
    local_b8 = "void __cdecl CheckAndCreateDir(const std::filesystem::path &)";
    FUN_140087af8(local_b0);
    FUN_140052f9e(&local_70,local_b0,L"Failed to create directory: ");
    FUN_140059abc(local_90);
    FUN_140087b76(local_100,local_90);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_100,&DAT_1401a5720);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14004137b("create_directories",local_90,param_1);
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400876b6 */

void FUN_1400876b6(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined1 local_228 [272];
  undefined1 local_118 [56];
  undefined8 local_e0;
  char *local_d8;
  char *local_d0;
  undefined1 local_c8 [32];
  undefined8 local_a8;
  int local_a0;
  undefined8 ***local_88 [2];
  undefined8 local_78;
  ulonglong local_70;
  undefined8 ***local_68 [3];
  ulonglong local_50;
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140075fec(param_1 + 1,local_88);
  ppppuVar3 = local_88;
  if (7 < local_70) {
    ppppuVar3 = (undefined8 ****)local_88[0];
  }
  FUN_14000ffc0(&DAT_1401cc780,ppppuVar3,local_78);
  FUN_14007dcb3(local_68,param_2,local_88);
  FUN_140087a7e(local_68,".json");
  FUN_140007025();
  local_a8 = 0xffff00000000;
  ppppuVar3 = local_68;
  if (7 < local_50) {
    ppppuVar3 = (undefined8 ****)local_68[0];
  }
  local_a0 = FUN_1400dcbb0(ppppuVar3,local_228,3,0xffffffff);
  FUN_140007276(&local_a8,local_a0,local_228);
  iVar2 = local_a0;
  local_40 = FUN_140007025();
  local_48[0] = iVar2;
  iVar1 = (int)local_a8;
  if ((int)local_a8 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",local_48,local_68);
    }
  }
  else {
    FUN_140007025();
    if (iVar1 != 1) {
      FUN_140057552(local_48,0);
      FUN_140078b7e(local_228,local_68,1,0x40,1);
      FUN_140087e2c(local_228,local_48);
      FUN_140078d3e(local_228);
      (**(code **)(*param_1 + 0x30))(param_1,local_48);
      FUN_14003e690(local_228);
      FUN_1400578a6(local_48);
      FUN_140005690(local_68);
      FUN_140005690(local_88);
      return;
    }
  }
  FUN_14000892c(local_48,local_68);
  local_e0 = 0x1b00000084;
  local_d8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\WolfDataBase.hpp"
  ;
  local_d0 = "virtual void __cdecl WolfDataBase::Patch(const std::filesystem::path &)";
  FUN_140087af8(local_c8);
  FUN_140052f9e(&local_a8,local_c8,L"Patch file not found: ");
  FUN_140059abc(local_228);
  FUN_140087b76(local_118,local_228);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_118,&DAT_1401a5720);
}


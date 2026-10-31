/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140086930 */

void FUN_140086930(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  longlong lVar4;
  undefined1 local_288 [272];
  undefined1 local_178 [56];
  undefined8 local_140;
  char *local_138;
  char *local_130;
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined8 ***local_b8 [3];
  ulonglong local_a0;
  undefined8 local_98;
  int local_90;
  longlong local_78;
  undefined8 local_70;
  int local_68 [2];
  undefined8 local_60;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar4 = *(longlong *)(param_1 + 0x60);
  local_78 = *(longlong *)(param_1 + 0x68);
  local_70 = param_2;
  while( true ) {
    if (lVar4 == local_78) {
      return;
    }
    FUN_14000892c(local_108,lVar4 + 0x28);
    FUN_14008ddee(local_288,local_108);
    local_c8 = L"{}_{}";
    local_c0 = 5;
    FUN_14008dd6f(local_128,&local_c8,lVar4 + 4,local_288);
    FUN_140005242(local_288);
    FUN_14000550c(local_288,local_128,0);
    FUN_14007dcb3(local_b8,local_70,local_288);
    FUN_140005690(local_288);
    FUN_140087a7e(local_b8,".json");
    FUN_140007025();
    local_98 = 0xffff00000000;
    ppppuVar3 = local_b8;
    if (7 < local_a0) {
      ppppuVar3 = (undefined8 ****)local_b8[0];
    }
    local_90 = FUN_1400dcbb0(ppppuVar3,local_288,3,0xffffffff);
    FUN_140007276(&local_98,local_90,local_288);
    iVar2 = local_90;
    local_60 = FUN_140007025();
    local_68[0] = iVar2;
    iVar1 = (int)local_98;
    if ((int)local_98 == 0) break;
    FUN_140007025();
    if (iVar1 == 1) goto LAB_140086b51;
    FUN_140078b7e(local_288,local_b8,1,0x40,1);
    FUN_140057552(local_68,0);
    FUN_140087e2c(local_288,local_68);
    FUN_140078d3e(local_288);
    FUN_140097322(lVar4,local_68);
    FUN_1400578a6(local_68);
    FUN_14003e690(local_288);
    FUN_140005690(local_b8);
    FUN_140005242(local_128);
    lVar4 = lVar4 + 0xde0;
  }
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14004137b("exists",local_68,local_b8);
  }
LAB_140086b51:
  FUN_14000892c(local_68,local_b8);
  local_140 = 0x1c0000015f;
  local_138 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
  ;
  local_130 = "virtual void __cdecl CommonEvents::Patch(const std::filesystem::path &)";
  FUN_140087af8(local_e8);
  FUN_140052f9e(&local_98,local_e8,L"Patch file not found: ");
  FUN_140059abc(local_288);
  FUN_140087b76(local_178,local_288);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_178,&DAT_1401a5720);
}


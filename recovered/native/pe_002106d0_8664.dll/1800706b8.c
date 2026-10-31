/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800706b8 */

void FUN_1800706b8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined1 local_218 [272];
  undefined1 local_108 [56];
  undefined8 local_d0;
  char *local_c8;
  char *local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
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
  FUN_18006a9f0(param_1 + 1,local_88);
  ppppuVar3 = local_88;
  if (7 < local_70) {
    ppppuVar3 = (undefined8 ****)local_88[0];
  }
  FUN_180004488(&DAT_180417b78,ppppuVar3,local_78);
  FUN_180001c90(local_68,param_2,local_88);
  FUN_18007e6e6(local_68,".json");
  FUN_180002218();
  local_a8 = 0xffff00000000;
  ppppuVar3 = local_68;
  if (7 < local_50) {
    ppppuVar3 = (undefined8 ****)local_68[0];
  }
  local_a0 = FUN_18023a250(ppppuVar3,local_218,3,0xffffffff);
  FUN_1800024e2(&local_a8,local_a0,local_218);
  iVar2 = local_a0;
  local_40 = FUN_180002218();
  local_48[0] = iVar2;
  iVar1 = (int)local_a8;
  if ((int)local_a8 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18000219a("exists",local_48,local_68);
    }
  }
  else {
    FUN_180002218();
    if (iVar1 != 1) {
      FUN_180081664(local_48,0);
      FUN_1800816ae(local_218,local_68,1,0x40,1);
      FUN_180081705(local_218,local_48);
      FUN_180081858(local_218);
      (**(code **)(*param_1 + 0x30))(param_1,local_48);
      FUN_1800818a2(local_218);
      FUN_18007ff6e(local_48);
      FUN_180001e4c(local_68);
      FUN_180001e4c(local_88);
      return;
    }
  }
  FUN_18000358a(local_48,local_68);
  local_d0 = 0x4600000084;
  local_c8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\WolfDataBase.hpp"
  ;
  local_c0 = "virtual void __cdecl WolfDataBase::Patch(const std::filesystem::path &)";
  FUN_18008148e(&local_a8);
  local_b8 = L"{}Patch file not found: {}";
  local_b0 = 0x1a;
  FUN_180081409(local_218,&local_b8,&local_a8,local_48);
  FUN_18008150c(local_108,local_218);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_108,&DAT_1803a63b0);
}


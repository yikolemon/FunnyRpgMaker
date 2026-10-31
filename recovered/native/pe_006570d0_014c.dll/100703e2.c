/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100703e2 */

void FUN_100703e2(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  undefined1 auStack_188 [4];
  int *local_184;
  int local_180 [7];
  undefined4 ***local_164 [5];
  uint local_150;
  wchar_t *local_14c;
  undefined4 uStack_148;
  undefined4 ***local_144 [4];
  undefined4 local_134;
  uint local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_114;
  undefined4 local_110;
  char *local_10c;
  char *local_108;
  undefined1 local_104 [36];
  undefined1 local_e0 [184];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_188;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c2800;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_1006aa34(local_144);
  local_18 = 0;
  ppppuVar3 = local_144;
  if (7 < local_130) {
    ppppuVar3 = (undefined4 ****)local_144[0];
  }
  FUN_10004664(ppppuVar3,local_134);
  FUN_10001cfb(local_164,param_1,local_144);
  local_18 = 1;
  FUN_1007da60(".json");
  FUN_10002303();
  local_180[0] = 0;
  local_180[1] = 0xffff;
  ppppuVar3 = local_164;
  if (7 < local_150) {
    ppppuVar3 = (undefined4 ****)local_164[0];
  }
  local_180[2] = FUN_10228d20(ppppuVar3,local_e0,3,0xffffffff);
  FUN_100025ec(local_180[2],local_e0);
  iVar2 = local_180[2];
  local_128 = FUN_10002303();
  iVar1 = local_180[0];
  local_12c = iVar2;
  if (local_180[0] == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1000227a();
    }
  }
  else {
    FUN_10002303();
    if (iVar1 != 1) {
      FUN_10080804(0);
      local_18 = 5;
      FUN_10080870(local_164,1,0x40,1);
      local_18 = 6;
      FUN_100808f9(local_e0,local_180);
      FUN_10080aea();
      (**(code **)(*local_184 + 0x18))(local_180);
      local_18 = 0xffffffff;
      FUN_10080b20();
      FUN_1007f222();
      FUN_10001f04();
      FUN_10001f04();
      ExceptionList = local_20;
      return;
    }
  }
  FUN_10003728(local_164);
  local_18 = 2;
  local_114 = 0x84;
  local_110 = 0x46;
  local_10c = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\WolfDataBase.hpp"
  ;
  local_108 = "virtual void __thiscall WolfDataBase::Patch(const std::filesystem::path &)";
  FUN_10080602(&local_12c,&local_114);
  local_18 = 3;
  local_14c = L"{}Patch file not found: {}";
  uStack_148 = 0x1a;
  FUN_100805a1(local_e0,0x1a10356350,&local_12c,local_180);
  local_18 = 4;
  FUN_1008069c(local_e0);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_104,&DAT_10367ca8);
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100991f4 */

void __thiscall FUN_100991f4(int param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 local_90 [36];
  undefined4 local_6c;
  undefined4 local_68;
  char *local_64;
  char *local_60;
  undefined1 local_5c [24];
  undefined1 local_44 [24];
  wchar_t *local_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_90;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3ba0;
  local_1c = ExceptionList;
  local_24 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) * -0x55555555;
  uVar2 = *param_3;
  if (local_24 < uVar2 || local_24 - uVar2 == 0) {
    local_6c = 0x194;
    local_68 = 0x5b;
    local_64 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Command.hpp"
    ;
    local_60 = 
    "virtual void __thiscall Command::Command::SetText(const tString &, const uint32_t &)";
    ExceptionList = &local_1c;
    FUN_10080602(local_5c,&local_6c);
    local_14 = 0;
    local_2c = L"{}setText({}, {}) index out of range (size: {})";
    uStack_28 = 0x2f;
    FUN_10099fbc(local_44,0x2f10356ee6,local_5c,param_2,param_3,&local_24);
    local_14 = 1;
    FUN_1008069c(local_44);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_90,&DAT_10367ca8);
  }
  if ((undefined4 *)(*(int *)(param_1 + 0x14) + uVar2 * 0x18) != param_2) {
    puVar1 = param_2 + 4;
    if (7 < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    ExceptionList = &local_1c;
    local_20 = local_90;
    FUN_10004664(param_2,*puVar1);
    ExceptionList = local_1c;
  }
  return;
}


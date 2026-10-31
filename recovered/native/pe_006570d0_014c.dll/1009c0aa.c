/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009c0aa */

void __fastcall FUN_1009c0aa(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_ac [36];
  undefined4 local_88;
  undefined4 local_84;
  char *local_80;
  char *local_7c;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  char *local_48;
  undefined4 uStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_ac;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3d70;
  local_1c = ExceptionList;
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = &local_1c;
  local_2c = uVar1;
  local_24 = param_1;
  local_28 = FUN_100f578c(uVar1);
  local_60[0] = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  FUN_1007d974(local_28,local_60);
  local_14 = 0;
  local_40 = FUN_100f6eec(*(undefined4 *)(local_24 + 0x108),local_38,uVar1,local_28);
  if (0 < local_40) {
    FUN_10077646(local_40,local_60);
    local_24 = local_24 + 0x38;
    FUN_1009c41c();
    FUN_1008b9b2(&local_2c);
    FUN_1008b9b2(&local_40);
    local_3c = local_34;
    iVar2 = local_38;
    if (local_38 != local_34) {
      do {
        local_28 = iVar2;
        FUN_1007e5fc(iVar2);
        iVar2 = local_28 + 1;
      } while (iVar2 != local_3c);
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
    ExceptionList = local_1c;
    return;
  }
  local_88 = 0xc9;
  local_84 = 0x52;
  local_80 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
  ;
  local_7c = "void __thiscall FileCoder::Pack(void)";
  FUN_10072232(local_78,&local_88);
  local_14 = 1;
  local_48 = "{}LZ4 compression failed. Data size: {}";
  uStack_44 = 0x27;
  FUN_1008abf0(local_60,0x271032fa5c,local_78,&local_2c);
  local_14 = 2;
  FUN_1006f6d8(local_60);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_ac,&DAT_10367ca8);
}


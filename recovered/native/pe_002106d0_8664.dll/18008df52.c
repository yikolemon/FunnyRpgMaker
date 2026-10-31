/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008df52 */

void FUN_18008df52(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  longlong lVar4;
  undefined8 in_stack_fffffffffffffd78;
  undefined4 uVar5;
  undefined1 local_278 [272];
  undefined1 local_168 [56];
  undefined8 local_130;
  char *local_128;
  char *local_120;
  undefined1 local_118 [32];
  wchar_t *local_f8;
  undefined8 local_f0;
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
    uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
    if (lVar4 == local_78) {
      return;
    }
    FUN_18000358a(local_118,lVar4 + 0x28);
    FUN_18008f640(local_278,local_118);
    local_c8 = L"{}_{}";
    local_c0 = 5;
    FUN_18008f5c1(local_e8,&local_c8,lVar4 + 4,local_278);
    FUN_1800010ec(local_278);
    FUN_18006a842(local_278,local_e8,0);
    FUN_180001c90(local_b8,local_70,local_278);
    FUN_180001e4c(local_278);
    FUN_18007e6e6(local_b8,".json");
    FUN_180002218();
    local_98 = 0xffff00000000;
    ppppuVar3 = local_b8;
    if (7 < local_a0) {
      ppppuVar3 = (undefined8 ****)local_b8[0];
    }
    local_90 = FUN_18023a250(ppppuVar3,local_278,3,0xffffffff);
    FUN_1800024e2(&local_98,local_90,local_278);
    iVar2 = local_90;
    local_60 = FUN_180002218();
    local_68[0] = iVar2;
    iVar1 = (int)local_98;
    if ((int)local_98 == 0) break;
    FUN_180002218();
    if (iVar1 == 1) goto LAB_18008e17e;
    in_stack_fffffffffffffd78 = CONCAT44(uVar5,1);
    FUN_1800816ae(local_278,local_b8,1,0x40,in_stack_fffffffffffffd78);
    FUN_180081664(local_68,0);
    FUN_180081705(local_278,local_68);
    FUN_180081858(local_278);
    FUN_180096822(lVar4,local_68);
    FUN_18007ff6e(local_68);
    FUN_1800818a2(local_278);
    FUN_180001e4c(local_b8);
    FUN_1800010ec(local_e8);
    lVar4 = lVar4 + 0xde0;
  }
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18000219a("exists",local_68,local_b8);
  }
LAB_18008e17e:
  FUN_18000358a(local_68,local_b8);
  local_130 = 0x5d00000164;
  local_128 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
  ;
  local_120 = "virtual void __cdecl CommonEvents::Patch(const std::filesystem::path &)";
  FUN_18008148e(&local_98);
  local_f8 = L"{}Patch file not found for CommonEvent ID {}: {}";
  local_f0 = 0x30;
  FUN_180096789(local_278,&local_f8,&local_98,lVar4 + 4,local_68);
  FUN_18008150c(local_168,local_278);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_168,&DAT_1803a63b0);
}


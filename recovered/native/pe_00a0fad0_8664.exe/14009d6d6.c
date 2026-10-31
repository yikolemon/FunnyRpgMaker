/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009d6d6 */

void FUN_14009d6d6(longlong param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_148 [56];
  undefined8 local_110;
  char *local_108;
  char *local_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if ((ulonglong)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 5) <=
      (ulonglong)*param_3) {
    FUN_140079b6f(local_b8);
    local_110 = 0x1b00000194;
    local_108 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Command.hpp"
    ;
    local_100 = "virtual void __cdecl Command::Command::SetText(const tString &, const uint32_t &)";
    FUN_140087af8(local_38);
    FUN_140052f9e(local_58,local_38,L"setText(");
    FUN_140080251(local_78,local_58,param_2);
    FUN_140052f9e(local_98,local_78,&DAT_140174400);
    FUN_140059abc(local_d8);
    FUN_140052f9e(local_f8,local_d8,L") out of range");
    FUN_140087b76(local_148,local_f8);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_148,&DAT_1401a5720);
  }
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)*param_3 * 0x20);
  if (puVar2 != param_2) {
    puVar1 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_14000ffc0(puVar2,param_2,*puVar1);
    return;
  }
  return;
}


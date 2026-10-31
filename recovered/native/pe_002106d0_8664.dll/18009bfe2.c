/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009bfe2 */

void FUN_18009bfe2(longlong param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_c8 [56];
  undefined8 local_90;
  char *local_88;
  char *local_80;
  wchar_t *local_78;
  undefined8 local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28 [2];
  
  local_28[1] = 0xfffffffffffffffe;
  local_28[0] = *(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 5;
  if (local_28[0] <= *param_3) {
    local_90 = 0x5b00000194;
    local_88 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Command.hpp"
    ;
    local_80 = "virtual void __cdecl Command::Command::SetText(const tString &, const uint32_t &)";
    FUN_18008148e(local_48);
    local_78 = L"{}setText({}, {}) index out of range (size: {})";
    local_70 = 0x2f;
    FUN_18009cd76(local_68,&local_78,local_48,param_2,param_3,local_28);
    FUN_18008150c(local_c8,local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_c8,&DAT_1803a63b0);
  }
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)*param_3 * 0x20);
  if (puVar2 != param_2) {
    puVar1 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_180004488(puVar2,param_2,*puVar1);
    return;
  }
  return;
}


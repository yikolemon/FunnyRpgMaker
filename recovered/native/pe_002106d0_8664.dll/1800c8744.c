/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c8744 */

undefined8 FUN_1800c8744(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  HANDLE pvVar1;
  wchar_t *pwVar2;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_40;
  int local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    pwVar2 = L"Original address is nullptr";
  }
  else {
    local_30 = 0;
    if (param_4 == (longlong *)0x0) {
      param_4 = &local_30;
    }
    FUN_1800fbb30();
    pvVar1 = GetCurrentThread();
    FUN_1800fc211(pvVar1);
    *param_4 = param_2;
    local_34 = FUN_1800fc2f7(param_4,param_3);
    if (local_34 != 0) {
      *param_4 = 0;
      local_48 = L"DetourAttach ERROR: {}";
      local_40 = 0x16;
      FUN_1800c8822(param_1,&local_48,&local_34);
      goto LAB_1800c87f3;
    }
    FUN_1800fbdff();
    pwVar2 = L"";
  }
  FUN_180001254(param_1,pwVar2);
LAB_1800c87f3:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}


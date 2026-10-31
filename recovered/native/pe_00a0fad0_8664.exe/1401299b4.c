/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401299b4 */

void FUN_1401299b4(HMODULE param_1,undefined8 param_2,ulonglong param_3)

{
  DWORD DVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [8];
  longlong local_280;
  longlong local_278;
  char local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 local_250;
  ulonglong local_248;
  undefined8 local_240;
  undefined1 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_2a8;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_140113e1c(DVar1);
  }
  else {
    local_240 = 0;
    local_238 = 0;
    local_260 = param_2;
    local_258 = param_3 & 0xffffffff;
    local_250 = param_2;
    local_248 = param_3 & 0xffffffff;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_280,(__crt_locale_pointers *)0x0);
    uVar3 = 0xfde9;
    if (*(int *)(local_278 + 0xc) == 0xfde9) {
      if (local_268 != '\0') {
        *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVar2 = FUN_140121cc8();
      if (iVar2 == 0) {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_140108714(local_228,&local_260,local_288,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_2a8);
}


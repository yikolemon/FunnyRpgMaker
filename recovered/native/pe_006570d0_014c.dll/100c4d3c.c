/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c4d3c */

/* WARNING: Type propagation algorithm not settling */

wchar_t * FUN_100c4d3c(wchar_t *param_1,int param_2,undefined4 param_3,wchar_t *param_4)

{
  wchar_t *local_34;
  undefined8 local_30;
  int *local_28;
  wchar_t *local_24;
  undefined4 uStack_20;
  int local_1c [3];
  
  local_1c[2] = DAT_10388d00 ^ (uint)&local_34;
  if (param_2 == 0) {
    local_34 = L"Original address is nullptr";
  }
  else {
    local_1c[1] = 0;
    if (param_4 == (wchar_t *)0x0) {
      param_4 = (wchar_t *)(local_1c + 1);
    }
    FUN_100f7787();
    local_34 = GetCurrentThread();
    FUN_100f7dc7();
    *(int *)param_4 = param_2;
    local_30 = CONCAT44(local_30._4_4_,param_3);
    local_34 = param_4;
    local_1c[0] = FUN_100f7ecb();
    if (local_1c[0] != 0) {
      param_4[0] = L'\0';
      param_4[1] = L'\0';
      local_24 = L"DetourAttach ERROR: {}";
      uStack_20 = 0x16;
      local_30 = 0x1610356386;
      local_28 = local_1c;
      local_34 = param_1;
      FUN_100c4e18();
      goto LAB_100c4df3;
    }
    FUN_100f7a07();
    local_34 = L"";
  }
  FUN_100012b0();
LAB_100c4df3:
  if (DAT_10388d00 == (local_1c[2] ^ (uint)&local_34)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


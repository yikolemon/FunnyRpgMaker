/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ce8ed */

uint * FUN_100ce8ed(HMODULE param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_4c [4];
  uint *local_48;
  int local_44;
  uint *local_40;
  HMODULE local_3c;
  int *local_38;
  uint local_34;
  uint *local_30;
  int local_2c;
  undefined1 *local_28;
  void *local_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined4 local_14;
  
  local_28 = auStack_4c;
  local_14 = 0xffffffff;
  local_18 = &DAT_10375ecc;
  local_1c = &LAB_10259150;
  local_20 = ExceptionList;
  local_3c = param_1;
  ExceptionList = &local_20;
  puVar1 = auStack_4c;
  if (param_1 == (HMODULE)0x0) {
    local_3c = GetModuleHandleW((LPCWSTR)0x0);
    puVar1 = local_28;
  }
  local_28 = puVar1;
  local_14 = 0;
  if ((short)local_3c->unused == 0x5a4d) {
    local_38 = (int *)((int)&local_3c->unused + local_3c[0xf].unused);
    if (*local_38 == 0x4550) {
      if ((short)local_38[5] == 0) {
        local_14 = 0;
        SetLastError(0xc0);
        local_40 = (uint *)0x0;
      }
      else {
        local_44 = (int)local_38 + *(ushort *)(local_38 + 5) + 0x18;
        for (local_34 = 0; local_34 < *(ushort *)((int)local_38 + 6); local_34 = local_34 + 1) {
          local_14 = 0;
          iVar2 = _strcmp((char *)(local_44 + local_34 * 0x28),".detour");
          if (iVar2 == 0) {
            if ((*(int *)(local_44 + 0xc + local_34 * 0x28) == 0) ||
               (*(int *)(local_44 + 0x10 + local_34 * 0x28) == 0)) {
              local_2c = 3;
            }
            else {
              local_48 = (uint *)((int)&local_3c->unused +
                                 *(int *)(local_44 + 0xc + local_34 * 0x28));
              local_2c = 3;
              local_30 = local_48;
              if ((0x3f < *local_48) && (local_48[1] == 0x727444)) {
                if (local_48[2] == 0) {
                  local_48[2] = *local_48;
                }
                local_14 = 0;
                SetLastError(0);
                local_40 = local_30;
                local_2c = 1;
              }
            }
            goto code_r0x100ceb09;
          }
        }
        local_2c = 3;
code_r0x100ceb09:
        if (local_2c == 3) {
          local_14 = 0;
          SetLastError(0xc0);
          local_40 = (uint *)0x0;
        }
      }
    }
    else {
      local_14 = 0;
      SetLastError(0xbf);
      local_40 = (uint *)0x0;
    }
  }
  else {
    SetLastError(0xc1);
    local_40 = (uint *)0x0;
  }
  ExceptionList = local_20;
  return local_40;
}


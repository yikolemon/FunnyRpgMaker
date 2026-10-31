/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d1da1 */

uint * FUN_1800d1da1(HMODULE param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint *local_38;
  HMODULE local_30;
  int local_14;
  
  local_30 = param_1;
  if (param_1 == (HMODULE)0x0) {
    local_30 = GetModuleHandleW((LPCWSTR)0x0);
  }
  if ((short)local_30->unused == 0x5a4d) {
    piVar4 = (int *)((longlong)&local_30->unused + (longlong)local_30[0xf].unused);
    if (*piVar4 == 0x4550) {
      if ((short)piVar4[5] == 0) {
        SetLastError(0xc0);
        local_38 = (uint *)0x0;
      }
      else {
        uVar1 = *(ushort *)(piVar4 + 5);
        for (uVar3 = 0; uVar3 < *(ushort *)((longlong)piVar4 + 6); uVar3 = uVar3 + 1) {
          iVar2 = strcmp((char *)((longlong)piVar4 +
                                 (ulonglong)uVar3 * 0x28 + (ulonglong)uVar1 + 0x18),".detour");
          if (iVar2 == 0) {
            if ((*(int *)((longlong)piVar4 + (ulonglong)uVar3 * 0x28 + (ulonglong)uVar1 + 0x24) == 0
                ) || (*(int *)((longlong)piVar4 + (ulonglong)uVar3 * 0x28 + (ulonglong)uVar1 + 0x28)
                      == 0)) {
              local_14 = 3;
            }
            else {
              puVar5 = (uint *)((longlong)&local_30->unused +
                               (ulonglong)
                               *(uint *)((longlong)piVar4 +
                                        (ulonglong)uVar3 * 0x28 + (ulonglong)uVar1 + 0x24));
              local_14 = 3;
              if ((0x3f < *puVar5) && (puVar5[1] == 0x727444)) {
                if (puVar5[2] == 0) {
                  puVar5[2] = *puVar5;
                }
                SetLastError(0);
                local_14 = 1;
                local_38 = puVar5;
              }
            }
            goto code_r0x0001800d1f83;
          }
        }
        local_14 = 3;
code_r0x0001800d1f83:
        if (local_14 == 3) {
          SetLastError(0xc0);
          local_38 = (uint *)0x0;
        }
      }
    }
    else {
      SetLastError(0xbf);
      local_38 = (uint *)0x0;
    }
  }
  else {
    SetLastError(0xc1);
    local_38 = (uint *)0x0;
  }
  return local_38;
}


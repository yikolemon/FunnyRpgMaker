/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c5334 */

undefined4 FUN_100c5334(undefined4 param_1,LPCWSTR param_2)

{
  int iVar1;
  HMODULE pHVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_48 [8];
  int local_40;
  int local_3c;
  uint local_38;
  HMODULE local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c7d80;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100c5498();
  local_14 = 0;
  pHVar2 = GetModuleHandleW(param_2);
  if ((((((pHVar2 != (HMODULE)0x0) && ((short)pHVar2->unused == 0x5a4d)) &&
        (iVar1 = pHVar2[0xf].unused, *(int *)((int)&pHVar2->unused + iVar1) == 0x4550)) &&
       ((local_24 = *(int *)((int)&pHVar2[0x1e].unused + iVar1), local_24 != 0 &&
        (0x27 < *(uint *)((int)&pHVar2[0x1f].unused + iVar1))))) &&
      ((uVar4 = *(uint *)((int)&pHVar2[6].unused + local_24), uVar4 != 0 &&
       ((local_30 = *(int *)((int)&pHVar2[8].unused + local_24), local_30 != 0 &&
        (local_2c = *(int *)((int)&pHVar2[9].unused + local_24), local_2c != 0)))))) &&
     (local_28 = *(int *)((int)&pHVar2[7].unused + local_24), local_28 != 0)) {
    local_30 = (int)&pHVar2->unused + local_30;
    local_2c = (int)&pHVar2->unused + local_2c;
    local_28 = (int)&pHVar2->unused + local_28;
    local_34 = pHVar2;
    for (local_38 = 0; local_38 < uVar4; local_38 = local_38 + 1) {
      local_40 = (int)&pHVar2->unused + *(int *)(local_30 + local_38 * 4);
      uVar3 = (uint)*(ushort *)(local_2c + local_38 * 2);
      if (uVar3 < *(uint *)((int)&pHVar2[5].unused + local_24)) {
        local_3c = (int)&pHVar2->unused + *(int *)(local_28 + uVar3 * 4);
        local_14 = 0;
        FUN_100c78ae(local_48,&local_40,&local_3c);
        uVar4 = *(uint *)((int)&local_34[6].unused + local_24);
        pHVar2 = local_34;
      }
    }
  }
  ExceptionList = local_1c;
  return param_1;
}


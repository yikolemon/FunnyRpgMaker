/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049c118 */

void FUN_0049c118(undefined4 *param_1,undefined4 *param_2)

{
  short *psVar1;
  short sVar2;
  ushort *puVar3;
  __acrt_ptd *p_Var4;
  LPCWSTR pWVar5;
  int iVar6;
  LPVOID pvVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  short *local_14;
  int local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  if (param_2 == (undefined4 *)0x0) {
    p_Var4 = FUN_0048f66d();
    *(undefined4 *)p_Var4 = 0x16;
    FUN_00495c88();
  }
  else {
    *param_2 = 0;
    puVar3 = (ushort *)*param_1;
    local_28 = (int *)0x0;
    local_24 = (int *)0x0;
    local_20 = 0;
    piVar12 = local_28;
    while (local_28 = piVar12, puVar3 != (ushort *)0x0) {
      local_10 = 0x3f002a;
      local_c = 0;
      pWVar5 = (LPCWSTR)FUN_0049aae0(puVar3,(ushort *)&local_10);
      if (pWVar5 == (LPCWSTR)0x0) {
        iVar6 = FUN_0049c387((short *)*param_1,0,0,(int *)&local_28);
      }
      else {
        iVar6 = FUN_0049c43b((LPCWSTR)*param_1,pWVar5,(int *)&local_28);
      }
      if (iVar6 != 0) goto LAB_0049c22a;
      param_1 = param_1 + 1;
      piVar12 = local_28;
      puVar3 = (ushort *)*param_1;
    }
    uVar10 = ((int)local_24 - (int)piVar12 >> 2) + 1;
    local_18 = 0;
    for (piVar11 = piVar12; piVar11 != local_24; piVar11 = piVar11 + 1) {
      psVar8 = (short *)*piVar11;
      local_14 = psVar8 + 1;
      do {
        sVar2 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar2 != 0);
      local_18 = local_18 + 1 + ((int)psVar8 - (int)local_14 >> 1);
    }
    pvVar7 = FUN_0048ef72(uVar10,local_18,2);
    piVar11 = local_24;
    if (pvVar7 == (LPVOID)0x0) {
      FUN_00495f00((LPVOID)0x0);
LAB_0049c22a:
      FUN_0049c2db(&local_28);
    }
    else {
      psVar8 = (short *)((int)pvVar7 + uVar10 * 4);
      local_14 = psVar8;
      if (piVar12 != local_24) {
        local_10 = (int)pvVar7 - (int)piVar12;
        do {
          psVar9 = (short *)*piVar12;
          psVar1 = psVar9 + 1;
          do {
            sVar2 = *psVar9;
            psVar9 = psVar9 + 1;
          } while (sVar2 != 0);
          local_1c = ((int)psVar9 - (int)psVar1 >> 1) + 1;
          iVar6 = FUN_0049a930(local_14,local_18 - ((int)local_14 - (int)psVar8 >> 1),*piVar12,
                               local_1c);
          if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(short **)(local_10 + (int)piVar12) = local_14;
          piVar12 = piVar12 + 1;
          local_14 = local_14 + local_1c;
        } while (piVar12 != piVar11);
      }
      *param_2 = pvVar7;
      FUN_00495f00((LPVOID)0x0);
      FUN_0049c2db(&local_28);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}


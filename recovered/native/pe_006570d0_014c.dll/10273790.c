/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10273790 */

undefined4 FUN_10273790(PBYTE param_1)

{
  PBYTE pBVar1;
  uint *puVar2;
  int iVar3;
  PIMAGE_SECTION_HEADER p_Var4;
  SIZE_T SVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  bool bVar9;
  uint uStack_5c;
  _MEMORY_BASIC_INFORMATION local_4c;
  uint *local_30;
  PBYTE local_2c;
  uint *local_28;
  uint local_24;
  PBYTE local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_102592b0;
  local_14 = ExceptionList;
  local_c = DAT_10388d00 ^ 0x10382e40;
  uStack_5c = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_1c = (undefined1 *)&uStack_5c;
  pBVar1 = *(PBYTE *)(param_1 + 8);
  if ((((uint)pBVar1 & 3) != 0) ||
     ((local_20 = *(PBYTE *)((int)Self + 8), local_20 <= pBVar1 &&
      (pBVar1 < *(PBYTE *)((int)Self + 4))))) {
    return 0;
  }
  local_24 = *(uint *)(param_1 + 0xc);
  if (local_24 == 0xffffffff) {
    return 1;
  }
  bVar9 = false;
  uVar6 = 0;
  do {
    local_28 = (uint *)(pBVar1 + uVar6 * 0xc);
    if ((*local_28 != 0xffffffff) && (uVar6 <= *local_28)) {
      return 0;
    }
    if (local_28[1] != 0) {
      bVar9 = true;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 <= local_24);
  if (bVar9) {
    if (*(PBYTE *)(param_1 + -8) < local_20) {
      return 0;
    }
    if (param_1 <= *(PBYTE *)(param_1 + -8)) {
      return 0;
    }
  }
  puVar8 = (uint *)((uint)pBVar1 & 0xfffff000);
  for (iVar7 = 0; ExceptionList = &local_14, local_30 = puVar8, local_2c = pBVar1,
      puVar2 = &uStack_5c, iVar7 < DAT_103a50d8; iVar7 = iVar7 + 1) {
    local_28 = (uint *)(&DAT_103a5058)[iVar7 * 2];
    local_20 = (PBYTE)(&DAT_103a505c)[iVar7 * 2];
    if (local_28 == puVar8) {
      local_8 = 0;
      iVar3 = FUN_10273b20(local_20);
      puVar2 = (uint *)local_1c;
      if (((iVar3 != 0) &&
          (iVar3 = FUN_102736c0(local_20,pBVar1,local_24), puVar2 = (uint *)local_1c, iVar3 != 0))
         && (p_Var4 = __FindPESection(local_20,*(int *)(param_1 + 4) - (int)local_20),
            puVar2 = (uint *)local_1c, p_Var4 != (PIMAGE_SECTION_HEADER)0x0)) {
        if (iVar7 < 1) {
          ExceptionList = local_14;
          return 1;
        }
        LOCK();
        UNLOCK();
        if (DAT_103a50dc != 0) {
          DAT_103a50dc = 1;
          ExceptionList = local_14;
          return 1;
        }
        iVar3 = DAT_103a50d8;
        if ((uint *)(&DAT_103a5058)[iVar7 * 2] == puVar8) goto LAB_1027393b;
        goto joined_r0x102738fe;
      }
      break;
    }
  }
  local_1c = (undefined1 *)puVar2;
  uVar6 = local_24;
  local_8 = 0xfffffffe;
  SVar5 = VirtualQuery(pBVar1,&local_4c,0x1c);
  if (SVar5 == 0) {
    ExceptionList = local_14;
    return 1;
  }
  if (local_4c.Type != 0x1000000) {
    ExceptionList = local_14;
    return 0xffffffff;
  }
  local_28 = local_4c.AllocationBase;
  iVar7 = FUN_10273b20(local_4c.AllocationBase);
  if (iVar7 == 0) {
    ExceptionList = local_14;
    return 0xffffffff;
  }
  if (((byte)local_4c.Protect & 0xcc) != 0) {
    p_Var4 = __FindPESection((PBYTE)local_28,(int)pBVar1 - (int)local_28);
    if (p_Var4 == (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return 0;
    }
    if ((int)p_Var4->Characteristics < 0) {
      ExceptionList = local_14;
      return 0;
    }
  }
  puVar2 = local_28;
  iVar7 = FUN_102736c0(local_28,pBVar1,uVar6);
  if (iVar7 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  p_Var4 = __FindPESection((PBYTE)puVar2,*(int *)(param_1 + 4) - (int)puVar2);
  if (p_Var4 == (PIMAGE_SECTION_HEADER)0x0) {
    ExceptionList = local_14;
    return 0;
  }
  LOCK();
  UNLOCK();
  iVar7 = DAT_103a50d8;
  if (DAT_103a50dc != 0) {
    DAT_103a50dc = 1;
    ExceptionList = local_14;
    return 1;
  }
  for (; (0 < iVar7 && ((uint *)(&DAT_103a5050)[iVar7 * 2] != puVar8)); iVar7 = iVar7 + -1) {
  }
  if (iVar7 == 0) {
    iVar7 = DAT_103a50d8;
    if (0xf < DAT_103a50d8) {
      iVar7 = 0xf;
    }
    iVar3 = 0;
    if (-1 < iVar7) {
      do {
        puVar2 = (uint *)(&DAT_103a5058)[iVar3 * 2];
        pBVar1 = (PBYTE)(&DAT_103a505c)[iVar3 * 2];
        (&DAT_103a5058)[iVar3 * 2] = puVar8;
        (&DAT_103a505c)[iVar3 * 2] = local_4c.AllocationBase;
        iVar3 = iVar3 + 1;
        local_4c.AllocationBase = pBVar1;
        puVar8 = puVar2;
      } while (iVar3 <= iVar7);
    }
    if (DAT_103a50d8 < 0x10) {
      DAT_103a50d8 = DAT_103a50d8 + 1;
    }
  }
  else {
    *(PVOID *)(&DAT_103a5054 + iVar7 * 8) = local_4c.AllocationBase;
  }
  goto LAB_1027396a;
  while (iVar3 = iVar7, (uint *)(&DAT_103a5058)[iVar7 * 2] != puVar8) {
joined_r0x102738fe:
    iVar7 = iVar3 + -1;
    if (iVar7 < 0) goto LAB_10273911;
  }
  local_28 = (uint *)(&DAT_103a5058)[iVar7 * 2];
  local_20 = (PBYTE)(&DAT_103a505c)[iVar7 * 2];
LAB_10273911:
  bVar9 = false;
  if (iVar7 < 0) {
    if (DAT_103a50d8 < 0x10) {
      DAT_103a50d8 = DAT_103a50d8 + 1;
    }
    iVar7 = DAT_103a50d8 + -1;
LAB_1027393b:
    bVar9 = iVar7 < 0;
  }
  if (iVar7 != 0 && !bVar9) {
    iVar3 = 0;
    do {
      puVar8 = (uint *)(&DAT_103a5058)[iVar3 * 2];
      pBVar1 = (PBYTE)(&DAT_103a505c)[iVar3 * 2];
      (&DAT_103a5058)[iVar3 * 2] = local_28;
      (&DAT_103a505c)[iVar3 * 2] = local_20;
      iVar3 = iVar3 + 1;
      local_28 = puVar8;
      local_20 = pBVar1;
    } while (iVar3 <= iVar7);
  }
LAB_1027396a:
  LOCK();
  UNLOCK();
  DAT_103a50dc = 0;
  ExceptionList = local_14;
  return 1;
}


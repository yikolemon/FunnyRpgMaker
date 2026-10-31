/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027571a */

void FUN_1027571a(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int *piVar8;
  uint *puVar9;
  ushort *puVar10;
  bool bVar11;
  undefined1 local_10 [4];
  uint local_c;
  int local_8;
  
  puVar3 = (undefined4 *)FUN_1027534a();
  puVar4 = (undefined4 *)FUN_102753d4();
  local_8 = 0;
  local_c = 0;
  iVar5 = FUN_102753a8(&local_8);
  if ((iVar5 == 0) && (iVar5 = FUN_10275350(&local_c), iVar5 == 0)) {
    puVar7 = DAT_103a5224;
    puVar10 = param_1;
    if (DAT_103a5224 != (ushort *)0x0) {
      do {
        uVar1 = *puVar10;
        bVar11 = uVar1 < *puVar7;
        if (uVar1 != *puVar7) {
LAB_1027579a:
          uVar6 = -(uint)bVar11 | 1;
          goto LAB_1027579f;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar10[1];
        bVar11 = uVar1 < puVar7[1];
        if (uVar1 != puVar7[1]) goto LAB_1027579a;
        puVar7 = puVar7 + 2;
        puVar10 = puVar10 + 2;
      } while (uVar1 != 0);
      uVar6 = 0;
LAB_1027579f:
      if (uVar6 == 0) {
        return;
      }
    }
    puVar7 = param_1;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (uVar1 != 0);
    puVar7 = (ushort *)FUN_10274170(((int)puVar7 - (int)(param_1 + 1) >> 1) * 2 + 2);
    if (puVar7 != (ushort *)0x0) {
      FUN_10274120(DAT_103a5224);
      puVar10 = param_1;
      do {
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
      } while (uVar1 != 0);
      DAT_103a5224 = puVar7;
      iVar5 = FUN_102749e0(puVar7,((int)puVar10 - (int)(param_1 + 1) >> 1) + 1,param_1);
      if (iVar5 != 0) goto LAB_102759a2;
      _memset((void *)*puVar4,0,0x80);
      _memset((void *)puVar4[1],0,0x80);
      _memset((void *)*puVar3,0,0x40);
      _memset((void *)puVar3[1],0,0x40);
      FUN_102756d3(param_1,*puVar4,*puVar3,3);
      iVar5 = 3;
      do {
        if (*param_1 != 0) {
          param_1 = param_1 + 1;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar1 = *param_1;
      puVar7 = param_1 + 1;
      if (uVar1 != 0x2d) {
        puVar7 = param_1;
      }
      local_8 = FUN_10270a7a(puVar7,local_10,10);
      local_8 = local_8 * 0xe10;
      for (; (uVar2 = *puVar7, uVar2 == 0x2b || ((ushort)(uVar2 - 0x30) < 10)); puVar7 = puVar7 + 1)
      {
      }
      if (uVar2 == 0x3a) {
        puVar7 = puVar7 + 1;
        iVar5 = FUN_10270a7a(puVar7,local_10,10);
        local_8 = local_8 + iVar5 * 0x3c;
        uVar2 = *puVar7;
        while ((0x2f < uVar2 && (uVar2 < 0x3a))) {
          puVar7 = puVar7 + 1;
          uVar2 = *puVar7;
        }
        if (uVar2 == 0x3a) {
          puVar7 = puVar7 + 1;
          iVar5 = FUN_10270a7a(puVar7,local_10,10);
          local_8 = local_8 + iVar5;
          uVar2 = *puVar7;
          while ((0x2f < uVar2 && (uVar2 < 0x3a))) {
            puVar7 = puVar7 + 1;
            uVar2 = *puVar7;
          }
        }
      }
      if (uVar1 == 0x2d) {
        local_8 = -local_8;
      }
      local_c = (uint)(*puVar7 != 0);
      if (*puVar7 != 0) {
        FUN_102756d3(puVar7,puVar4[1],puVar3[1],3);
      }
      iVar5 = local_8;
      piVar8 = (int *)FUN_10275344();
      uVar6 = local_c;
      *piVar8 = iVar5;
      puVar9 = (uint *)FUN_10275338();
      *puVar9 = uVar6;
    }
    FUN_10274120(0);
    return;
  }
LAB_102759a2:
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


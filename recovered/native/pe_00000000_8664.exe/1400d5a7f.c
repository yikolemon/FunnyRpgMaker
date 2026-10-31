/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d5a7f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d5a7f(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong **pplVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  longlong *local_a0 [6];
  longlong local_70;
  
  puVar6 = (undefined8 *)FUN_1400d30d4();
  pauVar7 = (undefined1 (*) [16])FUN_140077ab4(0x10);
  *pauVar7 = (undefined1  [16])0x0;
  *(undefined1 (**) [16])(param_1 + 0x48) = pauVar7;
  fVar5 = _UNK_140e82124;
  fVar4 = _DAT_140e82120;
  lVar12 = *(longlong *)(param_1 + 0x68);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(param_1 + 0x60);
  }
  iVar1 = *(int *)(puVar6 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = puVar6[0x11];
    lVar13 = 0;
    do {
      puVar10 = (undefined8 *)(lVar13 + lVar2);
      pplVar11 = local_a0;
      for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pplVar11 = (longlong *)*puVar10;
        puVar10 = puVar10 + 1;
        pplVar11 = pplVar11 + 1;
      }
      fVar15 = (float)*(undefined8 *)(param_1 + 0x10);
      iVar17 = (int)fVar15;
      fVar16 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
      iVar18 = (int)fVar16;
      local_a0[0] = (longlong *)
                    (CONCAT44((int)(fVar16 - fVar5),(int)(fVar15 - fVar4)) &
                     CONCAT44(iVar18 >> 0x1f,iVar17 >> 0x1f) | CONCAT44(iVar18,iVar17));
      local_70 = lVar12;
      iVar17 = (**(code **)(*(longlong *)puVar6[2] + 0x50))
                         ((longlong *)puVar6[2],*puVar6,local_a0,pauVar7);
    } while ((iVar17 < 0) &&
            (bVar14 = (longlong)iVar1 * 0x48 + -0x48 != lVar13, lVar13 = lVar13 + 0x48, bVar14));
  }
  (**(code **)(*(longlong *)puVar6[2] + 0x40))((longlong *)puVar6[2],lVar12,3);
  plVar3 = *(longlong **)*pauVar7;
  if (plVar3 != (longlong *)0x0) {
    uVar8 = FUN_140015326(local_a0);
    (**(code **)(*plVar3 + 0x48))(plVar3,0,&DAT_140e82210,uVar8);
    (**(code **)(*(longlong *)*puVar6 + 0x48))((longlong *)*puVar6,local_a0[0],0,*pauVar7 + 8);
    (**(code **)(*local_a0[0] + 0x10))();
  }
  return;
}


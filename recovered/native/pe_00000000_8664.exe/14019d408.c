/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019d408 */

undefined4 * FUN_14019d408(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  short *psVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  
  puVar8 = (undefined4 *)_malloc_base(0x6a6);
  puVar9 = puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = puVar8 + 1;
    *puVar8 = 1;
    *(undefined2 *)puVar9 = 0;
    puVar13 = (undefined8 *)(param_1 + 0x48);
    FUN_14019ce30(puVar9,0x351,3,PTR_u_LC_COLLATE_140eb4118,&DAT_140edd618,*puVar13);
    ppuVar12 = &PTR_u_LC_COLLATE_140eb4118;
    bVar6 = true;
    do {
      iVar7 = FUN_1401b5460();
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      plVar1 = puVar13 + 4;
      psVar10 = (short *)*puVar13;
      lVar11 = *plVar1 - (longlong)psVar10;
      do {
        sVar2 = *psVar10;
        sVar3 = *(short *)((longlong)psVar10 + lVar11);
        if (sVar2 != sVar3) break;
        psVar10 = psVar10 + 1;
      } while (sVar3 != 0);
      bVar5 = false;
      if (sVar2 == sVar3) {
        bVar5 = bVar6;
      }
      ppuVar12 = ppuVar12 + 3;
      puVar13 = puVar13 + 4;
      FUN_14019ce30(puVar9,0x351,3,*ppuVar12,&DAT_140edd618,*plVar1);
      bVar6 = bVar5;
    } while ((longlong)ppuVar12 < 0x140eb4178);
    if (bVar5) {
      FUN_1401aea30(puVar8);
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1401aea30(*(undefined8 *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1401aea30(*(undefined8 *)(param_1 + 0x30));
        }
      }
      puVar9 = *(undefined4 **)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1401aea30(*(undefined8 *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1401aea30(*(undefined8 *)(param_1 + 0x30));
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 **)(param_1 + 0x38) = puVar8;
      *(undefined4 **)(param_1 + 0x28) = puVar9;
    }
  }
  return puVar9;
}


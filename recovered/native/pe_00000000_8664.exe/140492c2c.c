/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140492c2c */

undefined4 * FUN_140492c2c(longlong param_1)

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
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar8 = (undefined4 *)_malloc_base(0x6a6);
  puVar9 = puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = puVar8 + 1;
    *puVar8 = 1;
    *(undefined2 *)puVar9 = 0;
    puVar13 = (undefined8 *)(param_1 + 0x48);
    FUN_140492654(puVar9,0x351,3,DAT_1405615a8,"error_parse)",*puVar13);
    puVar12 = &DAT_1405615a8;
    bVar6 = true;
    do {
      iVar7 = FUN_1404ab880();
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
      puVar12 = puVar12 + 3;
      puVar13 = puVar13 + 4;
      FUN_140492654(puVar9,0x351,3,*puVar12,"error_parse)",*plVar1);
      bVar6 = bVar5;
    } while ((longlong)puVar12 < 0x140561608);
    if (bVar5) {
      FUN_1404a2310(puVar8);
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1404a2310(*(undefined8 *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1404a2310(*(undefined8 *)(param_1 + 0x30));
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
          FUN_1404a2310(*(undefined8 *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1404a2310(*(undefined8 *)(param_1 + 0x30));
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


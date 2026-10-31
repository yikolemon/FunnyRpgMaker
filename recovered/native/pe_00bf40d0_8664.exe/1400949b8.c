/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400949b8 */

short * FUN_1400949b8(longlong param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  short *psVar7;
  short *psVar8;
  undefined8 uVar9;
  short *psVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  
  psVar7 = _malloc_base(0x6a6);
  psVar8 = psVar7;
  if (psVar7 != (short *)0x0) {
    psVar8 = psVar7 + 2;
    psVar7[0] = 1;
    psVar7[1] = 0;
    *psVar8 = 0;
    puVar13 = (undefined8 *)(param_1 + 0x48);
    FUN_1400943e0(psVar8,0x351,3,PTR_u_LC_COLLATE_14010cdf8);
    ppuVar12 = &PTR_u_LC_COLLATE_14010cdf8;
    bVar6 = true;
    do {
      uVar9 = FUN_1400a6d90(psVar8,0x351,0x14011c980);
      if ((int)uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      psVar10 = (short *)*puVar13;
      lVar11 = puVar13[4] - (longlong)psVar10;
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
      FUN_1400943e0(psVar8,0x351,3,*ppuVar12);
      bVar6 = bVar5;
    } while ((longlong)ppuVar12 < 0x14010ce58);
    if (bVar5) {
      FUN_1400a1290(psVar7);
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FUN_1400a1290(*(LPVOID *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FUN_1400a1290(*(LPVOID *)(param_1 + 0x30));
        }
      }
      psVar8 = *(short **)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FUN_1400a1290(*(LPVOID *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FUN_1400a1290(*(LPVOID *)(param_1 + 0x30));
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(short **)(param_1 + 0x38) = psVar7;
      *(short **)(param_1 + 0x28) = psVar8;
    }
  }
  return psVar8;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018b7f0 */

void FUN_18018b7f0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  
  if (0x800000000000000 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180239790("invalid hash bucket count");
  }
  uVar10 = param_2 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  bVar9 = -((byte)lVar12 ^ 0x3f);
  lVar12 = 1L << (bVar9 & 0x3f);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_180022e2a(param_1 + 0x18,2L << (bVar9 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0x30) = lVar12 + -1;
  *(longlong *)(param_1 + 0x38) = lVar12;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x00018018b86d:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar7;
        uVar10 = FUN_1800dbb7b(plVar7 + 2);
        lVar12 = *(longlong *)(param_1 + 0x18);
        lVar8 = (uVar10 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
        if (*(longlong **)(lVar12 + lVar8) != plVar1) break;
        *(longlong **)(lVar12 + lVar8) = plVar7;
        *(longlong **)(lVar12 + 8 + lVar8) = plVar7;
        plVar7 = plVar2;
      }
      plVar11 = *(longlong **)(lVar12 + 8 + lVar8);
      lVar3 = plVar7[2];
      if (lVar3 != plVar11[2]) break;
      plVar11 = (longlong *)*plVar11;
      if (plVar11 != plVar7) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar11;
        puVar6 = (undefined8 *)plVar11[1];
        *puVar6 = plVar7;
        plVar11[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar12 + 8 + lVar8) = plVar7;
      plVar7 = plVar2;
    }
    do {
      if (*(longlong **)(lVar12 + lVar8) == plVar11) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar11;
        puVar6 = (undefined8 *)plVar11[1];
        *puVar6 = plVar7;
        plVar11[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar12 + lVar8) = plVar7;
        plVar7 = plVar2;
        goto joined_r0x00018018b86d;
      }
      plVar11 = (longlong *)plVar11[1];
    } while (lVar3 != plVar11[2]);
    lVar12 = *plVar11;
    plVar11 = (longlong *)plVar7[1];
    *plVar11 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar12;
    puVar5 = *(undefined8 **)(lVar12 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar12 + 8) = plVar4;
    plVar2[1] = (longlong)plVar11;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar2;
  } while( true );
}


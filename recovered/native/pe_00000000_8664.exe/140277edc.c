/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140277edc */

void FUN_140277edc(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (0x800000000000000 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14044ac60("undClipRect");
  }
  uVar10 = param_2 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  bVar8 = -((byte)lVar12 ^ 0x3f);
  lVar12 = 1L << (bVar8 & 0x3f);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_1402342fa(param_1 + 0x18,2L << (bVar8 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0x30) = lVar12 + -1;
  *(longlong *)(param_1 + 0x38) = lVar12;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000140277f61:
  do {
    while( true ) {
      while( true ) {
        if (plVar6 == plVar1) {
          return;
        }
        plVar3 = plVar6 + 2;
        plVar9 = plVar3;
        if (0xf < (ulonglong)plVar6[5]) {
          plVar9 = (longlong *)plVar6[2];
        }
        plVar2 = (longlong *)*plVar6;
        uVar10 = FUN_14022da8b(plVar9,plVar6[4]);
        lVar12 = *(longlong *)(param_1 + 0x18);
        lVar11 = (uVar10 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
        if (*(longlong **)(lVar12 + lVar11) != plVar1) break;
        *(longlong **)(lVar12 + lVar11) = plVar6;
        *(longlong **)(lVar12 + 8 + lVar11) = plVar6;
        plVar6 = plVar2;
      }
      plVar9 = *(longlong **)(lVar12 + 8 + lVar11);
      cVar7 = FUN_14022cee4(plVar3,plVar9 + 2);
      if (cVar7 == '\0') break;
      plVar9 = (longlong *)*plVar9;
      if (plVar9 != plVar6) {
        plVar3 = (longlong *)plVar6[1];
        *plVar3 = (longlong)plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        *puVar4 = plVar9;
        puVar5 = (undefined8 *)plVar9[1];
        *puVar5 = plVar6;
        plVar9[1] = (longlong)puVar4;
        plVar2[1] = (longlong)plVar3;
        plVar6[1] = (longlong)puVar5;
      }
      *(longlong **)(lVar12 + 8 + lVar11) = plVar6;
      plVar6 = plVar2;
    }
    do {
      if (*(longlong **)(lVar12 + lVar11) == plVar9) {
        plVar3 = (longlong *)plVar6[1];
        *plVar3 = (longlong)plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        *puVar4 = plVar9;
        puVar5 = (undefined8 *)plVar9[1];
        *puVar5 = plVar6;
        plVar9[1] = (longlong)puVar4;
        plVar2[1] = (longlong)plVar3;
        plVar6[1] = (longlong)puVar5;
        *(longlong **)(lVar12 + lVar11) = plVar6;
        plVar6 = plVar2;
        goto joined_r0x000140277f61;
      }
      plVar9 = (longlong *)plVar9[1];
      cVar7 = FUN_14022cee4(plVar3,plVar9 + 2);
    } while (cVar7 == '\0');
    lVar12 = *plVar9;
    plVar3 = (longlong *)plVar6[1];
    *plVar3 = (longlong)plVar2;
    plVar9 = (longlong *)plVar2[1];
    *plVar9 = lVar12;
    puVar4 = *(undefined8 **)(lVar12 + 8);
    *puVar4 = plVar6;
    *(longlong **)(lVar12 + 8) = plVar9;
    plVar2[1] = (longlong)plVar3;
    plVar6[1] = (longlong)puVar4;
    plVar6 = plVar2;
  } while( true );
}


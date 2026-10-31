/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eaff6 */

void FUN_1800eaff6(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  size_t _Size;
  void *_Buf1;
  size_t _Size_00;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  
  if (0x800000000000000 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180239790("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar8 = -((byte)lVar11 ^ 0x3f);
  lVar11 = 1L << (bVar8 & 0x3f);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_180022e2a(param_1 + 0x18,2L << (bVar8 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0x30) = lVar11 + -1;
  *(longlong *)(param_1 + 0x38) = lVar11;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001800eb07b:
  do {
    while( true ) {
      while( true ) {
        if (plVar6 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar6;
        uVar9 = FUN_18001c5bb(plVar6[2],plVar6[3]);
        lVar11 = *(longlong *)(param_1 + 0x18);
        lVar10 = (uVar9 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
        plVar3 = *(longlong **)(lVar11 + lVar10);
        if (plVar3 != plVar1) break;
        *(longlong **)(lVar11 + lVar10) = plVar6;
        *(longlong **)(lVar11 + 8 + lVar10) = plVar6;
        plVar6 = plVar2;
      }
      plVar12 = *(longlong **)(lVar11 + 8 + lVar10);
      _Size = plVar12[3];
      _Buf1 = (void *)plVar6[2];
      _Size_00 = plVar6[3];
      if ((_Size_00 != _Size) ||
         ((_Size != 0 && (iVar7 = memcmp(_Buf1,(void *)plVar12[2],_Size), iVar7 != 0)))) break;
      plVar12 = (longlong *)*plVar12;
      if (plVar12 != plVar6) {
        plVar3 = (longlong *)plVar6[1];
        *plVar3 = (longlong)plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        *puVar4 = plVar12;
        puVar5 = (undefined8 *)plVar12[1];
        *puVar5 = plVar6;
        plVar12[1] = (longlong)puVar4;
        plVar2[1] = (longlong)plVar3;
        plVar6[1] = (longlong)puVar5;
      }
      *(longlong **)(lVar11 + 8 + lVar10) = plVar6;
      plVar6 = plVar2;
    }
    do {
      if (plVar3 == plVar12) {
        plVar3 = (longlong *)plVar6[1];
        *plVar3 = (longlong)plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        *puVar4 = plVar12;
        puVar5 = (undefined8 *)plVar12[1];
        *puVar5 = plVar6;
        plVar12[1] = (longlong)puVar4;
        plVar2[1] = (longlong)plVar3;
        plVar6[1] = (longlong)puVar5;
        *(longlong **)(lVar11 + lVar10) = plVar6;
        plVar6 = plVar2;
        goto joined_r0x0001800eb07b;
      }
      plVar12 = (longlong *)plVar12[1];
    } while ((_Size_00 != plVar12[3]) ||
            ((_Size_00 != 0 && (iVar7 = memcmp(_Buf1,(void *)plVar12[2],_Size_00), iVar7 != 0))));
    lVar11 = *plVar12;
    plVar3 = (longlong *)plVar6[1];
    *plVar3 = (longlong)plVar2;
    plVar12 = (longlong *)plVar2[1];
    *plVar12 = lVar11;
    puVar4 = *(undefined8 **)(lVar11 + 8);
    *puVar4 = plVar6;
    *(longlong **)(lVar11 + 8) = plVar12;
    plVar2[1] = (longlong)plVar3;
    plVar6[1] = (longlong)puVar4;
    plVar6 = plVar2;
  } while( true );
}


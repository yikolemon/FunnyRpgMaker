/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011a618 */

void FUN_14011a618(longlong param_1,ulonglong param_2)

{
  double dVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong local_60;
  longlong local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (0x800000000000000 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140189890("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar8 = -((byte)lVar11 ^ 0x3f);
  lVar11 = 1L << (bVar8 & 0x3f);
  plVar2 = *(longlong **)(param_1 + 8);
  FUN_14001825e(param_1 + 0x18,2L << (bVar8 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x30) = lVar11 + -1;
  *(longlong *)(param_1 + 0x38) = lVar11;
  if ((longlong *)**(longlong **)(param_1 + 8) != plVar2) {
    plVar12 = (longlong *)**(longlong **)(param_1 + 8);
    local_58 = param_1;
    do {
      plVar3 = (longlong *)*plVar12;
      local_60 = ~-(ulonglong)((double)plVar12[2] == 0.0) & plVar12[2];
      uVar9 = FUN_140070a42(&local_60);
      lVar11 = *(longlong *)(param_1 + 0x18);
      lVar7 = (uVar9 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
      if (*(longlong **)(lVar11 + lVar7) == plVar2) {
        *(longlong **)(lVar11 + lVar7) = plVar12;
        *(longlong **)(lVar11 + 8 + lVar7) = plVar12;
      }
      else {
        plVar10 = *(longlong **)(lVar11 + 8 + lVar7);
        dVar1 = (double)plVar12[2];
        if ((dVar1 != (double)plVar10[2]) || (NAN(dVar1) || NAN((double)plVar10[2]))) {
          do {
            if (*(longlong **)(lVar11 + lVar7) == plVar10) {
              plVar4 = (longlong *)plVar12[1];
              *plVar4 = (longlong)plVar3;
              puVar5 = (undefined8 *)plVar3[1];
              *puVar5 = plVar10;
              puVar6 = (undefined8 *)plVar10[1];
              *puVar6 = plVar12;
              plVar10[1] = (longlong)puVar5;
              plVar3[1] = (longlong)plVar4;
              plVar12[1] = (longlong)puVar6;
              *(longlong **)(lVar11 + lVar7) = plVar12;
              goto LAB_14011a797;
            }
            plVar10 = (longlong *)plVar10[1];
          } while ((dVar1 != (double)plVar10[2]) || (NAN(dVar1) || NAN((double)plVar10[2])));
          lVar11 = *plVar10;
          plVar10 = (longlong *)plVar12[1];
          *plVar10 = (longlong)plVar3;
          plVar4 = (longlong *)plVar3[1];
          *plVar4 = lVar11;
          puVar5 = *(undefined8 **)(lVar11 + 8);
          *puVar5 = plVar12;
          *(longlong **)(lVar11 + 8) = plVar4;
          plVar3[1] = (longlong)plVar10;
          plVar12[1] = (longlong)puVar5;
        }
        else {
          plVar10 = (longlong *)*plVar10;
          if (plVar10 != plVar12) {
            plVar4 = (longlong *)plVar12[1];
            *plVar4 = (longlong)plVar3;
            puVar5 = (undefined8 *)plVar3[1];
            *puVar5 = plVar10;
            puVar6 = (undefined8 *)plVar10[1];
            *puVar6 = plVar12;
            plVar10[1] = (longlong)puVar5;
            plVar3[1] = (longlong)plVar4;
            plVar12[1] = (longlong)puVar6;
          }
          *(longlong **)(lVar11 + 8 + lVar7) = plVar12;
        }
      }
LAB_14011a797:
      plVar12 = plVar3;
    } while (plVar3 != plVar2);
  }
  return;
}


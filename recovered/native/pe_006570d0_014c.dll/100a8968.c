/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a8968 */

void __fastcall FUN_100a8968(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  short sVar9;
  uint *puVar10;
  uint uVar11;
  
  uVar2 = param_1[4];
  puVar3 = param_1;
  if (7 < param_1[5]) {
    puVar3 = (uint *)*param_1;
  }
  puVar1 = (uint *)((int)puVar3 + uVar2 * 2);
  puVar10 = puVar3;
  puVar7 = puVar1;
  if (1 < (int)uVar2) {
    uVar11 = *puVar3;
    if ((uVar11 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar10 = puVar3 + 1;
    }
    else if (((short)uVar11 == 0x5c) || ((uVar11 & 0xffff) == 0x2f)) {
      uVar5 = uVar11 >> 0x10;
      sVar4 = (short)(uVar11 >> 0x10);
      if (uVar2 < 4) {
        if (uVar2 != 2) goto LAB_100a8a0c;
      }
      else if (((*(short *)((int)puVar3 + 6) == 0x5c) || (*(short *)((int)puVar3 + 6) == 0x2f)) &&
              ((uVar2 == 4 || (((short)puVar3[2] != 0x2f && ((short)puVar3[2] != 0x5c)))))) {
        if ((sVar4 == 0x2f) || (uVar5 == 0x5c)) {
          sVar9 = (short)puVar3[1];
          if (sVar9 == 0x2e) {
            puVar10 = (uint *)((int)puVar3 + 6);
          }
          else {
            if (sVar9 != 0x3f) {
              if (uVar5 != 0x3f) goto LAB_100a8a0c;
              goto LAB_100a8a7e;
            }
            puVar10 = (uint *)((int)puVar3 + 6);
          }
        }
        else if (uVar5 == 0x3f) {
          sVar9 = (short)puVar3[1];
LAB_100a8a7e:
          puVar10 = (uint *)((int)puVar3 + 6);
          if (sVar9 != 0x3f) {
            puVar10 = puVar3;
          }
        }
      }
      else {
LAB_100a8a0c:
        if ((((sVar4 == 0x5c) || (uVar5 == 0x2f)) && ((short)puVar3[1] != 0x2f)) &&
           (((short)puVar3[1] != 0x5c && (puVar10 = (uint *)((int)puVar3 + 6), uVar2 != 3)))) {
          iVar6 = uVar2 * 2 + -6;
          do {
            if (((short)*puVar10 == 0x2f) || ((short)*puVar10 == 0x5c)) goto LAB_100a8a88;
            puVar10 = (uint *)((int)puVar10 + 2);
            iVar6 = iVar6 + -2;
          } while (iVar6 != 0);
          goto LAB_100a8aa7;
        }
      }
    }
  }
LAB_100a8a88:
  if (puVar10 != puVar1) {
    puVar7 = (uint *)((int)puVar10 + (uint)((short)*puVar10 == 0x2f || (short)*puVar10 == 0x5c) * 2)
    ;
  }
LAB_100a8aa7:
  do {
    puVar8 = puVar1;
    puVar10 = puVar7;
    if (puVar8 == puVar7) goto LAB_100a8ad6;
  } while ((*(short *)((int)puVar8 + -2) != 0x5c) &&
          (puVar1 = (uint *)((int)puVar8 + -2), *(short *)((int)puVar8 + -2) != 0x2f));
  do {
    if ((*(short *)((int)puVar8 + -2) != 0x5c) &&
       (puVar10 = puVar8, *(short *)((int)puVar8 + -2) != 0x2f)) break;
    puVar8 = (uint *)((int)puVar8 + -2);
    puVar10 = puVar7;
  } while (puVar8 != puVar7);
LAB_100a8ad6:
  uVar11 = (int)puVar10 - (int)puVar3 >> 1;
  if (uVar2 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_100047d6();
  }
  param_1[4] = uVar11;
  *(undefined2 *)((int)puVar3 + ((int)puVar10 - (int)puVar3)) = 0;
  return;
}


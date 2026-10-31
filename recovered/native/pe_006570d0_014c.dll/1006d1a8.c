/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006d1a8 */

int __thiscall FUN_1006d1a8(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  short sVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  uint *local_20;
  
  uVar12 = param_1[4];
  if (7 < param_1[5]) {
    param_1 = (uint *)*param_1;
  }
  puVar1 = (uint *)((int)param_1 + uVar12 * 2);
  local_20 = param_1;
  if (1 < (int)uVar12) {
    uVar10 = *param_1;
    if ((uVar10 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      local_20 = param_1 + 1;
    }
    else if (((short)uVar10 == 0x5c) || (local_20 = param_1, (uVar10 & 0xffff) == 0x2f)) {
      uVar11 = uVar10 >> 0x10;
      sVar6 = (short)(uVar10 >> 0x10);
      if (uVar12 < 4) {
        local_20 = param_1;
        if (uVar12 != 2) goto LAB_1006d253;
      }
      else if (((*(ushort *)((int)param_1 + 6) == 0x5c) || (*(ushort *)((int)param_1 + 6) == 0x2f))
              && ((uVar12 == 4 || (((ushort)param_1[2] != 0x2f && ((ushort)param_1[2] != 0x5c))))))
      {
        puVar7 = (uint *)((int)param_1 + 6);
        local_20 = puVar7;
        if ((sVar6 == 0x2f) || (uVar11 == 0x5c)) {
          uVar13 = (ushort)param_1[1];
          if ((uVar13 != 0x2e) && (uVar13 != 0x3f)) {
            if (uVar11 != 0x3f) goto LAB_1006d253;
            goto LAB_1006d2be;
          }
        }
        else {
          local_20 = param_1;
          if (uVar11 == 0x3f) {
            uVar13 = (ushort)param_1[1];
LAB_1006d2be:
            local_20 = puVar7;
            if (uVar13 != 0x3f) {
              local_20 = param_1;
            }
          }
        }
      }
      else {
LAB_1006d253:
        if ((((sVar6 == 0x5c) || (local_20 = param_1, uVar11 == 0x2f)) &&
            (local_20 = param_1, (ushort)param_1[1] != 0x2f)) &&
           ((local_20 = param_1, (ushort)param_1[1] != 0x5c &&
            (local_20 = (uint *)((int)param_1 + 6), uVar12 != 3)))) {
          iVar4 = uVar12 * 2 + -6;
          puVar7 = (uint *)((int)param_1 + 6);
          do {
            local_20 = puVar7;
            if (((ushort)*puVar7 == 0x2f) || ((ushort)*puVar7 == 0x5c)) break;
            puVar7 = (uint *)((int)puVar7 + 2);
            iVar4 = iVar4 + -2;
            local_20 = puVar1;
          } while (iVar4 != 0);
        }
      }
    }
  }
  puVar7 = (uint *)((int)param_2 + param_3 * 2);
  puVar8 = param_2;
  if ((int)param_3 < 2) goto LAB_1006d409;
  uVar12 = *param_2;
  if ((uVar12 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    puVar8 = param_2 + 1;
    goto LAB_1006d409;
  }
  if (((short)uVar12 != 0x5c) && ((uVar12 & 0xffff) != 0x2f)) goto LAB_1006d409;
  uVar10 = uVar12 >> 0x10;
  sVar6 = (short)(uVar12 >> 0x10);
  if (param_3 < 4) {
    if (param_3 == 2) goto LAB_1006d409;
  }
  else if (((*(ushort *)((int)param_2 + 6) == 0x5c) || (*(ushort *)((int)param_2 + 6) == 0x2f)) &&
          ((param_3 == 4 || (((ushort)param_2[2] != 0x2f && ((ushort)param_2[2] != 0x5c)))))) {
    puVar5 = (uint *)((int)param_2 + 6);
    puVar8 = puVar5;
    if ((sVar6 == 0x2f) || (uVar10 == 0x5c)) {
      uVar13 = (ushort)param_2[1];
      if ((uVar13 == 0x2e) || (uVar13 == 0x3f)) goto LAB_1006d409;
      if (uVar10 != 0x3f) goto LAB_1006d371;
    }
    else {
      puVar8 = param_2;
      if (uVar10 != 0x3f) goto LAB_1006d409;
      uVar13 = (ushort)param_2[1];
    }
    puVar8 = puVar5;
    if (uVar13 != 0x3f) {
      puVar8 = param_2;
    }
    goto LAB_1006d409;
  }
LAB_1006d371:
  if ((((sVar6 == 0x5c) || (puVar8 = param_2, uVar10 == 0x2f)) &&
      (puVar8 = param_2, (ushort)param_2[1] != 0x2f)) &&
     (((ushort)param_2[1] != 0x5c &&
      (puVar5 = (uint *)((int)param_2 + 6), puVar8 = puVar5, param_3 != 3)))) {
    iVar4 = param_3 * 2 + -6;
    do {
      puVar8 = puVar5;
      if (((ushort)*puVar5 == 0x2f) || ((ushort)*puVar5 == 0x5c)) break;
      puVar5 = (uint *)((int)puVar5 + 2);
      iVar4 = iVar4 + -2;
      puVar8 = puVar7;
    } while (iVar4 != 0);
  }
LAB_1006d409:
  uVar11 = (int)puVar8 - (int)param_2 >> 1;
  uVar10 = (int)local_20 - (int)param_1 >> 1;
  uVar12 = uVar10;
  if (uVar11 < uVar10) {
    uVar12 = uVar11;
  }
  uVar3 = FUN_100047c3(param_1,param_2,uVar12);
  if (uVar3 == uVar12) {
    puVar5 = local_20;
    if (uVar10 == uVar11) {
      for (; (puVar2 = puVar8, puVar5 != puVar1 &&
             (((ushort)*puVar5 == 0x5c || ((ushort)*puVar5 == 0x2f))));
          puVar5 = (uint *)((int)puVar5 + 2)) {
      }
      for (; (puVar9 = puVar7, puVar2 != puVar7 &&
             (((ushort)*puVar2 == 0x5c || (puVar9 = puVar2, (ushort)*puVar2 == 0x2f))));
          puVar2 = (uint *)((int)puVar2 + 2)) {
      }
      iVar4 = (uint)(local_20 != puVar5) - (uint)(puVar8 != puVar9);
      if (iVar4 == 0) {
        do {
          while( true ) {
            if ((puVar5 == puVar1) || (puVar9 == puVar7)) {
              return (uint)(puVar9 == puVar7) - (uint)(puVar5 == puVar1);
            }
            uVar10 = (uint)(ushort)*puVar5;
            uVar12 = (uint)(ushort)*puVar9;
            iVar4 = (uint)(uVar12 == 0x5c || uVar12 == 0x2f) -
                    (uint)(uVar10 == 0x5c || uVar10 == 0x2f);
            if (iVar4 != 0) {
              return iVar4;
            }
            if ((uVar10 == 0x5c) || (uVar10 == 0x2f)) break;
            if (uVar10 - uVar12 != 0) {
              return uVar10 - uVar12;
            }
            puVar5 = (uint *)((int)puVar5 + 2);
            puVar9 = (uint *)((int)puVar9 + 2);
          }
          do {
            puVar5 = (uint *)((int)puVar5 + 2);
            if (puVar5 == puVar1) break;
          } while ((*(ushort *)puVar5 == 0x5c) || (*(ushort *)puVar5 == 0x2f));
          do {
            puVar9 = (uint *)((int)puVar9 + 2);
            if (puVar9 == puVar7) break;
          } while ((*(ushort *)puVar9 == 0x5c) || (*(ushort *)puVar9 == 0x2f));
        } while( true );
      }
    }
    else {
      iVar4 = (int)(char)((uVar11 < uVar10) - (uVar10 < uVar11));
    }
  }
  else {
    iVar4 = (uint)(*(ushort *)((int)param_2 + uVar3 * 2) <= *(ushort *)((int)param_1 + uVar3 * 2)) *
            2 + -1;
  }
  return iVar4;
}


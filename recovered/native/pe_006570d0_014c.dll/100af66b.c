/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100af66b */

void FUN_100af66b(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  uint *puVar7;
  short sVar8;
  uint uVar9;
  
  puVar1 = (uint *)((int)param_2 + param_3 * 2);
  puVar3 = param_2;
  puVar4 = param_2;
  if (1 < (int)param_3) {
    uVar2 = *param_2;
    if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar3 = param_2 + 1;
      puVar4 = param_2 + 1;
    }
    else if (((short)uVar2 == 0x5c) || ((uVar2 & 0xffff) == 0x2f)) {
      uVar9 = uVar2 >> 0x10;
      sVar8 = (short)(uVar2 >> 0x10);
      if (param_3 < 4) {
        if (param_3 != 2) goto LAB_100af6fd;
      }
      else if (((*(short *)((int)param_2 + 6) == 0x5c) || (*(short *)((int)param_2 + 6) == 0x2f)) &&
              ((param_3 == 4 || (((short)param_2[2] != 0x2f && ((short)param_2[2] != 0x5c)))))) {
        puVar7 = (uint *)((int)param_2 + 6);
        puVar4 = puVar7;
        puVar3 = puVar7;
        if ((sVar8 == 0x2f) || (uVar9 == 0x5c)) {
          sVar5 = (short)param_2[1];
          if ((sVar5 != 0x2e) && (sVar5 != 0x3f)) {
            if (uVar9 != 0x3f) goto LAB_100af6fd;
            goto LAB_100af756;
          }
        }
        else {
          puVar3 = param_2;
          puVar4 = param_2;
          if (uVar9 == 0x3f) {
            sVar5 = (short)param_2[1];
LAB_100af756:
            puVar3 = param_2;
            puVar4 = param_2;
            if (sVar5 == 0x3f) {
              puVar3 = puVar7;
              puVar4 = puVar7;
            }
          }
        }
      }
      else {
LAB_100af6fd:
        if ((((sVar8 == 0x5c) || (puVar3 = param_2, puVar4 = param_2, uVar9 == 0x2f)) &&
            (puVar3 = param_2, puVar4 = param_2, (short)param_2[1] != 0x2f)) &&
           (((short)param_2[1] != 0x5c &&
            (puVar3 = (uint *)((int)param_2 + 6), puVar4 = puVar3, param_3 != 3)))) {
          iVar6 = param_3 * 2 + -6;
          do {
            puVar4 = puVar3;
            if (((short)*puVar3 == 0x2f) || ((short)*puVar3 == 0x5c)) goto joined_r0x100af75f;
            puVar3 = (uint *)((int)puVar3 + 2);
            iVar6 = iVar6 + -2;
            puVar4 = puVar1;
            puVar7 = puVar1;
          } while (iVar6 != 0);
          goto LAB_100af779;
        }
      }
    }
  }
joined_r0x100af75f:
  for (; (puVar7 = puVar1, puVar3 != puVar1 &&
         (((short)*puVar3 == 0x5c || (puVar7 = puVar3, (short)*puVar3 == 0x2f))));
      puVar3 = (uint *)((int)puVar3 + 2)) {
  }
LAB_100af779:
  *param_1 = puVar4;
  param_1[1] = (int)puVar7 - (int)puVar4 >> 1;
  return;
}


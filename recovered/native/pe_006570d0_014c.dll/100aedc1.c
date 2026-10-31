/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aedc1 */

undefined4 FUN_100aedc1(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  short sVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  short sVar9;
  int iVar10;
  
  piVar1 = param_1 + 4;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  puVar2 = (uint *)((int)param_1 + *piVar1 * 2);
  puVar5 = (uint *)FUN_100020d5(param_1,puVar2);
  do {
    puVar8 = puVar5;
    if (puVar5 == puVar2) {
      return 0;
    }
    do {
      sVar4 = (short)*puVar8;
      if ((sVar4 == 0x2f) || (sVar4 == 0x5c)) break;
      puVar8 = (uint *)((int)puVar8 + 2);
    } while (puVar8 != puVar2);
    iVar10 = (int)puVar8 - (int)puVar5;
    if (1 < iVar10 >> 1) {
      uVar3 = *puVar5;
      uVar7 = CONCAT31((uint3)(byte)((ushort)sVar4 >> 8),1);
      if ((uVar3 & 0xffffffdf) - 0x3a0041 < 0x1a) {
        return uVar7;
      }
      if (((short)uVar3 == 0x5c) || ((uVar3 & 0xffff) == 0x2f)) {
        uVar6 = uVar3 >> 0x10;
        sVar4 = (short)(uVar3 >> 0x10);
        if ((uint)(iVar10 >> 1) < 4) {
          if (iVar10 != 4) goto LAB_100aee8f;
        }
        else if (((*(short *)((int)puVar5 + 6) == 0x5c) || (*(short *)((int)puVar5 + 6) == 0x2f)) &&
                ((iVar10 == 8 || (((short)puVar5[2] != 0x2f && ((short)puVar5[2] != 0x5c)))))) {
          if ((sVar4 == 0x2f) || (uVar6 == 0x5c)) {
            sVar9 = (short)puVar5[1];
            if (sVar9 == 0x2e) {
              return uVar7;
            }
            if (sVar9 == 0x3f) {
              return uVar7;
            }
            if (uVar6 != 0x3f) goto LAB_100aee8f;
          }
          else {
            if (uVar6 != 0x3f) goto LAB_100aeec6;
            sVar9 = (short)puVar5[1];
          }
          if (sVar9 == 0x3f) {
            return uVar7;
          }
        }
        else {
LAB_100aee8f:
          if ((((sVar4 == 0x5c) || (uVar6 == 0x2f)) && ((short)puVar5[1] != 0x2f)) &&
             ((short)puVar5[1] != 0x5c)) {
            return uVar7;
          }
        }
      }
    }
LAB_100aeec6:
    for (; (puVar5 = puVar8, puVar8 != puVar2 &&
           (((short)*puVar8 == 0x5c || ((short)*puVar8 == 0x2f))));
        puVar8 = (uint *)((int)puVar8 + 2)) {
    }
  } while( true );
}


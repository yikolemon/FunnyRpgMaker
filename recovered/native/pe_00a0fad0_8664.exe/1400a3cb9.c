/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a3cb9 */

undefined8 FUN_1400a3cb9(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  short sVar7;
  uint uVar8;
  short sVar9;
  longlong lVar10;
  
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  puVar2 = (uint *)((longlong)param_1 + *plVar1 * 2);
  puVar4 = (uint *)FUN_1400423eb(param_1,puVar2);
  do {
    puVar6 = puVar4;
    if (puVar4 == puVar2) {
      return 0;
    }
    do {
      sVar7 = (short)*puVar6;
      if ((sVar7 == 0x2f) || (sVar7 == 0x5c)) break;
      puVar6 = (uint *)((longlong)puVar6 + 2);
    } while (puVar6 != puVar2);
    lVar10 = (longlong)puVar6 - (longlong)puVar4;
    if (1 < lVar10 >> 1) {
      uVar3 = *puVar4;
      uVar5 = CONCAT71((uint7)(byte)((ushort)sVar7 >> 8),1);
      if ((uVar3 & 0xffffffdf) - 0x3a0041 < 0x1a) {
        return uVar5;
      }
      if (((short)uVar3 == 0x5c) || ((uVar3 & 0xffff) == 0x2f)) {
        uVar8 = uVar3 >> 0x10;
        sVar7 = (short)(uVar3 >> 0x10);
        if ((ulonglong)(lVar10 >> 1) < 4) {
          if (lVar10 != 4) goto LAB_1400a3d98;
        }
        else if (((*(short *)((longlong)puVar4 + 6) == 0x5c) ||
                 (*(short *)((longlong)puVar4 + 6) == 0x2f)) &&
                ((lVar10 == 8 || (((short)puVar4[2] != 0x2f && ((short)puVar4[2] != 0x5c)))))) {
          if ((sVar7 == 0x2f) || (uVar8 == 0x5c)) {
            sVar9 = (short)puVar4[1];
            if (sVar9 == 0x2e) {
              return uVar5;
            }
            if (sVar9 == 0x3f) {
              return uVar5;
            }
            if (uVar8 != 0x3f) goto LAB_1400a3d98;
          }
          else {
            if (uVar8 != 0x3f) goto LAB_1400a3dd7;
            sVar9 = (short)puVar4[1];
          }
          if (sVar9 == 0x3f) {
            return uVar5;
          }
        }
        else {
LAB_1400a3d98:
          if ((((sVar7 == 0x5c) || (uVar8 == 0x2f)) && ((short)puVar4[1] != 0x2f)) &&
             ((short)puVar4[1] != 0x5c)) {
            return uVar5;
          }
        }
      }
    }
LAB_1400a3dd7:
    for (; (puVar4 = puVar6, puVar6 != puVar2 &&
           (((short)*puVar6 == 0x5c || ((short)*puVar6 == 0x2f))));
        puVar6 = (uint *)((longlong)puVar6 + 2)) {
    }
  } while( true );
}


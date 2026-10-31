/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140232cd6 */

undefined8 *
FUN_140232cd6(undefined8 *param_1,ulonglong param_2,undefined8 param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined7 uVar12;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 *puVar13;
  byte *pbVar14;
  
  uVar11 = param_2;
joined_r0x000140232cf7:
  do {
    while( true ) {
      if (param_4 == param_5) {
        *param_1 = param_3;
        return param_1;
      }
      uVar12 = (undefined7)(uVar11 >> 8);
      uVar11 = CONCAT71(uVar12,*param_4);
      pbVar14 = param_4 + 1;
      if (*param_4 == 0x24) break;
LAB_140232d75:
      FUN_1402150c2(param_3,uVar11);
      param_4 = pbVar14;
    }
    if (pbVar14 == param_5) {
      uVar11 = CONCAT71(uVar12,0x24);
      goto LAB_140232d75;
    }
    bVar6 = *pbVar14;
    if (bVar6 < 0x27) {
      if (bVar6 == 0x24) {
        uVar11 = CONCAT71(uVar12,0x24);
        FUN_1402150c2(param_3,uVar11);
      }
      else if (bVar6 == 0x26) {
        puVar2 = *(undefined8 **)(param_2 + 0x10);
        if (*(undefined8 **)(param_2 + 0x18) != puVar2) {
          puVar3 = (undefined1 *)puVar2[1];
          for (puVar13 = (undefined1 *)*puVar2; puVar13 != puVar3; puVar13 = puVar13 + 1) {
            uVar11 = CONCAT71((int7)(uVar11 >> 8),*puVar13);
            FUN_1402150c2(param_3,uVar11);
          }
        }
      }
      else {
LAB_140232da4:
        bVar6 = bVar6 - 0x30;
        if (bVar6 < 10) {
          pbVar14 = param_4 + 2;
          uVar7 = (uint)bVar6;
          if (pbVar14 == param_5) {
LAB_140232e34:
            bVar5 = false;
          }
          else {
            bVar1 = *pbVar14;
            uVar9 = bVar1 - 0x30;
            uVar11 = (ulonglong)uVar9;
            if (9 < (byte)uVar9) goto LAB_140232e34;
            pbVar14 = param_4 + 3;
            uVar7 = ((uint)bVar1 + ((uint)bVar6 + (uint)bVar6 * 4) * 2) - 0x30;
            bVar5 = true;
          }
          param_4 = pbVar14;
          if (uVar7 == 0) {
            uVar10 = CONCAT71((int7)(uVar11 >> 8),0x24);
            FUN_1402150c2(param_3,uVar10);
            uVar11 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0x30);
            FUN_1402150c2(param_3,uVar11);
            if (bVar5) {
              uVar11 = CONCAT71((int7)(uVar11 >> 8),0x30);
              goto LAB_140232d75;
            }
          }
          else {
            uVar8 = (ulonglong)uVar7;
            lVar4 = *(longlong *)(param_2 + 0x10);
            uVar11 = (*(longlong *)(param_2 + 0x18) - lVar4 >> 3) * -0x5555555555555555;
            if (uVar8 <= uVar11 && uVar11 - uVar8 != 0) {
              puVar3 = *(undefined1 **)(lVar4 + 8 + uVar8 * 0x18);
              for (puVar13 = *(undefined1 **)(lVar4 + uVar8 * 0x18); puVar13 != puVar3;
                  puVar13 = puVar13 + 1) {
                uVar11 = CONCAT71((int7)(uVar11 >> 8),*puVar13);
                FUN_1402150c2(param_3,uVar11);
              }
            }
          }
          goto joined_r0x000140232cf7;
        }
        uVar10 = CONCAT71(uVar12,0x24);
        FUN_1402150c2(param_3,uVar10);
        uVar11 = CONCAT71((int7)((ulonglong)uVar10 >> 8),param_4[1]);
        FUN_1402150c2(param_3,uVar11);
      }
    }
    else if (bVar6 == 0x27) {
      puVar3 = *(undefined1 **)(param_2 + 0x48);
      for (puVar13 = *(undefined1 **)(param_2 + 0x40); puVar13 != puVar3; puVar13 = puVar13 + 1) {
        uVar11 = CONCAT71((int7)(uVar11 >> 8),*puVar13);
        FUN_1402150c2(param_3,uVar11);
      }
    }
    else {
      if (bVar6 != 0x60) goto LAB_140232da4;
      puVar3 = *(undefined1 **)(param_2 + 0x30);
      for (puVar13 = *(undefined1 **)(param_2 + 0x28); puVar13 != puVar3; puVar13 = puVar13 + 1) {
        uVar11 = CONCAT71((int7)(uVar11 >> 8),*puVar13);
        FUN_1402150c2(param_3,uVar11);
      }
    }
    param_4 = param_4 + 2;
  } while( true );
}


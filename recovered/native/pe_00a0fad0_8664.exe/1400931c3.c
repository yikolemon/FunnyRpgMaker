/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400931c3 */

undefined8 *
FUN_1400931c3(undefined8 *param_1,longlong param_2,undefined8 param_3,ushort *param_4,
             ushort *param_5)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  ushort *puVar11;
  
joined_r0x0001400931e4:
  do {
    while( true ) {
      if (param_4 == param_5) {
        *param_1 = param_3;
        return param_1;
      }
      uVar7 = *param_4;
      puVar11 = param_4 + 1;
      if (uVar7 == 0x24) break;
LAB_140093266:
      FUN_1400089b8(param_3,uVar7);
      param_4 = puVar11;
    }
    if (puVar11 == param_5) {
      uVar7 = 0x24;
      goto LAB_140093266;
    }
    uVar7 = *puVar11;
    uVar5 = (uint)uVar7;
    if (uVar7 < 0x27) {
      if (uVar5 == 0x24) {
        FUN_1400089b8(param_3,0x24);
      }
      else if (uVar5 == 0x26) {
        puVar1 = *(undefined8 **)(param_2 + 0x10);
        if (*(undefined8 **)(param_2 + 0x18) != puVar1) {
          puVar2 = (undefined2 *)puVar1[1];
          for (puVar10 = (undefined2 *)*puVar1; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            FUN_1400089b8(param_3,*puVar10);
          }
        }
      }
      else {
LAB_14009329b:
        uVar5 = uVar5 - 0x30;
        if ((ushort)uVar5 < 10) {
          puVar11 = param_4 + 2;
          uVar6 = 0;
          if (puVar11 == param_5) {
LAB_140093337:
            bVar4 = false;
          }
          else {
            uVar7 = *puVar11;
            uVar8 = uVar7 - 0x30;
            uVar6 = (ulonglong)uVar8;
            if (9 < (ushort)uVar8) goto LAB_140093337;
            puVar11 = param_4 + 3;
            uVar5 = ((uint)uVar7 + uVar5 * 10) - 0x30;
            bVar4 = true;
          }
          param_4 = puVar11;
          if (uVar5 == 0) {
            FUN_1400089b8(param_3,CONCAT62((int6)(uVar6 >> 0x10),0x24));
            FUN_1400089b8(param_3,0x30);
            if (bVar4) {
              uVar7 = 0x30;
              goto LAB_140093266;
            }
          }
          else {
            uVar6 = (ulonglong)uVar5;
            lVar3 = *(longlong *)(param_2 + 0x10);
            uVar9 = (*(longlong *)(param_2 + 0x18) - lVar3 >> 3) * -0x5555555555555555;
            if (uVar6 <= uVar9 && uVar9 - uVar6 != 0) {
              puVar2 = *(undefined2 **)(lVar3 + 8 + uVar6 * 0x18);
              for (puVar10 = *(undefined2 **)(lVar3 + uVar6 * 0x18); puVar10 != puVar2;
                  puVar10 = puVar10 + 1) {
                FUN_1400089b8(param_3,*puVar10);
              }
            }
          }
          goto joined_r0x0001400931e4;
        }
        FUN_1400089b8(param_3,0x24);
        FUN_1400089b8(param_3,param_4[1]);
      }
    }
    else if (uVar7 == 0x27) {
      puVar2 = *(undefined2 **)(param_2 + 0x48);
      for (puVar10 = *(undefined2 **)(param_2 + 0x40); puVar10 != puVar2; puVar10 = puVar10 + 1) {
        FUN_1400089b8(param_3,*puVar10);
      }
    }
    else {
      if (uVar5 != 0x60) goto LAB_14009329b;
      puVar2 = *(undefined2 **)(param_2 + 0x30);
      for (puVar10 = *(undefined2 **)(param_2 + 0x28); puVar10 != puVar2; puVar10 = puVar10 + 1) {
        FUN_1400089b8(param_3,*puVar10);
      }
    }
    param_4 = param_4 + 2;
  } while( true );
}


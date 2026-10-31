/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000d3b0 */

ulonglong FUN_14000d3b0(undefined8 *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 **local_68 [2];
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_1[2] == 0) {
    uVar10 = 0;
  }
  else {
    local_40 = 0;
    puVar4 = (undefined4 *)FUN_140113dd4();
    *puVar4 = 0;
    puVar9 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar9 = (undefined8 *)*param_1;
    }
    uVar10 = 0;
    lVar5 = FUN_14011b910(puVar9,&local_40,0);
    piVar6 = (int *)FUN_140113dd4();
    if (*piVar6 != 0x22) {
      *param_2 = (int)lVar5;
      puVar9 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar9 = (undefined8 *)*param_1;
      }
      uVar10 = 1;
      if ((local_40 != (longlong)puVar9 + param_1[2]) || (lVar5 + 0x80000000U >> 0x20 != 0)) {
        cVar1 = FUN_14000d7b8(param_1,&DAT_14016fed7);
        if (cVar1 == '\0') {
          puVar9 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar9 = (undefined8 *)*param_1;
          }
          lVar5 = FUN_14000d806(puVar9,param_1[2],0,&DAT_140171c1d,2);
          if (lVar5 == -1) {
            iVar3 = FUN_14000d73c(param_1,0,2,&DAT_14016f6b3);
            if (iVar3 == 0) {
              local_40 = 0;
              puVar4 = (undefined4 *)FUN_140113dd4();
              *puVar4 = 0;
              puVar9 = param_1;
              if (0xf < (ulonglong)param_1[3]) {
                puVar9 = (undefined8 *)*param_1;
              }
              lVar5 = FUN_14011b910((longlong)puVar9 + 2,&local_40,8);
              piVar6 = (int *)FUN_140113dd4();
              if (*piVar6 != 0x22) {
                *param_2 = (int)lVar5;
                puVar9 = param_1;
                if (0xf < (ulonglong)param_1[3]) {
                  puVar9 = (undefined8 *)*param_1;
                }
                uVar10 = CONCAT71((int7)((ulonglong)lVar5 >> 8),
                                  (int)lVar5 == lVar5 && (longlong)puVar9 + param_1[2] == local_40);
                goto LAB_14000d5ae;
              }
            }
            else {
              uVar10 = 0;
              iVar3 = FUN_14000d73c(param_1,0,2,&DAT_140170463);
              if (iVar3 != 0) goto LAB_14000d5ae;
              local_40 = 0;
              puVar4 = (undefined4 *)FUN_140113dd4();
              *puVar4 = 0;
              puVar9 = param_1;
              if (0xf < (ulonglong)param_1[3]) {
                puVar9 = (undefined8 *)*param_1;
              }
              lVar5 = FUN_14011b910((longlong)puVar9 + 2,&local_40,2);
              piVar6 = (int *)FUN_140113dd4();
              if (*piVar6 != 0x22) {
                *param_2 = (int)lVar5;
                puVar9 = param_1;
                if (0xf < (ulonglong)param_1[3]) {
                  puVar9 = (undefined8 *)*param_1;
                }
                uVar10 = CONCAT71((int7)((ulonglong)lVar5 >> 8),
                                  (int)lVar5 == lVar5 && (longlong)puVar9 + param_1[2] == local_40);
                goto LAB_14000d5ae;
              }
            }
            uVar10 = 0;
          }
          else {
            FUN_140006874(local_68,param_1);
            pppuVar7 = local_68;
            if (0xf < local_50) {
              pppuVar7 = (undefined8 ***)local_68[0];
            }
            lVar5 = local_58 + (longlong)pppuVar7;
            local_31 = 0x5f;
            FUN_14000d6fa(&local_48,pppuVar7,lVar5);
            pppuVar7 = local_68;
            if (0xf < local_50) {
              pppuVar7 = (undefined8 ***)local_68[0];
            }
            uVar11 = lVar5 - local_48;
            uVar10 = local_58 - (local_48 - (longlong)pppuVar7);
            if (uVar11 <= uVar10) {
              uVar10 = uVar11;
            }
            lVar5 = local_58 - uVar10;
            FUN_140135ff0(local_48,uVar10 + local_48,(lVar5 - (local_48 - (longlong)pppuVar7)) + 1);
            pppuVar7 = local_68;
            if (0xf < local_50) {
              pppuVar7 = (undefined8 ***)local_68[0];
            }
            local_31 = 0x27;
            local_58 = lVar5;
            FUN_14000d6fa(&local_48,pppuVar7,lVar5 + (longlong)pppuVar7);
            pppuVar8 = local_68;
            if (0xf < local_50) {
              pppuVar8 = (undefined8 ***)local_68[0];
            }
            uVar11 = (lVar5 + (longlong)pppuVar7) - local_48;
            uVar10 = local_58 - (local_48 - (longlong)pppuVar8);
            if (uVar11 <= uVar10) {
              uVar10 = uVar11;
            }
            lVar5 = local_58 - uVar10;
            FUN_140135ff0(local_48,uVar10 + local_48,(lVar5 - (local_48 - (longlong)pppuVar8)) + 1);
            local_58 = lVar5;
            uVar2 = FUN_14000d3b0(local_68,param_2);
            uVar10 = (ulonglong)uVar2;
            FUN_1400017de(local_68);
          }
        }
        else {
          *param_2 = 1;
        }
      }
    }
  }
LAB_14000d5ae:
  return uVar10 & 0xffffffff;
}


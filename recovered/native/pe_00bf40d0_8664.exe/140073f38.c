/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140073f38 */

void FUN_140073f38(longlong param_1,char param_2,uint param_3,ushort *param_4,ushort *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ushort uVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  int local_54;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  puVar2 = *(undefined8 **)(param_1 + 0x2e8);
  lVar5 = param_1 + 0x198;
  if (param_2 == '\0') {
    lVar5 = param_1 + 0x138;
  }
  uVar4 = *(ushort *)(lVar5 + 0x22);
  if (uVar4 != 0) {
    plVar3 = *(longlong **)(param_1 + 0xa0);
    uVar9 = (ulonglong)(param_2 != '\0');
    iVar1 = *(int *)(param_1 + 0x4c8 + uVar9 * 4);
    uVar11 = *(int *)(param_1 + 0x430 + uVar9 * 4) + iVar1;
    iVar10 = param_3 - uVar4;
    if (param_3 < uVar4) {
      if (iVar1 + param_3 * 4 + 4 <= uVar11) {
        uVar6 = FUN_140020a41((longlong)plVar3,iVar1 + param_3 * 4);
        local_4c = (int)uVar6;
        if (local_4c == 0) {
          uVar4 = FUN_140020aa5(plVar3,&local_4c);
          *param_5 = uVar4;
          if (local_4c == 0) {
            uVar4 = FUN_140020aa5(plVar3,&local_4c);
            *param_4 = uVar4;
            if (local_4c == 0) goto LAB_14007407f;
          }
        }
      }
    }
    else if ((iVar1 + (uint)uVar4 * 4) - 2 <= uVar11) {
      uVar8 = (iVar1 + (uint)uVar4 * 4) - 4;
      local_60 = (ulonglong)uVar8;
      uVar6 = FUN_140020a41((longlong)plVar3,uVar8);
      local_4c = (int)uVar6;
      if (local_4c == 0) {
        uVar4 = FUN_140020aa5(plVar3,&local_4c);
        *param_5 = uVar4;
        if (local_4c == 0) {
          if (uVar11 < (int)local_60 + iVar10 * 2 + 6U) {
            *param_4 = 0;
          }
          else {
            uVar6 = FUN_140020a41((longlong)plVar3,(int)local_60 + iVar10 * 2 + 4);
            local_4c = (int)uVar6;
            if (local_4c == 0) {
              uVar4 = FUN_140020aa5(plVar3,&local_4c);
              *param_4 = uVar4;
            }
            else {
              *param_4 = 0;
            }
          }
          goto LAB_14007407f;
        }
      }
    }
  }
  *param_4 = 0;
  *param_5 = 0;
LAB_14007407f:
  if ((puVar2 != (undefined8 *)0x0) && ((*(byte *)(param_1 + 9) & 0x80) != 0)) {
    local_50 = (uint)*param_5;
    local_54 = (int)(short)*param_4;
    if (param_2 == '\0') {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(param_1,param_3,&local_50);
      }
      pcVar7 = (code *)puVar2[1];
    }
    else {
      if ((code *)puVar2[3] != (code *)0x0) {
        (*(code *)puVar2[3])(param_1,param_3,&local_50);
      }
      pcVar7 = (code *)puVar2[4];
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(param_1,param_3,&local_54);
    }
    *param_5 = (ushort)local_50;
    *param_4 = (ushort)local_54;
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802268f8 */

void FUN_1802268f8(longlong param_1,char param_2,uint param_3,short *param_4,ushort *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ushort uVar4;
  short sVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  int local_54;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  puVar2 = *(undefined8 **)(param_1 + 0x2e8);
  lVar6 = param_1 + 0x198;
  if (param_2 == '\0') {
    lVar6 = param_1 + 0x138;
  }
  uVar4 = *(ushort *)(lVar6 + 0x22);
  if (uVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    uVar8 = (ulonglong)(param_2 != '\0');
    iVar1 = *(int *)(param_1 + 0x4c8 + uVar8 * 4);
    uVar10 = *(int *)(param_1 + 0x430 + uVar8 * 4) + iVar1;
    iVar9 = param_3 - uVar4;
    if (param_3 < uVar4) {
      if ((iVar1 + param_3 * 4 + 4 <= uVar10) &&
         (local_4c = FUN_1801ce63e(uVar3,iVar1 + param_3 * 4), local_4c == 0)) {
        uVar4 = FUN_1801ce6a2(uVar3,&local_4c);
        *param_5 = uVar4;
        if (local_4c == 0) {
          sVar5 = FUN_1801ce6a2(uVar3,&local_4c);
          *param_4 = sVar5;
          if (local_4c == 0) goto LAB_180226a3f;
        }
      }
    }
    else if ((iVar1 + (uint)uVar4 * 4) - 2 <= uVar10) {
      local_60 = (ulonglong)((iVar1 + (uint)uVar4 * 4) - 4);
      local_4c = FUN_1801ce63e(uVar3);
      if (local_4c == 0) {
        uVar4 = FUN_1801ce6a2(uVar3,&local_4c);
        *param_5 = uVar4;
        if (local_4c == 0) {
          if (uVar10 < (int)local_60 + iVar9 * 2 + 6U) {
            *param_4 = 0;
          }
          else {
            local_4c = FUN_1801ce63e(uVar3,(int)local_60 + iVar9 * 2 + 4);
            if (local_4c == 0) {
              sVar5 = FUN_1801ce6a2(uVar3,&local_4c);
              *param_4 = sVar5;
            }
            else {
              *param_4 = 0;
            }
          }
          goto LAB_180226a3f;
        }
      }
    }
  }
  *param_4 = 0;
  *param_5 = 0;
LAB_180226a3f:
  if ((puVar2 != (undefined8 *)0x0) && ((*(byte *)(param_1 + 9) & 0x80) != 0)) {
    local_50 = (uint)*param_5;
    local_54 = (int)*param_4;
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
    *param_4 = (short)local_54;
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}


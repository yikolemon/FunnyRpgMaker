/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401adf10 */

void FUN_1401adf10(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  PVOID pvVar3;
  int iVar4;
  longlong lVar5;
  PVOID pvVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar11;
  undefined1 local_70 [8];
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  uint local_40;
  
  if (*param_1 != -0x7ffffffd) {
    lVar5 = FUN_1401aae30();
    if (*(longlong *)(lVar5 + 0x10) != 0) {
      lVar5 = FUN_1401aae30();
      pvVar3 = *(PVOID *)(lVar5 + 0x10);
      pvVar6 = EncodePointer((PVOID)0x0);
      if ((((pvVar3 != pvVar6) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) &&
         (iVar4 = FUN_1401901a0(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_6),
         in_stack_ffffffffffffff58 = param_8, iVar4 != 0)) {
        return;
      }
    }
    local_60 = *(undefined8 *)(param_4 + 8);
    local_68 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1401a0758();
    }
    FUN_14018fa40(&local_58,&local_68,param_6,param_4,param_5,param_7);
    uVar9 = local_50;
    if (local_50 < local_40) {
      do {
        piVar10 = (int *)((longlong)*(int *)(*local_58 + 0x10) + (ulonglong)uVar9 * 0x14 +
                         local_58[1]);
        iVar4 = *piVar10;
        if ((iVar4 <= param_6) && (param_6 <= piVar10[1])) {
          iVar1 = piVar10[2];
          pbVar8 = (byte *)(*(longlong *)(param_4 + 8) + -0x14 +
                           (longlong)piVar10[4] + (ulonglong)(uint)piVar10[3] * 0x14);
          iVar2 = *(int *)(pbVar8 + 4);
          if ((iVar2 != 0) && (lVar5 = FUN_14018fef0(), lVar5 + iVar2 != 0)) {
            iVar2 = *(int *)(pbVar8 + 4);
            if (iVar2 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = FUN_14018fef0();
              lVar5 = lVar5 + iVar2;
            }
            if (*(char *)(lVar5 + 0x10) != '\0') goto LAB_1401ae11d;
          }
          uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
          if ((*pbVar8 & 0x40) == 0) {
            uVar7 = FUN_14018f810(param_2,param_4,param_5,local_70);
            lVar5 = FUN_14018fef0();
            in_stack_ffffffffffffff58 = CONCAT44(uVar11,iVar4);
            FUN_14018f910(param_2,param_1,param_3,uVar7,*(int *)(pbVar8 + 0xc) + lVar5,param_5,
                          in_stack_ffffffffffffff58,iVar1,pbVar8,param_4,0);
          }
        }
LAB_1401ae11d:
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_40);
    }
  }
  return;
}


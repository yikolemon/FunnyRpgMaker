/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a0770 */

void FUN_1400a0770(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,
                  ULONG_PTR param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PVOID pvVar4;
  PVOID pvVar5;
  longlong lVar6;
  longlong *plVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  undefined4 in_stack_ffffffffffffff64;
  longlong local_70;
  ULONG_PTR local_68;
  ulonglong local_60;
  longlong *local_58;
  uint local_50;
  uint local_40;
  
  if (*param_1 != -0x7ffffffd) {
    pvVar4 = FUN_14009d690();
    if (*(longlong *)((longlong)pvVar4 + 0x10) != 0) {
      pvVar4 = FUN_14009d690();
      pvVar4 = *(PVOID *)((longlong)pvVar4 + 0x10);
      pvVar5 = EncodePointer((PVOID)0x0);
      if ((((pvVar4 != pvVar5) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) &&
         (iVar3 = FUN_14008d900(param_1,param_2,param_3), iVar3 != 0)) {
        return;
      }
    }
    local_60 = param_4[1];
    local_68 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140096cf8();
    }
    FUN_14008d1a0(&local_58,&local_68,param_6,param_4,param_5);
    uVar9 = local_50;
    if (local_50 < local_40) {
      do {
        piVar10 = (int *)((longlong)*(int *)(*local_58 + 0x10) + (ulonglong)uVar9 * 0x14 +
                         local_58[1]);
        iVar3 = *piVar10;
        if ((iVar3 <= param_6) && (param_6 <= piVar10[1])) {
          iVar1 = piVar10[2];
          pbVar8 = (byte *)((param_4[1] - 0x14) +
                           (longlong)piVar10[4] + (ulonglong)(uint)piVar10[3] * 0x14);
          iVar2 = *(int *)(pbVar8 + 4);
          if ((iVar2 != 0) && (lVar6 = FUN_14008d650(), lVar6 + iVar2 != 0)) {
            iVar2 = *(int *)(pbVar8 + 4);
            if (iVar2 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = FUN_14008d650();
              lVar6 = lVar6 + iVar2;
            }
            if (*(char *)(lVar6 + 0x10) != '\0') goto LAB_1400a097d;
          }
          if ((*pbVar8 & 0x40) == 0) {
            plVar7 = FUN_14008cf70(param_2,param_4,param_5,&local_70);
            lVar6 = FUN_14008d650();
            FUN_14008d070(param_2,(ULONG_PTR)param_1,param_3,(ULONG_PTR)plVar7,
                          *(int *)(pbVar8 + 0xc) + lVar6,param_5,iVar3,
                          CONCAT44(in_stack_ffffffffffffff64,iVar1),pbVar8,param_4,0);
          }
        }
LAB_1400a097d:
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_40);
    }
  }
  return;
}


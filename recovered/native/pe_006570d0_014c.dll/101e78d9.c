/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e78d9 */

void __fastcall FUN_101e78d9(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 local_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  iVar1 = *(int *)(param_1 + 0x68);
  local_38 = *(undefined4 *)(iVar1 + 0x1c);
  iVar9 = *(int *)(param_1 + 0x2e0);
  *(undefined1 *)(iVar9 + 0x18) = 1;
  iVar5 = (**(code **)(param_1 + 0x204))(param_1,0x61766172,iVar1,&local_1c);
  if (iVar5 != 0) goto LAB_101e7b42;
  iVar5 = FUN_101c4a88(iVar1);
  iStack_18 = FUN_101c4b69(iVar1,local_1c);
  if (iStack_18 != 0) goto LAB_101e7b42;
  iStack_24 = iVar5;
  iVar5 = FUN_101c4ce4(iVar1);
  iVar6 = FUN_101c4ce4(iVar1);
  iStack_20 = iVar5;
  if (((iVar5 == 0x20000) || (iVar5 == 0x10000)) && (iVar6 == **(int **)(iVar9 + 0xc))) {
    iStack_30 = iVar6;
    piVar7 = (int *)FUN_101bff17(local_38,0x24,&iStack_18);
    *(int **)(iVar9 + 0x1c) = piVar7;
    if (iStack_18 == 0) {
      puVar8 = (ushort *)FUN_101c2a50(local_38,8,0,iStack_30,0,&iStack_18);
      *piVar7 = (int)puVar8;
      if (iStack_18 == 0) {
        piStack_34 = piVar7;
        if (0 < iStack_30) {
          iStack_2c = 1;
          iVar9 = 0;
          do {
            uVar2 = local_38;
            iStack_28 = iVar9;
            uVar3 = FUN_101c4ca6(iVar1);
            *puVar8 = uVar3;
            uVar11 = (uint)uVar3 * 4;
            if (local_1c <= uVar11 && uVar11 - local_1c != 0) {
LAB_101e7ad2:
              piVar7 = piStack_34;
              iVar9 = iStack_2c;
              if (iStack_28 != 0) {
                do {
                  FUN_101c0017(uVar2,*(undefined4 *)(*piVar7 + -0xc + iVar9 * 8));
                  *(undefined4 *)(*piVar7 + -0xc + iVar9 * 8) = 0;
                  iVar9 = iVar9 + -1;
                } while (1 < iVar9);
              }
              FUN_101c0017(uVar2,*piVar7);
              *piVar7 = 0;
              goto LAB_101e7b39;
            }
            uVar10 = FUN_101c2a50(uVar2,8,0,(uint)uVar3,0,&iStack_18);
            *(undefined4 *)(puVar8 + 2) = uVar10;
            if (iStack_18 != 0) goto LAB_101e7ad2;
            if (*puVar8 != 0) {
              uVar11 = 0;
              do {
                sVar4 = FUN_101c4ca6(iVar1);
                *(int *)(*(int *)(puVar8 + 2) + uVar11 * 8) = (int)sVar4 << 2;
                sVar4 = FUN_101c4ca6(iVar1);
                *(int *)(*(int *)(puVar8 + 2) + 4 + uVar11 * 8) = (int)sVar4 << 2;
                uVar11 = uVar11 + 1;
              } while (uVar11 < *puVar8);
            }
            iVar9 = iStack_28 + 1;
            puVar8 = puVar8 + 4;
            iStack_2c = iStack_2c + 1;
          } while (iVar9 != iStack_30);
        }
        if (0x1ffff < iStack_20) {
          iVar9 = FUN_101c4ce4(iVar1);
          iVar5 = FUN_101c4ce4(iVar1);
          piVar7 = piStack_34;
          if (iVar5 == 0) {
            if (iVar9 != 0) goto LAB_101e7b1b;
          }
          else {
            iStack_18 = FUN_101e5ca3(param_1,iVar5 + iStack_24,piStack_34 + 1);
            if (iStack_18 == 0 && iVar9 != 0) {
LAB_101e7b1b:
              iStack_18 = FUN_101e5ac8(param_1,iVar9 + iStack_24,piVar7 + 6,piVar7 + 1,local_1c);
            }
          }
        }
      }
    }
  }
LAB_101e7b39:
  FUN_101c4c66(iVar1);
LAB_101e7b42:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}


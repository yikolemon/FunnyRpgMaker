/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e7dd1 */

void __fastcall FUN_101e7dd1(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  short sVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  int local_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  iVar2 = *(int *)(param_1 + 0x68);
  uVar10 = *(undefined4 *)(iVar2 + 0x1c);
  local_28 = *(int *)(param_1 + 0x2e0);
  iStack_18 = (**(code **)(param_1 + 0x204))(param_1,0x4d564152,iVar2,local_1c);
  if (iStack_18 == 0) {
    puStack_24 = (undefined4 *)FUN_101c4a88(iVar2);
    sVar5 = FUN_101c4692(iVar2,&iStack_18);
    if (((iStack_18 == 0) && (iStack_18 = FUN_101c4672(iVar2,2), iStack_18 == 0)) && (sVar5 == 1)) {
      uVar8 = FUN_101bff17(uVar10,0x1c,&iStack_18);
      *(undefined4 *)(local_28 + 0x38) = uVar8;
      if ((iStack_18 == 0) && (iStack_18 = FUN_101c4672(iVar2,4), iStack_18 == 0)) {
        uVar6 = FUN_101c4692(iVar2,&iStack_18);
        **(undefined2 **)(local_28 + 0x38) = uVar6;
        if ((iStack_18 == 0) && (uVar9 = FUN_101c4692(iVar2,&iStack_18), iStack_18 == 0)) {
          uStack_20 = FUN_101c4a88(iVar2);
          iStack_18 = FUN_101e5ca3(param_1,(int)puStack_24 + (uVar9 & 0xffff),
                                   *(int *)(local_28 + 0x38) + 4);
          iVar4 = local_28;
          if (iStack_18 == 0) {
            uVar10 = FUN_101c00c3(uVar10,0xc,0,**(undefined2 **)(local_28 + 0x38),0,&iStack_18);
            *(undefined4 *)(*(int *)(iVar4 + 0x38) + 0x18) = uVar10;
            if (((iStack_18 == 0) && (iStack_18 = FUN_101c461e(iVar2,uStack_20), iStack_18 == 0)) &&
               (iStack_18 = FUN_101c4b69(iVar2,(uint)**(ushort **)(local_28 + 0x38) << 3),
               iStack_18 == 0)) {
              puVar3 = *(ushort **)(local_28 + 0x38);
              puVar13 = *(undefined4 **)(puVar3 + 0xc);
              if ((puVar13 != (undefined4 *)0x0) && (*puVar3 != 0)) {
                puStack_24 = puVar13 + (uint)*puVar3 * 3;
                do {
                  uVar10 = FUN_101c4ce4(iVar2);
                  *puVar13 = uVar10;
                  uVar6 = FUN_101c4ca6(iVar2);
                  *(undefined2 *)(puVar13 + 1) = uVar6;
                  uVar7 = FUN_101c4ca6(iVar2);
                  *(ushort *)((int)puVar13 + 6) = uVar7;
                  uVar1 = *(ushort *)(puVar13 + 1);
                  if (((uVar1 & uVar7) != 0xffff) &&
                     ((*(uint *)(puVar3 + 2) <= (uint)uVar1 ||
                      (*(uint *)(*(int *)(puVar3 + 4) + (uint)uVar1 * 0x14) <= (uint)uVar7)))) {
                    iStack_18 = 8;
                    break;
                  }
                  puVar13 = puVar13 + 3;
                } while (puVar13 < puStack_24);
              }
              FUN_101c4c66(iVar2);
              if (iStack_18 == 0) {
                uVar9 = *(uint *)(*(ushort **)(local_28 + 0x38) + 0xc);
                if ((uVar9 != 0) && (uVar11 = (uint)**(ushort **)(local_28 + 0x38), uVar11 != 0)) {
                  uVar11 = uVar9 + uVar11 * 0xc;
                  do {
                    puVar12 = (undefined2 *)FUN_101e8057();
                    if (puVar12 != (undefined2 *)0x0) {
                      *(undefined2 *)(uVar9 + 8) = *puVar12;
                    }
                    uVar9 = uVar9 + 0xc;
                  } while (uVar9 < uVar11);
                }
                *(byte *)(param_1 + 0x2e5) = *(byte *)(param_1 + 0x2e5) | 1;
              }
            }
          }
        }
      }
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}


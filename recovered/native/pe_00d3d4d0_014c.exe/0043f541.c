/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043f541 */

void __fastcall FUN_0043f541(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint *puVar10;
  int *piVar11;
  int local_28;
  uint *puStack_24;
  uint uStack_20;
  undefined1 local_1c [4];
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_28;
  piVar11 = *(int **)(param_1 + 0x68);
  iVar7 = piVar11[7];
  local_28 = *(int *)(param_1 + 0x2e0);
  iStack_18 = (**(code **)(param_1 + 0x204))(param_1,0x4d564152,piVar11,local_1c);
  if (iStack_18 == 0) {
    puStack_24 = (uint *)FUN_00420b00((int)piVar11);
    uVar4 = FUN_0042070a(piVar11,&iStack_18);
    if (((iStack_18 == 0) && (iStack_18 = FUN_004206ea((int)piVar11,2), iStack_18 == 0)) &&
       (uVar4 == 1)) {
      pvVar6 = FUN_0041c507(iVar7,0x1c,&iStack_18);
      *(void **)(local_28 + 0x38) = pvVar6;
      if ((iStack_18 == 0) && (iStack_18 = FUN_004206ea((int)piVar11,4), iStack_18 == 0)) {
        uVar4 = FUN_0042070a(piVar11,&iStack_18);
        **(ushort **)(local_28 + 0x38) = uVar4;
        if ((iStack_18 == 0) && (uVar4 = FUN_0042070a(piVar11,&iStack_18), iStack_18 == 0)) {
          uStack_20 = FUN_00420b00((int)piVar11);
          iStack_18 = FUN_0043d413(param_1,(int)puStack_24 + (uint)uVar4,
                                   (uint *)(*(int *)(local_28 + 0x38) + 4));
          iVar3 = local_28;
          if (iStack_18 == 0) {
            iVar7 = FUN_0041c6b3(iVar7,0xc,0,(uint)**(ushort **)(local_28 + 0x38),0,&iStack_18);
            *(int *)(*(int *)(iVar3 + 0x38) + 0x18) = iVar7;
            if (((iStack_18 == 0) &&
                (iStack_18 = FUN_00420696((int)piVar11,uStack_20), iStack_18 == 0)) &&
               (iStack_18 = FUN_00420be1(piVar11,(uint)**(ushort **)(local_28 + 0x38) << 3),
               iStack_18 == 0)) {
              puVar2 = *(ushort **)(local_28 + 0x38);
              puVar10 = *(uint **)(puVar2 + 0xc);
              if ((puVar10 != (uint *)0x0) && (*puVar2 != 0)) {
                puStack_24 = puVar10 + (uint)*puVar2 * 3;
                do {
                  uVar8 = FUN_00420d5c((int)piVar11);
                  *puVar10 = uVar8;
                  uVar4 = FUN_00420d1e((int)piVar11);
                  *(ushort *)(puVar10 + 1) = uVar4;
                  uVar5 = FUN_00420d1e((int)piVar11);
                  *(ushort *)((int)puVar10 + 6) = uVar5;
                  uVar4 = (ushort)puVar10[1];
                  if (((uVar4 & uVar5) != 0xffff) &&
                     ((*(uint *)(puVar2 + 2) <= (uint)uVar4 ||
                      (*(uint *)(*(int *)(puVar2 + 4) + (uint)uVar4 * 0x14) <= (uint)uVar5)))) {
                    iStack_18 = 8;
                    break;
                  }
                  puVar10 = puVar10 + 3;
                } while (puVar10 < puStack_24);
              }
              FUN_00420cde(piVar11);
              if (iStack_18 == 0) {
                piVar11 = *(int **)(*(ushort **)(local_28 + 0x38) + 0xc);
                if ((piVar11 != (int *)0x0) &&
                   (uVar8 = (uint)**(ushort **)(local_28 + 0x38), uVar8 != 0)) {
                  piVar1 = piVar11 + uVar8 * 3;
                  do {
                    puVar9 = (undefined2 *)FUN_0043f7c7(param_1,*piVar11);
                    if (puVar9 != (undefined2 *)0x0) {
                      *(undefined2 *)(piVar11 + 2) = *puVar9;
                    }
                    piVar11 = piVar11 + 3;
                  } while (piVar11 < piVar1);
                }
                *(byte *)(param_1 + 0x2e5) = *(byte *)(param_1 + 0x2e5) | 1;
              }
            }
          }
        }
      }
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_28);
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043f049 */

void __fastcall FUN_0043f049(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ushort *puVar8;
  int local_38;
  int *piStack_34;
  uint uStack_30;
  int iStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_38;
  piVar1 = *(int **)(param_1 + 0x68);
  local_38 = piVar1[7];
  iVar2 = *(int *)(param_1 + 0x2e0);
  *(undefined1 *)(iVar2 + 0x18) = 1;
  iVar4 = (**(code **)(param_1 + 0x204))(param_1,0x61766172,piVar1,&local_1c);
  if (iVar4 != 0) goto LAB_0043f2b2;
  iVar4 = FUN_00420b00((int)piVar1);
  iStack_18 = FUN_00420be1(piVar1,local_1c);
  if (iStack_18 != 0) goto LAB_0043f2b2;
  iStack_24 = iVar4;
  uVar5 = FUN_00420d5c((int)piVar1);
  uVar6 = FUN_00420d5c((int)piVar1);
  uStack_20 = uVar5;
  if (((uVar5 == 0x20000) || (uVar5 == 0x10000)) && (uVar6 == **(uint **)(iVar2 + 0xc))) {
    uStack_30 = uVar6;
    piVar7 = FUN_0041c507(local_38,0x24,&iStack_18);
    *(int **)(iVar2 + 0x1c) = piVar7;
    if (iStack_18 == 0) {
      puVar8 = (ushort *)FUN_0041efcd(local_38,8,0,uStack_30,0,&iStack_18);
      *piVar7 = (int)puVar8;
      if (iStack_18 == 0) {
        piStack_34 = piVar7;
        if (0 < (int)uStack_30) {
          iStack_2c = 1;
          uVar5 = 0;
          do {
            iVar2 = local_38;
            uStack_28 = uVar5;
            uVar3 = FUN_00420d1e((int)piVar1);
            *puVar8 = uVar3;
            uVar5 = (uint)uVar3 * 4;
            if (local_1c <= uVar5 && uVar5 - local_1c != 0) {
LAB_0043f242:
              piVar7 = piStack_34;
              iVar4 = iStack_2c;
              if (uStack_28 != 0) {
                do {
                  FUN_0041c607(iVar2,*(int *)(*piVar7 + -0xc + iVar4 * 8));
                  *(undefined4 *)(*piVar7 + -0xc + iVar4 * 8) = 0;
                  iVar4 = iVar4 + -1;
                } while (1 < iVar4);
              }
              FUN_0041c607(iVar2,*piVar7);
              *piVar7 = 0;
              goto LAB_0043f2a9;
            }
            iVar4 = FUN_0041efcd(iVar2,8,0,(uint)uVar3,0,&iStack_18);
            *(int *)(puVar8 + 2) = iVar4;
            if (iStack_18 != 0) goto LAB_0043f242;
            if (*puVar8 != 0) {
              uVar5 = 0;
              do {
                uVar3 = FUN_00420d1e((int)piVar1);
                *(int *)(*(int *)(puVar8 + 2) + uVar5 * 8) = (int)(short)uVar3 << 2;
                uVar3 = FUN_00420d1e((int)piVar1);
                *(int *)(*(int *)(puVar8 + 2) + 4 + uVar5 * 8) = (int)(short)uVar3 << 2;
                uVar5 = uVar5 + 1;
              } while (uVar5 < *puVar8);
            }
            uVar5 = uStack_28 + 1;
            puVar8 = puVar8 + 4;
            iStack_2c = iStack_2c + 1;
          } while (uVar5 != uStack_30);
        }
        if (0x1ffff < (int)uStack_20) {
          uVar5 = FUN_00420d5c((int)piVar1);
          uVar6 = FUN_00420d5c((int)piVar1);
          piVar7 = piStack_34;
          if (uVar6 == 0) {
            if (uVar5 != 0) goto LAB_0043f28b;
          }
          else {
            iStack_18 = FUN_0043d413(param_1,uVar6 + iStack_24,(uint *)(piStack_34 + 1));
            if (iStack_18 == 0 && uVar5 != 0) {
LAB_0043f28b:
              iStack_18 = FUN_0043d238(param_1,uVar5 + iStack_24,(uint *)(piVar7 + 6),
                                       (uint *)(piVar7 + 1),local_1c);
            }
          }
        }
      }
    }
  }
LAB_0043f2a9:
  FUN_00420cde(piVar1);
LAB_0043f2b2:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_38);
  }
  return;
}


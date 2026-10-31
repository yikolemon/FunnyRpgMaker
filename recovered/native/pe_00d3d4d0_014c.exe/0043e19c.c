/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043e19c */

int __fastcall FUN_0043e19c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  ushort uVar9;
  uint uVar10;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  byte *pbStack_34;
  int iStack_30;
  ushort uStack_2c;
  ushort uStack_2a;
  int iStack_28;
  ushort uStack_24;
  byte bStack_22;
  int iStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&uStack_40;
  piVar1 = *(int **)(param_1 + 0x68);
  iVar2 = piVar1[7];
  iVar3 = *(int *)(param_1 + 0x2e0);
  iStack_18 = (**(code **)(param_1 + 0x204))(param_1,0x67766172,piVar1,&local_1c);
  if (iStack_18 != 0) goto LAB_0043e245;
  iVar5 = FUN_00420b00((int)piVar1);
  iStack_18 = FUN_00420fcf(piVar1,0x4e2904,(int)&iStack_30);
  if (iStack_18 != 0) goto LAB_0043e245;
  if ((((iStack_30 != 0x10000) || (uStack_2c != **(ushort **)(iVar3 + 0xc))) ||
      (local_1c >> 1 <= (uint)uStack_2a * (uint)uStack_2c &&
       (uint)uStack_2a * (uint)uStack_2c - (local_1c >> 1) != 0)) ||
     (uVar10 = uStack_24 + 1 << (bStack_22 & 1) + 1, local_1c < uVar10)) {
    iStack_18 = 8;
    goto LAB_0043e245;
  }
  *(uint *)(iVar3 + 0x50) = local_1c;
  pbStack_34 = (byte *)(iStack_20 + iVar5);
  iStack_18 = FUN_00420be1(piVar1,uVar10);
  if (iStack_18 != 0) goto LAB_0043e245;
  uStack_3c = piVar1[8];
  iVar6 = FUN_0041efcd(iVar2,4,0,uStack_24 + 1,0,&iStack_18);
  *(int *)(iVar3 + 0x4c) = iVar6;
  if (iStack_18 == 0) {
    uStack_38 = local_1c + iVar5;
    if ((bStack_22 & 1) == 0) {
      if ((int)((uint)uStack_24 * 2) <= piVar1[9] - piVar1[8]) {
        uStack_40 = 0;
        uVar10 = 0xffffffff;
        do {
          *(byte **)(*(int *)(iVar3 + 0x4c) + 4 + uVar10 * 4) =
               pbStack_34 +
               (uint)*(byte *)(uStack_3c + 2 + uVar10 * 2) * 0x200 +
               (uint)*(byte *)(uStack_3c + 3 + uVar10 * 2) * 2;
          iVar6 = *(int *)(iVar3 + 0x4c);
          uVar7 = *(uint *)(iVar6 + 4 + uVar10 * 4);
          uVar4 = uVar7;
          if (uVar7 < uStack_40) {
            *(uint *)(iVar6 + 4 + uVar10 * 4) = uStack_40;
            iVar6 = *(int *)(iVar3 + 0x4c);
            uVar7 = *(uint *)(iVar6 + 4 + uVar10 * 4);
            uVar4 = uStack_40;
          }
          uStack_40 = uVar4;
          if (uStack_38 < uVar7) {
            *(uint *)(iVar6 + 4 + uVar10 * 4) = uStack_38;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uStack_24);
LAB_0043e3b7:
        *(uint *)(iVar3 + 0x48) = (uint)uStack_24;
        FUN_00420cde(piVar1);
        if (uStack_2a == 0) goto LAB_0043e245;
        iStack_18 = FUN_00420696((int)piVar1,iVar5 + iStack_28);
        if ((iStack_18 == 0) &&
           (iStack_18 = FUN_00420be1(piVar1,(uint)uStack_2c * (uint)uStack_2a * 2), iStack_18 == 0))
        {
          pbStack_34 = (byte *)piVar1[8];
          iVar5 = FUN_0041efcd(iVar2,4,0,(uint)uStack_2a * (uint)uStack_2c,0,&iStack_18);
          *(int *)(iVar3 + 0x40) = iVar5;
          if (iStack_18 == 0) {
            uStack_38 = CONCAT22(uStack_38._2_2_,uStack_2a);
            uStack_3c = 0;
            if (uStack_2a != 0) {
              iVar5 = 0;
              uVar10 = 0;
              uVar9 = uStack_2c;
              do {
                uStack_40 = uVar10;
                uVar10 = 0;
                if (uVar9 == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar7 = (uint)uVar9;
                  do {
                    pbVar8 = pbStack_34;
                    pbStack_34 = pbVar8 + 2;
                    *(uint *)(uVar7 * iVar5 + *(int *)(iVar3 + 0x40) + uVar10 * 4) =
                         ((int)(short)((ushort)*pbVar8 << 8) + (uint)pbVar8[1]) * 4;
                    uVar10 = uVar10 + 1;
                    uVar7 = (uint)uStack_2c;
                  } while (uVar10 < uVar7);
                  uStack_38._2_2_ = (undefined2)((uint)pbVar8 >> 0x10);
                  uStack_38 = CONCAT22(uStack_38._2_2_,uStack_2a);
                  uVar9 = uStack_2c;
                }
                uStack_3c = uStack_38 & 0xffff;
                iVar5 = iVar5 + 4;
                uVar10 = uStack_40 + 1;
              } while (uStack_40 + 1 < uStack_3c);
            }
            iVar5 = FUN_0041c6b3(iVar2,4,0,uStack_3c,0,&iStack_18);
            *(int *)(iVar3 + 0x44) = iVar5;
            if (iStack_18 == 0) {
              *(uint *)(iVar3 + 0x3c) = (uint)uStack_2a;
              FUN_00420cde(piVar1);
              goto LAB_0043e245;
            }
          }
          goto LAB_0043e2b3;
        }
        goto LAB_0043e406;
      }
    }
    else if ((int)((uint)uStack_24 * 4) <= piVar1[9] - piVar1[8]) {
      uStack_40 = 0;
      uVar10 = 0xffffffff;
      do {
        uVar7 = *(uint *)(uStack_3c + 4 + uVar10 * 4);
        *(byte **)(*(int *)(iVar3 + 0x4c) + 4 + uVar10 * 4) =
             pbStack_34 +
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18);
        iVar6 = *(int *)(iVar3 + 0x4c);
        uVar7 = *(uint *)(iVar6 + 4 + uVar10 * 4);
        uVar4 = uVar7;
        if (uVar7 < uStack_40) {
          *(uint *)(iVar6 + 4 + uVar10 * 4) = uStack_40;
          iVar6 = *(int *)(iVar3 + 0x4c);
          uVar7 = *(uint *)(iVar6 + 4 + uVar10 * 4);
          uVar4 = uStack_40;
        }
        uStack_40 = uVar4;
        if (uStack_38 < uVar7) {
          *(uint *)(iVar6 + 4 + uVar10 * 4) = uStack_38;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uStack_24);
      goto LAB_0043e3b7;
    }
    iStack_18 = 8;
  }
  else {
LAB_0043e2b3:
    FUN_00420cde(piVar1);
  }
LAB_0043e406:
  FUN_0041c607(iVar2,*(int *)(iVar3 + 0x4c));
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
LAB_0043e245:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&uStack_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&uStack_40);
  }
  return iStack_18;
}


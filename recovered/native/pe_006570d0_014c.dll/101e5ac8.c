/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e5ac8 */

int FUN_101e5ac8(int param_1,undefined4 param_2,uint *param_3,uint *param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  local_18 = FUN_101c461e(iVar1,param_2);
  iVar8 = local_18;
  if (local_18 != 0) goto LAB_101e5b8e;
  cVar3 = FUN_101c4d1e(iVar1,&local_18);
  iVar8 = local_18;
  if ((local_18 != 0) || (bVar4 = FUN_101c4d1e(iVar1,&local_18), iVar8 = local_18, local_18 != 0))
  goto LAB_101e5b8e;
  if (cVar3 == '\x01') {
    uVar5 = FUN_101c4970(iVar1,&local_18);
LAB_101e5b51:
    *param_3 = uVar5;
    iVar8 = local_18;
    if (local_18 != 0) goto LAB_101e5b8e;
    if (bVar4 < 0x40) {
      iVar9 = (bVar4 >> 4) + 1;
      local_1c = bVar4 & 0xf;
      local_20 = 2 << (sbyte)local_1c;
      if (uVar5 * iVar9 < param_5 || uVar5 * iVar9 - param_5 == 0) {
        uVar5 = FUN_101c00c3(uVar2,4,0,uVar5,0,&local_18);
        param_3[2] = uVar5;
        iVar8 = local_18;
        if (local_18 != 0) goto LAB_101e5b8e;
        uVar5 = FUN_101c00c3(uVar2,4,0,*param_3,0,&local_18);
        param_3[1] = uVar5;
        iVar8 = local_18;
        if (local_18 != 0) goto LAB_101e5b8e;
        local_18 = FUN_101c4b69(iVar1,*param_3 * iVar9);
        if (local_18 == 0) {
          if (*param_3 != 0) {
            local_1c = local_1c + 1;
            local_20 = local_20 - 1;
            iVar8 = *(int *)(iVar1 + 0x20);
            uVar5 = 0;
            do {
              iVar7 = 0;
              uVar10 = 0;
              do {
                uVar10 = uVar10 << 8 | (uint)*(byte *)(iVar8 + iVar7);
                iVar7 = iVar7 + 1;
              } while (iVar9 != iVar7);
              if (uVar10 == 0xffffffff) {
                *(undefined4 *)(param_3[1] + uVar5 * 4) = 0xffff;
                uVar10 = 0xffff;
              }
              else {
                uVar6 = uVar10 >> ((byte)local_1c & 0x1f);
                if (*param_4 <= uVar6) goto LAB_101e5b89;
                *(uint *)(param_3[1] + uVar5 * 4) = uVar6;
                uVar10 = uVar10 & local_20;
                if (*(uint *)(param_4[1] + uVar6 * 0x14) <= uVar10) goto LAB_101e5b89;
              }
              iVar8 = iVar8 + iVar9;
              *(uint *)(param_3[2] + uVar5 * 4) = uVar10;
              uVar5 = uVar5 + 1;
            } while (uVar5 < *param_3);
          }
          FUN_101c4c66(iVar1);
          iVar8 = local_18;
          goto LAB_101e5b8e;
        }
      }
    }
  }
  else if (cVar3 == '\0') {
    uVar5 = FUN_101c4692(iVar1,&local_18);
    uVar5 = uVar5 & 0xffff;
    goto LAB_101e5b51;
  }
LAB_101e5b89:
  iVar8 = 8;
LAB_101e5b8e:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar8;
}


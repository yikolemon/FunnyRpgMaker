/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c4720 */

int FUN_101c4720(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                char param_6,int *param_7,int *param_8)

{
  undefined4 uVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  uVar1 = *param_1;
  iVar5 = FUN_101c461e(param_2,param_3);
  if ((iVar5 == 0) &&
     (local_1c = uVar1, sVar2 = FUN_101c4692(param_2,&local_18), iVar5 = local_18, local_18 == 0)) {
    iVar5 = 8;
    if ((sVar2 < 0xfef) && (iVar5 = 1, -1 < sVar2)) {
      iVar8 = sVar2 + 1;
      do {
        iVar6 = FUN_101c4970(param_2,&local_18);
        iVar5 = local_18;
        if (((local_18 != 0) ||
            (uVar3 = FUN_101c4692(param_2,&local_18), iVar5 = local_18, local_18 != 0)) ||
           (sVar2 = FUN_101c4692(param_2,&local_18), iVar5 = local_18, local_18 != 0))
        goto LAB_101c480b;
        if (iVar6 == param_5) {
          *param_8 = (short)uVar3 + 1;
          iVar5 = 8;
          if (((0xaa6 < uVar3) || (iVar5 = FUN_101c461e(param_2,param_3 + sVar2), iVar5 != 0)) ||
             (iVar8 = FUN_101c2a50(local_1c,8,0,*param_8,0,&local_18), iVar5 = local_18,
             local_18 != 0)) goto LAB_101c480b;
          iVar5 = *param_8;
          if (iVar5 < 1) goto LAB_101c48f0;
          iVar6 = 0;
          goto LAB_101c4875;
        }
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar5 = 1;
    }
  }
  goto LAB_101c480b;
  while( true ) {
    *(uint *)(iVar8 + 4 + iVar6 * 8) = uVar7 & 0xffffff;
    iVar6 = iVar6 + 1;
    iVar5 = *param_8;
    if (iVar5 <= iVar6) break;
LAB_101c4875:
    uVar4 = FUN_101c4692(param_2,&local_18);
    *(undefined2 *)(iVar8 + iVar6 * 8) = uVar4;
    iVar5 = local_18;
    if (((local_18 != 0) || (iVar5 = FUN_101c4672(param_2,2), iVar5 != 0)) ||
       ((uVar7 = FUN_101c4970(param_2,&local_18), iVar5 = local_18, local_18 != 0 ||
        (iVar5 = FUN_101c4672(param_2,4), local_18 = iVar5, iVar5 != 0)))) goto LAB_101c4953;
  }
LAB_101c48f0:
  if (param_6 != '\0') {
    FUN_1026fb00(iVar8,iVar5,8,&LAB_101c49fc);
    iVar5 = *param_8;
  }
  iVar6 = FUN_101c2a50(local_1c,4,0,iVar5,0,&local_18);
  iVar5 = local_18;
  if (local_18 == 0) {
    if (0 < *param_8) {
      iVar5 = 0;
      do {
        *(int *)(iVar6 + iVar5 * 4) = *(int *)(iVar8 + 4 + iVar5 * 8) + param_4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *param_8);
    }
    *param_7 = iVar6;
    iVar5 = 0;
  }
LAB_101c4953:
  FUN_101c0017(local_1c,iVar8);
LAB_101c480b:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar5;
}


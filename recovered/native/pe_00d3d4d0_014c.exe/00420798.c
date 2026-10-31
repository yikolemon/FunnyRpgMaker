/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00420798 */

int __cdecl
FUN_00420798(int *param_1,int *param_2,uint param_3,undefined4 param_4,uint param_5,char param_6,
            undefined4 param_7,uint *param_8,undefined4 param_9,undefined4 param_10,int *param_11,
            int *param_12)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int unaff_EBX;
  uint unaff_EBP;
  int iVar7;
  int unaff_EDI;
  int in_stack_ffffffe8;
  
  iVar6 = *param_1;
  iVar3 = FUN_00420696((int)param_2,param_3);
  if ((iVar3 == 0) &&
     (uVar1 = FUN_0042070a(param_2,(undefined4 *)&stack0xffffffe8), iVar3 = in_stack_ffffffe8,
     in_stack_ffffffe8 == 0)) {
    iVar3 = 8;
    if (((short)uVar1 < 0xfef) && (iVar3 = 1, -1 < (short)uVar1)) {
      iVar7 = (short)uVar1 + 1;
      do {
        uVar4 = FUN_004209e8(param_2,(undefined4 *)&stack0xffffffe8);
        iVar3 = in_stack_ffffffe8;
        if (((in_stack_ffffffe8 != 0) ||
            (uVar1 = FUN_0042070a(param_2,(undefined4 *)&stack0xffffffe8), iVar3 = in_stack_ffffffe8
            , in_stack_ffffffe8 != 0)) ||
           (uVar2 = FUN_0042070a(param_2,(undefined4 *)&stack0xffffffe8), iVar3 = in_stack_ffffffe8,
           in_stack_ffffffe8 != 0)) goto LAB_00420883;
        if (uVar4 == param_5) {
          *param_8 = (int)(short)uVar1 + 1;
          iVar3 = 8;
          if (((0xaa6 < uVar1) ||
              (iVar3 = FUN_00420696((int)param_2,param_3 + (int)(short)uVar2), iVar3 != 0)) ||
             (iVar3 = in_stack_ffffffe8,
             puVar5 = (undefined1 *)FUN_0041efcd(iVar6,8,0,*param_8,0,(int *)&stack0xffffffe8),
             iVar3 != 0)) goto LAB_00420883;
          uVar4 = *param_8;
          if ((int)uVar4 < 1) goto LAB_00420968;
          iVar7 = 0;
          iVar6 = iVar3;
          goto LAB_004208ed;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar3 = 1;
    }
  }
  goto LAB_00420883;
  while( true ) {
    *(uint *)(puVar5 + iVar7 * 8 + 4) = uVar4 & 0xffffff;
    iVar7 = iVar7 + 1;
    uVar4 = *param_8;
    iVar6 = iVar3;
    if ((int)uVar4 <= iVar7) break;
LAB_004208ed:
    uVar1 = FUN_0042070a(param_2,(undefined4 *)&stack0xffffffe8);
    *(ushort *)(puVar5 + iVar7 * 8) = uVar1;
    iVar3 = iVar6;
    if (((iVar6 != 0) || (iVar3 = FUN_004206ea((int)param_2,2), iVar3 != 0)) ||
       ((uVar4 = FUN_004209e8(param_2,(undefined4 *)&stack0xffffffe8), iVar3 = iVar6, iVar6 != 0 ||
        (iVar3 = FUN_004206ea((int)param_2,4), iVar3 != 0)))) goto LAB_004209cb;
  }
LAB_00420968:
  if (param_6 != '\0') {
    FUN_00492530(puVar5,uVar4,8,&LAB_00420a74);
    uVar4 = *param_8;
  }
  iVar6 = FUN_0041efcd(unaff_EDI,4,0,uVar4,0,(int *)&stack0xffffffe8);
  iVar3 = unaff_EBX;
  if (unaff_EBX == 0) {
    if (0 < *param_12) {
      iVar3 = 0;
      do {
        *(int *)(iVar6 + iVar3 * 4) = *(int *)(puVar5 + iVar3 * 8 + 4) + (int)param_8;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *param_12);
    }
    *param_11 = iVar6;
    iVar3 = 0;
  }
LAB_004209cb:
  FUN_0041c607(unaff_EDI,(int)puVar5);
LAB_00420883:
  if (DAT_0050e8c0 != (unaff_EBP ^ (uint)&stack0xfffffff4)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(unaff_EBP ^ (uint)&stack0xfffffff4);
  }
  return iVar3;
}


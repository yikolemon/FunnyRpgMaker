/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074f54 */

uint __fastcall FUN_10074f54(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iStack_38;
  undefined1 auStack_34 [32];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&iStack_38;
  uVar2 = CONCAT31((int3)(local_14 >> 8),1);
  if ((param_1[0xe] == 0) || (*(char *)((int)param_1 + 0x3d) != '\x01')) goto LAB_10074fd2;
  iVar1 = (**(code **)(*param_1 + 0xc))(0xffffffff);
  if (iVar1 == -1) {
LAB_10074fd0:
    uVar2 = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)param_1[0xe] + 0x20))
                      (param_1 + 0x10,auStack_34,&local_14,&iStack_38);
    if (iVar1 == 3) {
      *(undefined1 *)((int)param_1 + 0x3d) = 0;
      uVar2 = 1;
      goto LAB_10074fd2;
    }
    if (iVar1 != 1) {
      if (iVar1 != 0) goto LAB_10074fd0;
      *(undefined1 *)((int)param_1 + 0x3d) = 0;
    }
    iVar3 = iStack_38 - (int)auStack_34;
    if (iVar3 != 0) {
      iVar1 = FUN_1026f01a(auStack_34,1,iVar3,param_1[0x13]);
      if (iVar3 != iVar1) goto LAB_10074fd0;
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)((int)param_1 + 0x3d)) ^ 1;
  }
LAB_10074fd2:
  if (DAT_10388d00 == (local_14 ^ (uint)&iStack_38)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


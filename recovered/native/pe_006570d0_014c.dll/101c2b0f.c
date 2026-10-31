/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2b0f */

int FUN_101c2b0f(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  iVar5 = 6;
  if ((param_3 == (int *)0x0 || param_1 == (undefined4 *)0x0) || (iVar1 = *param_3, iVar1 == 0))
  goto LAB_101c2bee;
  uVar2 = *(undefined4 *)(iVar1 + 100);
  local_1c = iVar1;
  puVar3 = (undefined8 *)FUN_101bff17(uVar2,*param_1,&local_18);
  iVar1 = local_1c;
  iVar5 = local_18;
  if (local_18 == 0) {
    *(int *)(puVar3 + 1) = param_3[2];
    *puVar3 = *(undefined8 *)param_3;
    *(undefined4 **)((int)puVar3 + 0xc) = param_1;
    local_20 = uVar2;
    if ((code *)param_1[1] == (code *)0x0) {
LAB_101c2ba2:
      iVar4 = FUN_101c2a50(local_20,4,*(int *)(iVar1 + 0x24),*(int *)(iVar1 + 0x24) + 1,
                           *(undefined4 *)(iVar1 + 0x28),&local_18);
      *(int *)(iVar1 + 0x28) = iVar4;
      iVar5 = local_18;
      if (local_18 == 0) {
        iVar5 = *(int *)(iVar1 + 0x24);
        *(int *)(iVar1 + 0x24) = iVar5 + 1;
        *(undefined8 **)(iVar4 + iVar5 * 4) = puVar3;
        iVar5 = 0;
        goto LAB_101c2be4;
      }
    }
    else {
      iVar5 = (*(code *)param_1[1])(puVar3,param_2);
      if (iVar5 == 0) goto LAB_101c2ba2;
    }
    FUN_101c2ae9();
    puVar3 = (undefined8 *)0x0;
  }
LAB_101c2be4:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = puVar3;
  }
LAB_101c2bee:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


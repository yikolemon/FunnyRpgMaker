/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041f08c */

int __cdecl FUN_0041f08c(size_t *param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  iVar4 = 6;
  if ((param_3 == (int *)0x0 || param_1 == (size_t *)0x0) || (iVar1 = *param_3, iVar1 == 0))
  goto LAB_0041f16b;
  iVar3 = *(int *)(iVar1 + 100);
  local_1c = iVar1;
  piVar2 = FUN_0041c507(iVar3,*param_1,&local_18);
  iVar1 = local_1c;
  iVar4 = local_18;
  if (local_18 == 0) {
    piVar2[2] = param_3[2];
    *(undefined8 *)piVar2 = *(undefined8 *)param_3;
    piVar2[3] = (int)param_1;
    local_20 = iVar3;
    if ((code *)param_1[1] == (code *)0x0) {
LAB_0041f11f:
      iVar3 = FUN_0041efcd(local_20,4,*(uint *)(iVar1 + 0x24),*(uint *)(iVar1 + 0x24) + 1,
                           *(int *)(iVar1 + 0x28),&local_18);
      *(int *)(iVar1 + 0x28) = iVar3;
      iVar4 = local_18;
      if (local_18 == 0) {
        iVar4 = *(int *)(iVar1 + 0x24);
        *(int *)(iVar1 + 0x24) = iVar4 + 1;
        *(int **)(iVar3 + iVar4 * 4) = piVar2;
        iVar4 = 0;
        goto LAB_0041f161;
      }
    }
    else {
      iVar4 = (*(code *)param_1[1])(piVar2,param_2);
      if (iVar4 == 0) goto LAB_0041f11f;
    }
    FUN_0041f066(piVar2);
    piVar2 = (int *)0x0;
  }
LAB_0041f161:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = piVar2;
  }
LAB_0041f16b:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_20)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_20);
}


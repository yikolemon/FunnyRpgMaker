/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c20b4 */

int FUN_101c20b4(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  if (param_1 == 0) {
    iVar4 = 0x23;
    goto LAB_101c216e;
  }
  if (param_2 == (int *)0x0) {
    iVar4 = 6;
    goto LAB_101c216e;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar4 = 0x22;
    goto LAB_101c216e;
  }
  *param_2 = 0;
  uVar1 = *(undefined4 *)(param_1 + 100);
  local_1c = *(int *)(*(int *)(param_1 + 0x60) + 0xc);
  piVar2 = (int *)FUN_101bff17(uVar1,*(undefined4 *)(local_1c + 0x28),&local_18);
  iVar3 = 0;
  iVar4 = local_18;
  if (local_18 == 0) {
    iVar3 = FUN_101c21f6(uVar1,0xc,&local_18);
    iVar4 = local_18;
    if (local_18 != 0) goto LAB_101c212e;
    *piVar2 = param_1;
    local_20 = iVar3;
    iVar3 = FUN_101bff17(uVar1,0x24,&local_18);
    iVar4 = local_18;
    if (local_18 == 0) {
      piVar2[10] = iVar3;
      if (*(code **)(local_1c + 0x38) != (code *)0x0) {
        iVar4 = (**(code **)(local_1c + 0x38))(piVar2);
        if (iVar4 != 0) goto LAB_101c21a6;
      }
      *param_2 = (int)piVar2;
      *(int **)(local_20 + 8) = piVar2;
      FUN_101c2229(param_1 + 0x6c,local_20);
      iVar4 = 0;
      goto LAB_101c216e;
    }
LAB_101c21a6:
    FUN_101c0017(uVar1,local_20);
LAB_101c213c:
    FUN_101c0017(uVar1,piVar2[10]);
    piVar2[10] = 0;
  }
  else {
LAB_101c212e:
    FUN_101c0017(uVar1,iVar3);
    if (piVar2 != (int *)0x0) goto LAB_101c213c;
  }
  FUN_101c0017(uVar1,piVar2);
LAB_101c216e:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


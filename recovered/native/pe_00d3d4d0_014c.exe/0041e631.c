/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041e631 */

int __cdecl FUN_0041e631(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  if (param_1 == 0) {
    iVar5 = 0x23;
    goto LAB_0041e6eb;
  }
  if (param_2 == (undefined4 *)0x0) {
    iVar5 = 6;
    goto LAB_0041e6eb;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar5 = 0x22;
    goto LAB_0041e6eb;
  }
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 100);
  local_1c = *(int *)(*(int *)(param_1 + 0x60) + 0xc);
  piVar2 = FUN_0041c507(iVar1,*(size_t *)(local_1c + 0x28),&local_18);
  piVar3 = (int *)0x0;
  iVar5 = local_18;
  if (local_18 == 0) {
    piVar3 = (int *)FUN_0041e773(iVar1,0xc,&local_18);
    iVar5 = local_18;
    if (local_18 != 0) goto LAB_0041e6ab;
    *piVar2 = param_1;
    local_20 = piVar3;
    pvVar4 = FUN_0041c507(iVar1,0x24,&local_18);
    iVar5 = local_18;
    if (local_18 == 0) {
      piVar2[10] = (int)pvVar4;
      if (*(code **)(local_1c + 0x38) != (code *)0x0) {
        iVar5 = (**(code **)(local_1c + 0x38))(piVar2);
        if (iVar5 != 0) goto LAB_0041e723;
      }
      *param_2 = piVar2;
      local_20[2] = (int)piVar2;
      FUN_0041e7a6((undefined4 *)(param_1 + 0x6c),local_20);
      iVar5 = 0;
      goto LAB_0041e6eb;
    }
LAB_0041e723:
    FUN_0041c607(iVar1,(int)local_20);
LAB_0041e6b9:
    FUN_0041c607(iVar1,piVar2[10]);
    piVar2[10] = 0;
  }
  else {
LAB_0041e6ab:
    FUN_0041c607(iVar1,(int)piVar3);
    if (piVar2 != (int *)0x0) goto LAB_0041e6b9;
  }
  FUN_0041c607(iVar1,(int)piVar2);
LAB_0041e6eb:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_20)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_20);
}


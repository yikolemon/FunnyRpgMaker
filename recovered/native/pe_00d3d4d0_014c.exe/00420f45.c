/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00420f45 */

undefined4 __cdecl FUN_00420f45(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  uint local_14;
  
  puVar4 = &local_18;
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  iVar1 = param_1[2];
  uVar3 = 0;
  uVar2 = 0x55;
  if ((uint)param_1[1] <= iVar1 + 3U) goto LAB_00420fa8;
  if ((code *)param_1[5] == (code *)0x0) {
    if (*param_1 != 0) {
      puVar4 = (undefined4 *)(*param_1 + iVar1);
      goto LAB_00420f9a;
    }
    uVar3 = 0;
  }
  else {
    iVar1 = (*(code *)param_1[5])(param_1,iVar1,&local_18,4);
    if (iVar1 != 4) goto LAB_00420fa8;
    iVar1 = param_1[2];
LAB_00420f9a:
    uVar3 = *puVar4;
  }
  param_1[2] = iVar1 + 4;
  uVar2 = 0;
LAB_00420fa8:
  *param_2 = uVar2;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}


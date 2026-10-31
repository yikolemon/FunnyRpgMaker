/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463510 */

int __fastcall FUN_00463510(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  int iStack_c;
  uint local_8;
  
  piVar3 = &local_10;
  local_8 = DAT_0050e8c0 ^ (uint)&local_10;
  iVar2 = *(int *)(param_1 + 4);
  puVar1 = *(undefined4 **)(*(int *)(iVar2 + 0x80) + 0x34);
  if (puVar1 == (undefined4 *)0x0) {
    piVar3 = (int *)(param_2 * 4 + *(int *)(iVar2 + 0x1ac));
    iStack_c = *(int *)(*(int *)(iVar2 + 0x1b0) + param_2 * 4);
  }
  else {
    iVar2 = (**(code **)*puVar1)(puVar1[1],param_2,&local_10);
    if (iVar2 != 0) goto LAB_00463576;
  }
  iVar2 = *piVar3;
  *param_3 = 0;
  param_3[3] = iVar2;
  param_3[1] = iVar2;
  param_3[2] = iStack_c + iVar2;
  iVar2 = 0;
LAB_00463576:
  if (DAT_0050e8c0 != (local_8 ^ (uint)&local_10)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&local_10);
  }
  return iVar2;
}


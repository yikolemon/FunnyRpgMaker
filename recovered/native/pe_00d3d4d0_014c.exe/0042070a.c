/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042070a */

ushort __cdecl FUN_0042070a(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined1 auStack_18 [2];
  ushort local_16;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_18;
  iVar2 = param_1[2];
  uVar3 = 0x55;
  if ((uint)param_1[1] <= iVar2 + 1U) {
LAB_00420753:
    uVar1 = 0;
    goto LAB_00420773;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    if (*param_1 != 0) {
      puVar4 = (ushort *)(*param_1 + iVar2);
      goto LAB_0042075f;
    }
    uVar1 = 0;
  }
  else {
    puVar4 = &local_16;
    iVar2 = (*(code *)param_1[5])(param_1,iVar2,puVar4,2);
    if (iVar2 != 2) goto LAB_00420753;
    iVar2 = param_1[2];
LAB_0042075f:
    uVar1 = *puVar4 << 8 | *puVar4 >> 8;
  }
  param_1[2] = iVar2 + 2;
  uVar3 = 0;
LAB_00420773:
  *param_2 = uVar3;
  if (DAT_0050e8c0 == (local_14 ^ (uint)auStack_18)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)auStack_18);
}


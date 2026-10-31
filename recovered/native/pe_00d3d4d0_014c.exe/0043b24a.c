/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b24a */

void __fastcall FUN_0043b24a(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  uVar1 = *param_2;
  if (uVar1 < *(ushort *)(param_1 + 0x1b0)) {
    iVar3 = *(int *)(param_1 + 0x1b4);
    if ((*(int *)(param_1 + 0x134) == 3) && (iVar3 != *(int *)(param_1 + 0x1bc))) {
      puVar2 = (uint *)FUN_0041efcd(*(int *)(param_1 + 8),4,(uint)*(ushort *)(param_1 + 0x1b8),
                                    (uint)*(ushort *)(param_1 + 0x1b0),*(int *)(param_1 + 0x1bc),
                                    &local_18);
      *(uint **)(param_1 + 0x1bc) = puVar2;
      *(int *)(param_1 + 0x10) = local_18;
      if (local_18 != 0) goto LAB_0043b2f5;
      *(ushort *)(param_1 + 0x1b8) = *(ushort *)(param_1 + 0x1b0);
      FUN_004878c0(puVar2,*(uint **)(param_1 + 0x1b4),(uint)*(ushort *)(param_1 + 0x1b0) << 2);
      iVar3 = *(int *)(param_1 + 0x1bc);
      *(int *)(param_1 + 0x1b4) = iVar3;
    }
    *(uint *)(iVar3 + uVar1 * 4) = param_2[1];
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
LAB_0043b2f5:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}


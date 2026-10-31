/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3ada */

void __fastcall FUN_101e3ada(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  uVar1 = *param_2;
  if (uVar1 < *(ushort *)(param_1 + 0x1b0)) {
    iVar3 = *(int *)(param_1 + 0x1b4);
    if ((*(int *)(param_1 + 0x134) == 3) && (iVar3 != *(int *)(param_1 + 0x1bc))) {
      uVar2 = FUN_101c2a50(*(undefined4 *)(param_1 + 8),4,*(undefined2 *)(param_1 + 0x1b8),
                           (uint)*(ushort *)(param_1 + 0x1b0),*(int *)(param_1 + 0x1bc),&local_18);
      *(undefined4 *)(param_1 + 0x1bc) = uVar2;
      *(int *)(param_1 + 0x10) = local_18;
      if (local_18 != 0) goto LAB_101e3b85;
      *(ushort *)(param_1 + 0x1b8) = *(ushort *)(param_1 + 0x1b0);
      FUN_1025b2d0(uVar2,*(undefined4 *)(param_1 + 0x1b4),(uint)*(ushort *)(param_1 + 0x1b0) << 2);
      iVar3 = *(int *)(param_1 + 0x1bc);
      *(int *)(param_1 + 0x1b4) = iVar3;
    }
    *(uint *)(iVar3 + uVar1 * 4) = param_2[1];
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
LAB_101e3b85:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


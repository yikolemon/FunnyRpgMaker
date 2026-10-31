/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00450b14 */

int __fastcall FUN_00450b14(int param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  piVar1 = *(int **)(param_1 + 0x148);
  iVar5 = *(int *)(param_1 + 0x124) + *(int *)(param_1 + 0x120);
  iVar3 = FUN_00420696((int)piVar1,
                       param_2 * iVar5 + *(int *)(param_1 + 0x134) + *(int *)(param_1 + 0x11c));
  if ((iVar3 == 0) && (iVar3 = FUN_00420be1(piVar1,iVar5 * 2), iVar3 == 0)) {
    local_18 = piVar1[8];
    iVar3 = *(int *)(param_1 + 0x120);
    local_1c = FUN_00450c1d(&local_18,iVar3);
    iVar5 = *(int *)(param_1 + 0x124);
    local_20 = FUN_00450c1d(&local_18,iVar5);
    uVar2 = local_1c;
    local_18 = local_18 + iVar3;
    uVar4 = FUN_00450c1d(&local_18,iVar5);
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar2;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = local_20;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar4;
    }
    iVar3 = 9;
    if ((uVar2 < *(uint *)(param_1 + 300)) && (uVar4 <= (uint)piVar1[1])) {
      iVar3 = (uint)(uVar4 < local_20) * 9;
    }
    FUN_00420cde(piVar1);
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_20);
  }
  return iVar3;
}


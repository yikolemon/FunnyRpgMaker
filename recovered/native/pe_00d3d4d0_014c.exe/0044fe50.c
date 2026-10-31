/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044fe50 */

int __fastcall FUN_0044fe50(int param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  local_18 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar5 = 0;
    if (param_2 != 0) {
      uVar5 = 0;
      uVar1 = 0;
      do {
        uVar4 = *(ushort *)(*(int *)(param_1 + 8) + uVar5 * 2);
        if (uVar4 <= uVar1) {
          uVar4 = uVar1;
        }
        uVar5 = uVar5 + 1;
        uVar1 = uVar4;
      } while (param_2 != uVar5);
      uVar5 = (uint)uVar4;
    }
    iVar2 = FUN_0041c6b3(param_3,2,0,uVar5 + 1,0,&local_18);
    *(int *)(param_1 + 0xc) = iVar2;
    iVar2 = local_18;
    if (local_18 == 0) {
      if (param_2 == 0) {
        iVar2 = 0;
      }
      else {
        uVar3 = param_2 - 1;
        do {
          *(short *)(*(int *)(param_1 + 0xc) +
                    (uint)*(ushort *)(*(int *)(param_1 + 8) + uVar3 * 2) * 2) = (short)uVar3;
          uVar3 = uVar3 - 1;
        } while (uVar3 < param_2);
      }
      *(uint *)(param_1 + 0x10) = uVar5;
      *(uint *)(param_1 + 0x14) = param_2;
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return iVar2;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f86d8 */

int __fastcall FUN_101f86d8(int param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  local_18 = 0;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar6 = 0;
    if (param_2 != 0) {
      uVar6 = 0;
      uVar1 = 0;
      do {
        uVar5 = *(ushort *)(*(int *)(param_1 + 8) + uVar6 * 2);
        if (uVar5 <= uVar1) {
          uVar5 = uVar1;
        }
        uVar6 = uVar6 + 1;
        uVar1 = uVar5;
      } while (param_2 != uVar6);
      uVar6 = (uint)uVar5;
    }
    uVar2 = FUN_101c00c3(param_3,2,0,uVar6 + 1,0,&local_18);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    iVar4 = local_18;
    if (local_18 == 0) {
      if (param_2 == 0) {
        iVar4 = 0;
      }
      else {
        uVar3 = param_2 - 1;
        do {
          *(short *)(*(int *)(param_1 + 0xc) +
                    (uint)*(ushort *)(*(int *)(param_1 + 8) + uVar3 * 2) * 2) = (short)uVar3;
          uVar3 = uVar3 - 1;
        } while (uVar3 < param_2);
      }
      *(uint *)(param_1 + 0x10) = uVar6;
      *(uint *)(param_1 + 0x14) = param_2;
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar4;
}


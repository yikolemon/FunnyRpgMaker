/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00475b18 */

undefined4 __fastcall FUN_00475b18(byte *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18) + -4;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (*(short *)(param_1 + 0x54) != 0) {
    uVar5 = 0xffffffff;
    uVar4 = 0;
    do {
      param_1[0x50] = 0;
      param_1[0x51] = 0;
      param_1[0x52] = 0;
      param_1[0x53] = 0;
      param_1[0x4c] = 0;
      param_1[0x4d] = 0;
      param_1[0x4e] = 0;
      param_1[0x4f] = 0;
      iVar3 = uVar5 + 1;
      uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x60) + uVar4 * 2);
      uVar2 = FUN_00475e79(param_1,iVar3,uVar5,param_2);
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      if (*(int *)(param_1 + 0x4c) != 0) {
        uVar1 = *(uint *)(param_1 + 0x30);
        if (((((*(int *)(param_1 + 4) - 1U & uVar1) == 0) &&
             (*(int *)(param_1 + 0x34) <= (int)uVar1)) && ((int)uVar1 <= *(int *)(param_1 + 0x38)))
           && (((*(ushort *)(*(int *)(param_1 + 0x44) + 0x14) ^
                *(ushort *)(*(int *)(param_1 + 0x4c) + 0x14)) & 8) == 0)) {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -4;
        }
        uVar2 = FUN_00476211((int)param_1);
        if ((char)uVar2 != '\0') {
          return CONCAT31((int3)((uint)extraout_ECX >> 8),1);
        }
        if (*(int *)(param_1 + 0x48) == 0) {
          *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x4c);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_1 + 0x54));
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_004762e3((int)param_1);
    }
  }
  return 0;
}


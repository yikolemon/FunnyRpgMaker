/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047630e */

undefined4 __fastcall FUN_0047630e(byte *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (param_3 != uVar1) {
    iVar3 = ((int)param_3 <= (int)uVar1) + 1;
    if (*(int *)(param_1 + 0x50) != iVar3) {
      if (*(int *)(param_1 + 0x50) != 0) {
        uVar2 = FUN_00476211((int)param_1);
        if ((char)uVar2 != '\0') {
          return CONCAT31((int3)((uint)uVar2 >> 8),1);
        }
      }
      uVar2 = FUN_0047669e(param_1,iVar3);
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    if ((int)uVar1 < (int)param_3) {
      uVar4 = FUN_00476777(param_1,*(int *)(param_1 + 0x2c),*(uint *)(param_1 + 0x30),param_2,
                           param_3,*(uint *)(param_1 + 0x34),*(uint *)(param_1 + 0x38));
      uVar2 = (undefined4)uVar4;
    }
    else {
      uVar4 = FUN_004768e2(param_1,*(int *)(param_1 + 0x2c),*(uint *)(param_1 + 0x30),param_2,
                           param_3,*(uint *)(param_1 + 0x34),*(uint *)(param_1 + 0x38));
      uVar2 = (undefined4)uVar4;
    }
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  *(int *)(param_1 + 0x2c) = param_2;
  *(uint *)(param_1 + 0x30) = param_3;
  return 0;
}


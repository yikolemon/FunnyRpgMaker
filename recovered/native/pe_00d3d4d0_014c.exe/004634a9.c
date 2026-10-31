/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004634a9 */

int __fastcall FUN_004634a9(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < 0x100) {
    pbVar4 = (byte *)(**(code **)(*(int *)(param_1 + 0x25c) + 0x14))
                               (*(undefined2 *)
                                 (*(int *)(*(int *)(param_1 + 0x25c) + 0x18) + param_2 * 2));
    iVar1 = *(int *)(param_1 + 0x248);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x244);
      iVar6 = 0;
      do {
        pbVar3 = *(byte **)(iVar2 + iVar6 * 4);
        if (((pbVar3 != (byte *)0x0) && (*pbVar3 == *pbVar4)) &&
           (uVar5 = FUN_00493010(pbVar3,pbVar4), uVar5 == 0)) {
          return iVar6;
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  return -1;
}


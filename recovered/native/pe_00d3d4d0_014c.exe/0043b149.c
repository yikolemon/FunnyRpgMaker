/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b149 */

void __fastcall FUN_0043b149(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x140) + 1;
  if ((iVar2 < *(int *)(param_1 + 0x144)) &&
     (uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x13c) + iVar2),
     (int)(iVar2 + uVar4) < *(int *)(param_1 + 0x144))) {
    if (uVar4 < (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) + 1U) {
      if (uVar4 != 0) {
        iVar3 = 0;
        do {
          pbVar1 = (byte *)(*(int *)(param_1 + 0x13c) + 1 + iVar2);
          iVar2 = iVar2 + 1;
          *(uint *)(param_2 + iVar3) = (uint)*pbVar1;
          iVar3 = iVar3 + 4;
        } while (uVar4 * 4 - iVar3 != 0);
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar4;
      *(int *)(param_1 + 0x140) = iVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0x82;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0x83;
  }
  return;
}


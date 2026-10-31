/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043c5b6 */

void __fastcall FUN_0043c5b6(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x140);
  uVar3 = (uint)*(byte *)(param_1 + 0x148);
  if ((int)(uVar3 + iVar2 + -0xaf) < *(int *)(param_1 + 0x144)) {
    if (uVar3 - 0xaf < (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) + 1U) {
      if (0xaf < *(byte *)(param_1 + 0x148)) {
        iVar4 = 0;
        do {
          pbVar1 = (byte *)(*(int *)(param_1 + 0x13c) + 1 + iVar2);
          iVar2 = iVar2 + 1;
          *(uint *)(param_2 + iVar4) = (uint)*pbVar1;
          iVar4 = iVar4 + 4;
        } while (uVar3 * 4 + -700 != iVar4);
      }
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


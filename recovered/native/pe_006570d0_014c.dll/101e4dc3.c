/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4dc3 */

void __fastcall FUN_101e4dc3(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x140);
  uVar4 = (uint)*(byte *)(param_1 + 0x148);
  if ((int)(iVar3 + uVar4 * 2 + -0x16e) < *(int *)(param_1 + 0x144)) {
    if (uVar4 - 0xb7 < (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) + 1U) {
      if (0xb7 < *(byte *)(param_1 + 0x148)) {
        iVar5 = 0;
        do {
          iVar1 = iVar3 + 1;
          iVar2 = iVar3 + 2;
          iVar3 = iVar3 + 2;
          *(uint *)(param_2 + iVar5) =
               (uint)*(byte *)(iVar2 + *(int *)(param_1 + 0x13c)) |
               (int)(short)((ushort)*(byte *)(iVar1 + *(int *)(param_1 + 0x13c)) << 8);
          iVar5 = iVar5 + 4;
        } while (uVar4 * 4 + -0x2dc != iVar5);
      }
      *(int *)(param_1 + 0x140) = iVar3;
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


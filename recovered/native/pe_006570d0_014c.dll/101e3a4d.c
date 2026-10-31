/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3a4d */

void __fastcall FUN_101e3a4d(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0x140) + 1;
  if ((iVar3 < *(int *)(param_1 + 0x144)) &&
     (uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x13c) + iVar3),
     (int)(iVar3 + uVar5 * 2) < *(int *)(param_1 + 0x144))) {
    if (uVar5 < (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) + 1U) {
      if (uVar5 != 0) {
        iVar4 = 0;
        do {
          iVar1 = iVar3 + 1;
          iVar2 = iVar3 + 2;
          iVar3 = iVar3 + 2;
          *(uint *)(param_2 + iVar4) =
               (uint)*(byte *)(iVar2 + *(int *)(param_1 + 0x13c)) |
               (int)(short)((ushort)*(byte *)(iVar1 + *(int *)(param_1 + 0x13c)) << 8);
          iVar4 = iVar4 + 4;
        } while (uVar5 * 4 - iVar4 != 0);
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar5;
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


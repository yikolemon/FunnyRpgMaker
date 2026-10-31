/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020cf6d */

int __fastcall FUN_1020cf6d(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  
  if ((param_2 < 0x100) && (*(int *)(param_1 + 0x4a4) != 0)) {
    sVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc0c))(param_2);
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar2 = 0;
      do {
        if (*(short *)(*(int *)(param_1 + 0x4a4) + iVar2 * 2) == sVar1) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
      } while (*(int *)(param_1 + 0x14) != iVar2);
    }
  }
  return -1;
}


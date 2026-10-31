/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004646ed */

int __fastcall FUN_004646ed(int param_1,uint param_2)

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


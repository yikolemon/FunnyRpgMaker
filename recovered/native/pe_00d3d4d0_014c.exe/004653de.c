/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004653de */

void __fastcall FUN_004653de(byte *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = FUN_00493010((byte *)("Delta" + *(int *)((int)&DAT_004f617c + iVar2)),param_1);
    if (uVar1 == 0) {
      if (*(int *)(param_4 + iVar2) != 0) {
        return;
      }
      *(undefined4 *)(param_4 + iVar2) = 1;
      *(undefined4 *)(param_3 + iVar2) = param_2;
      return;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x28);
  return;
}


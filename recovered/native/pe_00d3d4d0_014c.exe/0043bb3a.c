/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043bb3a */

void __fastcall FUN_0043bb3a(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x100);
  if (*(int *)(param_1 + 0x24) < iVar2) {
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar2;
    if ((*(int *)(param_1 + 0x204) != 7) && (iVar2 != 0)) {
      iVar3 = 0;
      do {
        uVar4 = (uint)*(ushort *)(param_2 + -4 + iVar3 * 4);
        if (uVar4 < *(ushort *)(param_1 + 0x7c)) {
          pbVar1 = (byte *)(*(int *)(param_1 + 0x8c) + uVar4);
          *pbVar1 = *pbVar1 ^ 1;
        }
        else if (*(char *)(param_1 + 0x1ce) != '\0') {
          *(undefined4 *)(param_1 + 0x10) = 0x86;
          return;
        }
        iVar3 = iVar3 + -1;
      } while (-iVar3 != iVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x100) = 1;
  return;
}


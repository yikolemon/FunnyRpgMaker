/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00439f28 */

void __fastcall FUN_00439f28(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    uVar1 = FUN_0044420e(param_1);
    if ((char)uVar1 != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x148) == 'Y') {
      iVar2 = iVar2 + -1;
    }
    else if (*(char *)(param_1 + 0x148) == 'X') {
      iVar2 = iVar2 + 1;
    }
  } while (iVar2 != 0);
  return;
}


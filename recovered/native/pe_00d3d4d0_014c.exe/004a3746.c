/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a3746 */

undefined4 __cdecl FUN_004a3746(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = 0xe3;
  do {
    iVar4 = (iVar3 + iVar5) / 2;
    iVar2 = FUN_004a5be0(param_1,*(ushort **)(&UNK_004facf8 + iVar4 * 8),0x55);
    if (iVar2 == 0) {
      return *(undefined4 *)(&UNK_004facfc + iVar4 * 8);
    }
    iVar1 = iVar4 + -1;
    if (-1 < iVar2) {
      iVar5 = iVar4 + 1;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
  } while (iVar5 <= iVar3);
  return 0xffffffff;
}


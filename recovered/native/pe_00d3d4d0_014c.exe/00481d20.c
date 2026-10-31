/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481d20 */

void __cdecl FUN_00481d20(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  FUN_0047f2d0(&local_8,2);
  uVar2 = 1;
  *(undefined4 *)(param_1 + 8) = 1;
  do {
    iVar1 = *(int *)(uVar2 * 4 + 0x51bbd0);
    if ((iVar1 == 0) || (iVar1 == param_1)) break;
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 8) = uVar2;
  } while (uVar2 < 8);
  (&DAT_0051bbf8)[uVar2] = (&DAT_0051bbf8)[uVar2] + '\x01';
  *(int *)(uVar2 * 4 + 0x51bbd0) = param_1;
  FUN_0047f310(&local_8);
  return;
}


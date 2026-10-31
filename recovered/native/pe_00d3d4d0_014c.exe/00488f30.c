/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488f30 */

void __fastcall FUN_00488f30(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00488ed0(param_1);
  param_1[3] = *(int *)(iVar1 + 0x4c);
  param_1[4] = *(int *)(iVar1 + 0x48);
  FUN_00496713(iVar1,param_1 + 3,param_1[1]);
  FUN_00496744(iVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(iVar1 + 0x350) & 2) == 0) {
    *(uint *)(iVar1 + 0x350) = *(uint *)(iVar1 + 0x350) | 2;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046ff07 */

int __fastcall FUN_0046ff07(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uStack_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&uStack_1c;
  piVar1 = *(int **)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x1dc);
  iVar4 = (**(code **)(param_1 + 0x204))(param_1,0x706f7374,piVar1,&uStack_1c);
  if ((((iVar4 == 0) && (0x21 < uStack_1c)) &&
      (iStack_18 = FUN_004206ea((int)piVar1,0x20), iVar4 = iStack_18, iStack_18 == 0)) &&
     ((uVar3 = FUN_0042070a(piVar1,&iStack_18), iVar4 = iStack_18, iStack_18 == 0 &&
      (iVar4 = 0, (ushort)(uVar3 - 1) < *(ushort *)(param_1 + 0x108))))) {
    if (iVar2 == 0x25000) {
      iVar4 = FUN_004701d4(param_1 + 0x27c,piVar1,uVar3,uStack_1c - 0x22);
    }
    else if (iVar2 == 0x20000) {
      iVar4 = FUN_0046ffec(param_1 + 0x27c,piVar1,uVar3,uStack_1c - 0x22);
    }
  }
  *(undefined1 *)(param_1 + 0x27c) = 1;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&uStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&uStack_1c);
  }
  return iVar4;
}


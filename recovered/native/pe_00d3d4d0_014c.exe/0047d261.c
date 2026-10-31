/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047d261 */

undefined4 __fastcall FUN_0047d261(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  
  bVar2 = FUN_0047d28a(param_1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  uVar3 = FUN_0047d2ba(param_1);
  return uVar3;
}


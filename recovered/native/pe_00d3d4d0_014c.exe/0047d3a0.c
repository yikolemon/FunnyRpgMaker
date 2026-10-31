/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047d3a0 */

undefined4 __fastcall FUN_0047d3a0(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  bVar2 = FUN_0047d28a(param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    uVar3 = -param_2;
    iVar5 = 0;
    if (-1 < (int)param_2) {
      iVar5 = (param_2 >> 4) + 5;
      uVar3 = param_2 & 0xf;
    }
    if (uVar3 == 0 || 7 < (int)uVar3) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if ((*(int *)(iVar1 + 0x38) != 0) && (*(uint *)(iVar1 + 0x28) != uVar3)) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 0x38));
        *(undefined4 *)(iVar1 + 0x38) = 0;
      }
      *(int *)(iVar1 + 0xc) = iVar5;
      *(uint *)(iVar1 + 0x28) = uVar3;
      uVar4 = FUN_0047d261(param_1);
      return uVar4;
    }
  }
  return 0xfffffffe;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10226334 */

undefined4 __fastcall FUN_10226334(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_1022621e();
  if (iVar2 == 0) {
    uVar3 = -param_2;
    iVar2 = 0;
    if (-1 < (int)param_2) {
      iVar2 = (param_2 >> 4) + 5;
      uVar3 = param_2 & 0xf;
    }
    if (uVar3 == 0 || 7 < (int)uVar3) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if ((*(int *)(iVar1 + 0x38) != 0) && (*(uint *)(iVar1 + 0x28) != uVar3)) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 0x38));
        *(undefined4 *)(iVar1 + 0x38) = 0;
      }
      *(int *)(iVar1 + 0xc) = iVar2;
      *(uint *)(iVar1 + 0x28) = uVar3;
      uVar4 = FUN_102261f5();
      return uVar4;
    }
  }
  return 0xfffffffe;
}


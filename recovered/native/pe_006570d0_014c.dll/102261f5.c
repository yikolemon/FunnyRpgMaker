/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102261f5 */

undefined4 __fastcall FUN_102261f5(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1022621e();
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  uVar2 = FUN_1022624e();
  return uVar2;
}


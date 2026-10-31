/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bdfae */

void FUN_101bdfae(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_101bd5e3();
  iVar3 = FUN_1010330d();
  FUN_1010331e();
  thunk_FUN_10119594();
  FUN_101bdce1();
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(iVar3 + 0x7c) = 0;
  *(undefined4 *)(iVar3 + 0x84) = 0;
  *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffbe7;
  FUN_10118d0c();
  FUN_10141def(piVar2);
  return;
}


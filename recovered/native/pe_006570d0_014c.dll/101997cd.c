/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101997cd */

undefined4 FUN_101997cd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100fbf7e();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1010330d();
    uVar2 = FUN_10199805(param_1,param_2,param_3,param_4,uVar2);
  }
  return uVar2;
}


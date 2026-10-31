/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ad9e0 */

undefined4
FUN_1400ad9e0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffffffffffc4;
  
  if (param_3 == 1) {
    iVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return (int)param_2;
    }
    uVar3 = 0x21;
    uVar2 = 8;
    iVar1 = 1;
  }
  FUN_1400a9f20(param_5,param_4,param_2,iVar1,uVar2,CONCAT44(in_stack_ffffffffffffffc4,uVar3),
                param_1,0,1);
  return (int)param_2;
}


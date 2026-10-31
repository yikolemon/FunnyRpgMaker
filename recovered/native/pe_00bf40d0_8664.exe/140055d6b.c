/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140055d6b */

undefined8 FUN_140055d6b(longlong param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  
  FUN_140055e49(param_1,param_2,param_3,(int *)param_4);
  if (*(uint *)(param_1 + 0x188) != *(uint *)(param_1 + 0x18c)) {
    if (*param_4 != 0) {
      uVar1 = FUN_14001de7c(*param_4,*(uint *)(param_1 + 0x188),*(uint *)(param_1 + 0x18c));
      *param_4 = uVar1;
    }
    if (param_4[1] != 0) {
      uVar1 = FUN_14001de7c(param_4[1],*(uint *)(param_1 + 0x188),*(uint *)(param_1 + 0x18c));
      param_4[1] = uVar1;
    }
  }
  return 0;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fe1dc */

void FUN_100fe1dc(float *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  
  if (DAT_1028b430 + *param_1 < param_1[2]) {
    iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
    fVar2 = (float10)FUN_100ea38a(*param_1 + *(float *)(DAT_1039d74c + 0xda8),param_1[2]);
    FUN_1019416e(*(undefined4 *)(iVar1 + 0x2e8),param_1,param_2,*param_1,(float)fVar2,param_3);
  }
  return;
}


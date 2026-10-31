/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103133 */

undefined4 FUN_10103133(float *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if (((((*(float *)(iVar1 + 0x290) <= param_1[3] && param_1[3] != *(float *)(iVar1 + 0x290)) &&
        (param_1[1] <= *(float *)(iVar1 + 0x298) && *(float *)(iVar1 + 0x298) != param_1[1])) &&
       (*(float *)(iVar1 + 0x28c) <= param_1[2] && param_1[2] != *(float *)(iVar1 + 0x28c))) &&
      (*param_1 <= *(float *)(iVar1 + 0x294) && *(float *)(iVar1 + 0x294) != *param_1)) ||
     (((param_2 != 0 &&
       (((param_2 == *(int *)(DAT_1039d74c + 0x1528) || (param_2 == *(int *)(DAT_1039d74c + 0x1550))
         ) || ((param_2 == *(int *)(DAT_1039d74c + 0x2044) ||
               (param_2 == *(int *)(DAT_1039d74c + 0x2058))))))) ||
      (uVar2 = 1, *(char *)(DAT_1039d74c + 0x1526) == '\x01')))) {
    uVar2 = 0;
  }
  return uVar2;
}


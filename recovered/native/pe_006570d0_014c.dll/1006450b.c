/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006450b */

int FUN_1006450b(undefined4 *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  
  if ((byte *)*param_1 == param_2) {
    iVar1 = 1;
  }
  else {
    *param_3 = (uint)*(byte *)*param_1;
    iVar1 = FUN_10064588(param_1,param_2);
    if (iVar1 == 0) {
      *param_3 = (*(byte *)*param_1 & 0x3f) << 0xc | (*param_3 & 7) << 0x12;
      iVar1 = FUN_10064588(param_1,param_2);
      if (iVar1 == 0) {
        *param_3 = *param_3 + (*(byte *)*param_1 & 0x3f) * 0x40;
        iVar1 = FUN_10064588(param_1,param_2);
        if (iVar1 == 0) {
          *param_3 = *param_3 + (*(byte *)*param_1 & 0x3f);
          iVar1 = 0;
        }
      }
    }
  }
  return iVar1;
}


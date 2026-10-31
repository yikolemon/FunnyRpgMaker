/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10249cb0 */

int FUN_10249cb0(int *param_1,int *param_2)

{
  int iVar1;
  uint3 uVar2;
  
  if ((char)param_1[1] == '\0') {
    FUN_1023b0c0();
  }
  if ((char)param_2[1] == '\0') {
    FUN_1023b0c0();
  }
  iVar1 = *param_2;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (*param_1 == 0) {
    if (iVar1 == 0) {
LAB_10249cea:
      return CONCAT31(uVar2,1);
    }
  }
  else if (iVar1 != 0) goto LAB_10249cea;
  return (uint)uVar2 << 8;
}


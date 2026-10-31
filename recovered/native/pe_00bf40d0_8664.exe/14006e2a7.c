/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006e2a7 */

uint FUN_14006e2a7(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_2 < 0xffff) {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      uVar2 = FUN_14007920d(param_1,param_2,1);
      return uVar2;
    }
    if (*param_2 != *(uint *)(param_1 + 5)) {
      uVar2 = FUN_14007944b(param_1,param_2,1);
      return uVar2;
    }
    FUN_140079c04(param_1);
    uVar1 = *(uint *)((longlong)param_1 + 0x2c);
    uVar2 = 0;
    if (uVar1 != 0) {
      *param_2 = *(uint *)(param_1 + 5);
      uVar2 = uVar1;
    }
  }
  return uVar2;
}


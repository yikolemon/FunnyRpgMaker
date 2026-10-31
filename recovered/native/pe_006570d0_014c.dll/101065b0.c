/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101065b0 */

undefined4 FUN_101065b0(uint param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 | 0x800;
  if ((param_2 & 0x3c00) != 0) {
    uVar3 = param_2;
  }
  if (param_3 + 1U < 2) {
    param_3 = *(int *)(DAT_1039d74c + 0x1e3c);
  }
  if (((*(byte *)(DAT_1039d74c + 0x1e40) & 0x40) == 0) &&
     (cVar1 = FUN_10113999(param_1,uVar3,param_3), cVar1 != '\0')) {
    uVar2 = uVar3 | 0x20;
    if ((uVar3 & 0xf1) != 1) {
      uVar2 = uVar3;
    }
    cVar1 = FUN_1011454d(param_1,uVar2,param_3);
    if (cVar1 != '\0') {
      FUN_10114427(param_1 & 0xf000,param_3,0);
      return 1;
    }
  }
  return 0;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010b367 */

undefined8 FUN_18010b367(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar1 = param_2 | 0x800;
  if ((param_2 & 0x3c00) != 0) {
    uVar1 = param_2;
  }
  if (param_3 + 1U < 2) {
    param_3 = *(int *)(DAT_180419160 + 0x1f9c);
  }
  if (((*(byte *)(DAT_180419160 + 0x1fa0) & 0x40) == 0) &&
     (cVar3 = FUN_18011879d(param_1,uVar1,param_3), cVar3 != '\0')) {
    uVar2 = uVar1 | 0x20;
    if ((uVar1 & 0xf1) != 1) {
      uVar2 = uVar1;
    }
    cVar3 = FUN_180119390(param_1,uVar2,param_3);
    if (cVar3 != '\0') {
      FUN_18011926a(param_1 & 0xf000,param_3,0);
      return 1;
    }
  }
  return 0;
}


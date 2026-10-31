/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180230b34 */

undefined8 FUN_180230b34(longlong param_1,char *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = strcmp(param_2,"spread");
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_1 + 0x78);
  }
  else {
    iVar1 = strcmp(param_2,"flip_sign");
    if (iVar1 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + 0x7c);
    }
    else {
      iVar1 = strcmp(param_2,"flip_y");
      if (iVar1 == 0) {
        uVar2 = (uint)*(byte *)(param_1 + 0x7d);
      }
      else {
        iVar1 = strcmp(param_2,"overlaps");
        if (iVar1 != 0) {
          return 0xc;
        }
        uVar2 = (uint)*(byte *)(param_1 + 0x7e);
      }
    }
  }
  *param_3 = uVar2;
  return 0;
}


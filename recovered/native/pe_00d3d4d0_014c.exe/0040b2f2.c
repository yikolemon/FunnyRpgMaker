/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040b2f2 */

void __thiscall FUN_0040b2f2(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((*(uint *)((int)this + 0x3c) & 0x22) == 2) ||
     (uVar1 = **(uint **)((int)this + 0x20), uVar1 == 0)) {
    if ((*(uint *)((int)this + 0x3c) & 4) != 0) {
      return;
    }
    iVar3 = **(int **)((int)this + 0x1c);
    if (iVar3 == 0) {
      return;
    }
    iVar2 = **(int **)((int)this + 0xc);
    *param_1 = iVar2;
    iVar3 = (iVar3 + **(int **)((int)this + 0x2c) * 2) - iVar2 >> 1;
    param_1[1] = iVar3;
  }
  else {
    iVar3 = **(int **)((int)this + 0x10);
    *param_1 = iVar3;
    uVar4 = *(uint *)((int)this + 0x38);
    if (*(uint *)((int)this + 0x38) <= uVar1) {
      uVar4 = uVar1;
    }
    param_1[1] = (int)(uVar4 - iVar3) >> 1;
    iVar3 = (int)((uVar1 + **(int **)((int)this + 0x30) * 2) - iVar3) >> 1;
  }
  param_1[2] = iVar3;
  return;
}


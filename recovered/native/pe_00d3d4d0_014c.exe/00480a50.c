/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480a50 */

void * __thiscall FUN_00480a50(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 == 0) && (param_2 == 0 && param_3 == 0)) {
    iVar1 = 4;
  }
  else {
    iVar1 = 0;
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    iVar1 = FUN_00492caf(*(int *)((int)this + 0x4c),param_1,iVar1,param_2 * 2);
    if (iVar1 == 0) {
      FUN_00480ba0(this,*(undefined4 *)((int)this + 0x4c),1);
      return this;
    }
  }
  return (void *)0x0;
}


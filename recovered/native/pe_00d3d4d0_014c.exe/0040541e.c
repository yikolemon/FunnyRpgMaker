/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040541e */

int __thiscall FUN_0040541e(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (((*(uint *)(iVar1 + 0xc) <= param_1) ||
      (iVar2 = *(int *)(*(int *)(iVar1 + 8) + param_1 * 4), iVar2 == 0)) &&
     (iVar2 = 0, *(char *)(iVar1 + 0x14) == '\x01')) {
    iVar1 = FUN_0047f750();
    if (param_1 < *(uint *)(iVar1 + 0xc)) {
      iVar2 = *(int *)(*(int *)(iVar1 + 8) + param_1 * 4);
    }
  }
  return iVar2;
}


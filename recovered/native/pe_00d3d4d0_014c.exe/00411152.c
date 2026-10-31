/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00411152 */

char * __thiscall FUN_00411152(void *this,char *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)((int)this + 4) + 0xc);
  if (-1 < (int)uVar1) {
    *(uint *)(*(int *)((int)this + 4) + 0xc) = uVar1 + 1;
    FUN_0040c038(param_1,*(int *)((int)this + 8),uVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040ba4e(0x5039d2);
}


/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004112d6 */

char * __thiscall FUN_004112d6(void *this,char *param_1,uint param_2)

{
  if (*(int *)(*(int *)((int)this + 4) + 0xc) < 1) {
    *(undefined4 *)(*(int *)((int)this + 4) + 0xc) = 0xffffffff;
    FUN_0040c038(param_1,*(int *)((int)this + 8),param_2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040ba4e(0x5039a1);
}


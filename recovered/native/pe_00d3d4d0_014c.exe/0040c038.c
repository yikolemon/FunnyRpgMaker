/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040c038 */

char * __cdecl FUN_0040c038(char *param_1,int param_2,uint param_3)

{
  FUN_0040c0b0((void *)(param_2 + 4),param_1,param_3);
  if (*param_1 != '\0') {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040ba4e(0x504b4b);
}


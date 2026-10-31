/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003ddc2 */

undefined8 Catch_14003ddc2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xfc) == '\0') {
    *(undefined4 *)(param_2 + 0xfc) = 0;
    return 0x14003dd0a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140106270(0,0);
}


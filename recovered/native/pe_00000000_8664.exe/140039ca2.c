/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140039ca2 */

void FUN_140039ca2(undefined8 param_1,undefined1 *param_2)

{
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_1400378a0();
    *param_2 = 0;
    FUN_14018a340(param_2 + 0x18);
    FUN_140189df0(param_2 + 0x68);
    FUN_140001dfc(param_2 + 8);
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    thunk_FUN_14018e090(param_2,0xb0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1401aa0e4();
}


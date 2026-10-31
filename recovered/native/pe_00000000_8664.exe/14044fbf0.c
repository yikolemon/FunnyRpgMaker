/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044fbf0 */

void FUN_14044fbf0(int param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = FUN_14044fc40();
  FUN_14044fc50(local_38,*(undefined4 *)(&DAT_1404ecdf8 + (longlong)param_1 * 4),uVar1,
                *(undefined8 *)(&DAT_1404ecdc0 + (longlong)param_1 * 8));
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_38,&DAT_14059fb38);
}


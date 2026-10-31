/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e0168 */

longlong FUN_1800e0168(char *param_1)

{
  longlong lVar1;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_1 == '\x01') {
    lVar1 = FUN_1800e020e(*(undefined8 *)(param_1 + 8));
    return lVar1 + 0x40;
  }
  local_20 = FUN_1800173a0(param_1);
  FUN_1800172c9(local_40,"cannot use operator[] with a string argument with ");
  FUN_180017158(local_78,0x131,local_40,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_78,&DAT_180391520);
}


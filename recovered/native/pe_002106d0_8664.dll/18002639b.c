/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002639b */

longlong FUN_18002639b(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_24 [4];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_18023d240(local_24,0);
  lVar1 = DAT_180417810;
  uVar2 = FUN_18000cbd0(&DAT_1804174a8);
  lVar3 = FUN_18000cc4a(param_1,uVar2);
  if ((lVar3 == 0) && (lVar3 = lVar1, lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_18000cdb9();
  }
  FUN_18023d290(local_24);
  return lVar3;
}


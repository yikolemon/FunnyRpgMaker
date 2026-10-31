/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001b9fd */

longlong FUN_14001b9fd(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_24 [4];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140188dc0(local_24,0);
  lVar1 = DAT_140f2a610;
  uVar2 = FUN_140013ad4(&DAT_140f2a3e0);
  lVar3 = FUN_140013b4e(param_1,uVar2);
  if ((lVar3 == 0) && (lVar3 = lVar1, lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_140013caf();
  }
  FUN_140188e10(local_24);
  return lVar3;
}


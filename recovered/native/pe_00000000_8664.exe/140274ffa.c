/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140274ffa */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140274ffa(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 == param_2) {
    uVar3 = 1;
  }
  else {
    local_3c = 0;
    uVar2 = FUN_14027563b(lVar1);
    uVar3 = 4;
    switch(uVar2) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
    case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      *param_1 = lVar1;
    }
  }
  if (ram0x000140613b10 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_38 ^ (ulonglong)auStack_68);
  }
  return uVar3;
}


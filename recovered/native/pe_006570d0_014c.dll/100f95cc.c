/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f95cc */

void __thiscall FUN_100f95cc(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xbad) == '\x01') {
    uVar1 = DAT_1028b430;
    if (param_3 == '\0') {
      uVar1 = 0;
    }
    FUN_100f9356(param_2,param_3,uVar1);
  }
  return;
}


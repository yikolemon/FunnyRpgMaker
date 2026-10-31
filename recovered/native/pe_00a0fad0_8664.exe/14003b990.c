/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003b990 */

undefined8 FUN_14003b990(undefined8 param_1,longlong param_2)

{
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_2 == 1) {
    FUN_14000169c(local_98,"A subcommand");
    FUN_14003b76e(param_1,local_98);
  }
  else {
    FUN_14001943c(local_38);
    FUN_140018136(local_58,"Requires at least ",local_38);
    FUN_14000ed8c(local_78,local_58," subcommands");
    FUN_14003cc70(param_1,local_78,0x6a);
    FUN_1400017de(local_58);
    FUN_1400017de(local_38);
  }
  return param_1;
}


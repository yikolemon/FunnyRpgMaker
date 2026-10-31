/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001ed88 */

undefined8 FUN_14001ed88(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_78 [64];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(longlong *)(param_3 + 0x40) - *(longlong *)(param_3 + 0x38) == 0x20) {
    FUN_140006874(param_2);
  }
  else {
    if (*(longlong *)(param_3 + 0x38) != *(longlong *)(param_3 + 0x40)) {
      FUN_140029f44(param_3,local_38);
      FUN_140029eb2(local_78,local_38);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_78,&DAT_14017a3a8);
    }
    FUN_14000169c(param_2,&DAT_14016e735);
  }
  return param_2;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027fb1c */

void FUN_14027fb1c(longlong param_1)

{
  undefined1 local_290 [568];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_1402132d4(local_38,"ckendFlags: HasSetMousePos",0);
    FUN_140213160(local_58,param_1,local_38);
    FUN_14027f558(local_290,local_58,param_1 + 0x21);
    FUN_1402b07e8(param_1 + 0x28,local_290);
    FUN_1402810ca(local_290);
    FUN_14021331c(local_58);
    FUN_14021331c(local_38);
  }
  return;
}


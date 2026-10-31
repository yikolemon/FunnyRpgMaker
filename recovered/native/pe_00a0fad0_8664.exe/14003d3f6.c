/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003d3f6 */

undefined8 FUN_14003d3f6(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [39];
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0x20) == 2) {
    FUN_140006874(local_90,param_1);
    uVar2 = FUN_140030de8(uVar2,local_90);
  }
  else if (*(int *)(param_1 + 0x20) == 3) {
    FUN_140006874(local_b0,param_1);
    uVar2 = FUN_140030cdc(uVar2,local_b0);
  }
  else {
    FUN_140006874(local_70,param_1);
    cVar1 = FUN_140030cdc(uVar2,local_70);
    uVar2 = 1;
    if (cVar1 == '\0') {
      uVar2 = *param_2;
      FUN_140006874(local_50,param_1);
      local_29 = 1;
      uVar2 = FUN_140030de8(uVar2,local_50);
    }
  }
  return uVar2;
}


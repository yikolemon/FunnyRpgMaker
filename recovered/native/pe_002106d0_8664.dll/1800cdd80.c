/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cdd80 */

void FUN_1800cdd80(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  iVar4 = fflush(*(FILE **)(param_1 + 0x70));
  if (iVar4 == 0) {
    return;
  }
  puVar3 = (undefined4 *)FUN_18027e66c();
  uVar1 = *puVar3;
  FUN_180003216(local_40,param_1 + 0x78);
  FUN_180012917(local_60,"Failed flush to file ",local_40);
  FUN_1800ce2bc(local_60,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


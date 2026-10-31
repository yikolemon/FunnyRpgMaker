/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e2bca */

int FUN_1400e2bca(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    FUN_1400e2083(param_1);
  }
  iVar1 = FUN_1400e2c5a(param_1,param_2,param_3,0);
  if (iVar1 != -1) {
    if (param_4 != 0) {
      FUN_1400e2f24(param_1,iVar1,param_4);
    }
    if (*(char *)(param_1 + 0x51) == '\x01') {
      puVar2 = (undefined2 *)FUN_1400e2faf(param_1,iVar1);
      FUN_1400e1b7a(param_1,*(undefined8 *)(param_1 + 0x38),*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    }
  }
  return iVar1;
}

